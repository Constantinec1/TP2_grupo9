note
	description: "Summary description for {WORD_EXTRACTOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	WORD_EXTRACTOR

create
	make
feature
	util : FILE_UTILITIES
	make
	do

	end

	extract_words (path : STRING) : LINKED_LIST[STRING]	-- Recebe como argumento um caminho para um arguivo
		require
			valid_path:  util.file_exists(path)	-- Garante que existe um arquivo
		local
			temp_string: STRING
			wordlist: LINKED_LIST[STRING]
			input_file : PLAIN_TEXT_FILE
			temp_char : CHARACTER
		do
			temp_string := ""
			create wordlist.make
			create input_file.make_open_read (path)	-- Abre o arquivo para a leitura
			from input_file.read_character
			until input_file.off
        	loop		-- O loop lê todo caracter no arquivo e separa em palavras através dos separadores abaixo, colocando todas as palavras em uma lista
        		temp_char := input_file.last_character
        		if temp_char = ' ' or temp_char = ',' or temp_char = '.' or temp_char = '!' or temp_char = '?' or temp_char = ';' or temp_char = '%N' then
        			if not temp_string.is_empty then
        				wordlist.extend(temp_string)
        			end
        			temp_string := ""
        		else
        			temp_string.extend (temp_char)
        		end
            	input_file.read_character
            end
            if not temp_string.is_empty then	-- Se não estiver vazia a string restante, adiciona ela ao fim da lista
            	wordlist.extend(temp_string)
            end
            input_file.close
            Result := wordlist		-- Retorna a lista
        end
end

