note
	description: "Summary description for {FREQ_COUNTER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	FREQ_COUNTER
create
	make
feature
	temp_count : INTEGER
	make
	do

	end
	frequency (list : LINKED_LIST[STRING]) : HASH_TABLE[INTEGER,STRING]		-- Recebe a lista e retorna uma hash table que relaiona cada palabra a sua frequencia
		local
			word_dict: HASH_TABLE[INTEGER,STRING]
			temp_word: STRING

		do
			create word_dict.make (100)
			across list as word loop
				temp_word := word.item.out
				if not word_dict.has (temp_word) then	-- Se a palavra não está no dicionário, coloca ela com incidencia 1
					word_dict.put (1, temp_word)
				else
					temp_count := word_dict.item (temp_word)
					temp_count := temp_count + 1
					word_dict.replace (temp_count, temp_word)	-- Muda o valor daquela chave para incidência + 1
				end
		 	end
		 	Result := word_dict		-- Retorna a Hash table
		end
	invariant
		positive: temp_count >= 0;		-- Garante que o contador de incidência nunca será negativo
end
