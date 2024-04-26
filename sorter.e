note
	description: "Summary description for {SORTER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SORTER
create
	make
feature
	make
	do

	end
	bubblesort_key(list : LINKED_LIST[STRING]; dict : HASH_TABLE[INTEGER,STRING]) : LINKED_LIST[STRING] -- Não utilizado mais, mas mantido por completude
	local
		crnt_index : INTEGER
		iter : INTEGER
		maxiter : INTEGER
		temp_stringR: STRING
		temp_stringL: STRING
		temp_list: LINKED_LIST[STRING]
	do
		temp_list := list
		maxiter := temp_list.count
		from
		    iter := 1
		until
		    iter >= maxiter
		loop
			print(iter)
		    from
		    	crnt_index := 1
		    until
		    	crnt_index >= maxiter - iter + 1
		    loop
		    	temp_list.start
		    	temp_stringL := temp_list.at(crnt_index)
		    	temp_stringR := temp_list.at(crnt_index+1)
		    	if not dict.has(temp_stringL) or (dict.has(temp_stringR) and (dict.item(temp_stringR) > dict.item(temp_stringL)))then
					temp_list.go_i_th (crnt_index)
					temp_list.swap (crnt_index+1)
		    	end
		    	crnt_index:= crnt_index + 1
		    end
		    iter := iter + 1
		end
		Result := temp_list
	end


	mergesort_key(list : LINKED_LIST[STRING]; dict : HASH_TABLE[INTEGER,STRING]) : LINKED_LIST[STRING] -- Algoritmo utilizado no código, ordena do maior para o menor
	local
		half_index : INTEGER
		index : INTEGER
		max_index: INTEGER
		max_index2: INTEGER
		right_string: STRING
		left_string: STRING
		output_list: LINKED_LIST[STRING]
		left_list: LINKED_LIST[STRING]
		right_list: LINKED_LIST[STRING]
		sorter: SORTER
	do
		create sorter.make
		output_list := list
		create left_list.make
		create right_list.make
		max_index := output_list.count	-- Estabelescendo o index máximo da lista original,
		if max_index <= 1 then
			Result := output_list	-- Condição de parada
		else
			half_index := max_index // 2	-- Pegando o ponto do meio da lista, para dividi-la
			from index := 1
			until index > max_index
			loop
			right_string := output_list.at (index)
				if index <= half_index then			-- Copiando a primeira metade para left_list e a segunda para right_list
					left_list.extend (right_string)
				else
					right_list.extend (right_string)
				end
				index := index + 1
			end
			output_list.wipe_out -- Limpando o output_list para poder reutilizá-lo como realmente o output
			left_list := sorter.mergesort_key(left_list, dict)
			right_list := sorter.mergesort_key(right_list, dict)	-- Fazendo a chamada recursiva para a lista representante cada metade
			max_index := left_list.count
			max_index2 := right_list.count		-- Estabelescendo os indexes máximos de cada lista menor
			from half_index := 1; index := 1
			until (half_index > max_index) and (index > max_index2)
			loop
				if  half_index > max_index then		-- Se a lista da esquerda tiver terminado, automaticamente adiciona da direita
					right_string := right_list.at (index)
					output_list.extend (right_string)
					index := index + 1
				elseif index > max_index2 then	-- Se a lista da direita tiver terminado, automaticamente adiciona da esquerda
					left_string := left_list.at (half_index)
					output_list.extend (left_string)
					half_index := half_index + 1
				else
					right_string := right_list.at (index)
					left_string := left_list.at (half_index)
					if dict.at (right_string) >= dict.at (left_string) then		-- Se a da direita é maior ou igual à da esquerda, adiciona essa string primeiro
						output_list.extend (right_string)
						index := index + 1
					else		-- Se não, adiciona a string da esquerda
						output_list.extend (left_string)
						half_index := half_index  + 1
					end
				end
			end
			Result := output_list		-- Retorna a lista de entrada ordenada do maior para o menor
		end
	ensure
		list.count = Result.count;	-- Estabelescendo que o a saída tem que ter o mesmo tamanho da entrada, obviamente
	end
end

