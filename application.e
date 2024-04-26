note
	description: "wordfreq application root class"
	date: "$Date$"
	revision: "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS_32

create
	make

feature {NONE} -- Initialization
	make
			-- Run application.
		local
			word_dict: HASH_TABLE [INTEGER, STRING]	-- Hash  Table que relaciona uma palabra a sua frequência
			extractor: WORD_EXTRACTOR
			stop_remover: STOP_REMOVER
			freq_counter: FREQ_COUNTER
			sorter: SORTER		-- Declarando as classes que serão utilizadas
			temp_list: LINKED_LIST [STRING]
			stop_words: LINKED_LIST [STRING]	-- Lista de Stopwords
			final_list: LINKED_LIST [STRING]	-- Lista de Output
			temp_string: STRING		-- Armazenador temporário de string
			path1: STRING
			path2: STRING		-- Os caminhos de arquivo do arquivo principal e o de stop words respectivamente
			chk1: BOOLEAN -- Os cheques são usados paa corrigir exceções, sendo mudados pela opeação de rescue
			chk2: BOOLEAN
			chk3: BOOLEAN
			chk4: BOOLEAN
			chk5: BOOLEAN
			n: INTEGER
			i: INTEGER
			handler: EXCEPTIONS
			step: INTEGER -- Indica em que etapa da execução está para o abordador de exceções
		do
			create word_dict.make (100)
			create extractor.make
			create temp_list.make
			create stop_words.make -- Inicializando algumas vaiáveis
			path1 := "frankstein_chpt4.txt"  -- Arquivo padrão caso o arquivo do usuário não seja valido
			if not chk1 then
				print("File path: ")
				IO.read_line
				path1 := IO.last_string
				print("%N")
			end
			path2 := "stop-words.txt" -- Caminho para o arquivo de stop words
			step := 0 -- Etapa da execução para propósito de corrigir exceções
			print ("Step ")
			print (step)
			print (": Extracting Text %N")
			temp_list := extractor.extract_words (path1) -- Retorna lista de palavras no arquivo
			step := 1
			print ("Step ")
			print (step)
			print (": Extracting Stop Words %N")
			if not chk2 then
				stop_words := extractor.extract_words (path2) -- Retorna lista de palavras no arquivo de stopwords
			else -- Se teve exceção na ultima tentativa, utiliza o arquivo padrão stop
				stop_words := extractor.extract_words ("stop.txt")
			end
			step := 2
			print ("Step ")
			print (step)
			print (": Removing Stop Words from List %N")
			create stop_remover.make
			if not chk3 then
				temp_list := stop_remover.remove_stops (temp_list, stop_words) -- Remove palavas presentes em stop_words de temp_list
			else
				temp_list := temp_list -- Caso de qualquer erro, retorne a lista não modificada
			end
			step := 3
			print ("Step ")
			print (step)
			print (": Counting the Frequency of Words %N")

			create freq_counter.make
			create word_dict.make (100)
			if not chk4 then -- Se de alguma forma deu erro na hoa de contar a frequencia, o dicionário é deixado vazio
				word_dict := freq_counter.frequency (temp_list)
			end

			step := 4
			print ("Step ")
			print (step)
			print (": Sorting List %N")
			create final_list.make
			from -- Criando final_list composta só de elementos únicos através do dicionário
				word_dict.start
			until
				word_dict.after
			loop
				temp_string := word_dict.key_for_iteration -- Pegando a chave (palavra) na posição do dicionário atual
				final_list.extend (temp_string) -- Adiciona a chave à lista
				word_dict.forth -- Isso vai para a próxima posição do dicionário
			end
			create sorter.make
			if not chk5 then -- Se tiver dado erro em ordena na última execução, não ordena a lista
				final_list := sorter.mergesort_key (final_list, word_dict) -- Ordena a lista baseada na sua frequência no dicionário que acompanha
			end
			from
				final_list.start; i := 0
			until
				final_list.exhausted or i >= 25
			loop
				print (final_list.item + " ")
				n := 0
				if word_dict.has (final_list.item) then -- Se de alguma foma um item da lista não estive no dicionário, sua frequência é 0
					n := word_dict.at (final_list.item)
				end
				print (n)
				print ("%N")
				final_list.forth
				i := i + 1
			end
			if final_list.is_empty then
				print ("Nenhuma palavra valida encontrada")
			end

		rescue -- Trata exceções com base na etapa de execução do programa
			if step = 0 then
				print ("ERROR: The wordlist filepath '")
				print (path1)
				print ("' does not lead to a readable file" + "%N")
				print ("Using default file: 'frankstein_chpt4.txt'" + "%N")
				chk1 := TRUE
				retry
			elseif step = 1 then
				print ("ERROR: The stopword filepath '")
				print (path2)
				print ("' does not lead to a readable file" + "%N")
				print ("Using default file: 'stop.txt'" + "%N")
				chk2 := TRUE
				retry
			elseif step = 2 then
				print ("ERROR: Error in removing stop words, returning unchanged word list %N")
				chk3 := TRUE
				retry
			elseif step = 3 then
				print ("ERROR: Couldn't determine frequency, returning empty dictionary %N")
				chk4 := TRUE
				retry
			elseif step = 4 then
				print ("ERROR: Couldn't order frequency list, returning results unordered %N")
				chk5 := TRUE
				retry
			end
		end

end
