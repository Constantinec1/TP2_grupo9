note
	description: "Summary description for {STOP_REMOVER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	STOP_REMOVER
create
	make
feature
	make
	do

	end

	remove_stops (list : LINKED_LIST[STRING]; stops : LINKED_LIST[STRING]) : LINKED_LIST[STRING]
		local
			crnt_word: STRING
			checked_word: STRING
			new_list: LINKED_LIST[STRING]
		do
			create new_list.make
			new_list := list
			across stops as word loop	-- Itera por toda stop word
				crnt_word := word.item.out
				from
					new_list.start
				until
					new_list.exhausted
				loop		-- Itera por toda a lista para cada stop word
					checked_word := new_list.item.out
					if checked_word.is_equal(crnt_word) then	-- Se a palavra é igual à stop word atual, a remove
						new_list.remove
					else		-- Se não, vai para o próximo elemento
						new_list.forth
					end
				end

		 	end
		 	Result := new_list
		ensure
			remocao: Result.count <= list.count	-- Garante que a nova lista é menor ou igual à original
		end
end
