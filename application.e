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
			word_dict: HASH_TABLE [INTEGER, STRING]	-- Hash  Table que relaciona uma palabra a sua frequ�ncia
			extractor: WORD_EXTRACTOR
			stop_remover: STOP_REMOVER
			freq_counter: FREQ_COUNTER
			sorter: SORTER		-- Declarando as classes que ser�o utilizadas
			temp_list: LINKED_LIST [STRING]
			stop_words: LINKED_LIST [STRING]	-- Lista de Stopwords
			final_list: LINKED_LIST [STRING]	-- Lista de Output
			temp_string: STRING		-- Armazenador tempor�rio de string
			path1: STRING
			path2: STRING		-- Os caminhos de arquivo do arquivo principal e o de stop words respectivamente
			chk1: BOOLEAN -- Os cheques s�o usados paa corrigir exce��es, sendo mudados pela opea��o de rescue
			chk2: BOOLEAN
			chk3: BOOLEAN
			chk4: BOOLEAN
			chk5: BOOLEAN
			n: INTEGER
			i: INTEGER
			handler: EXCEPTIONS
			step: INTEGER -- Indica em que etapa da execu��o est� para o abordador de exce��es
		do
			create word_dict.make (100)
			create extractor.make
			create temp_list.make
			create stop_words.make -- Inicializando algumas vai�veis
			path1 := "frankstein_chpt4.txt"  -- Arquivo padr�o caso o arquivo do usu�rio n�o seja valido
			if not chk1 then
				print("File path: ")
				IO.read_line
				path1 := IO.last_string
				print("%N")
			end
			path2 := "stop-words.txt" -- Caminho para o arquivo de stop words
			step := 0 -- Etapa da execu��o para prop�sito de corrigir exce��es
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
			else -- Se teve exce��o na ultima tentativa, utiliza o arquivo padr�o stop
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
				temp_list := temp_list -- Caso de qualquer erro, retorne a lista n�o modificada
			end
			step := 3
			print ("Step ")
			print (step)
			print (": Counting the Frequency of Words %N")

			create freq_counter.make
			create word_dict.make (100)
			if not chk4 then -- Se de alguma forma deu erro na hoa de contar a frequencia, o dicion�rio � deixado vazio
				word_dict := freq_counter.frequency (temp_list)
			end

			step := 4
			print ("Step ")
			print (step)
			print (": Sorting List %N")
			create final_list.make
			from -- Criando final_list composta s� de elementos �nicos atrav�s do dicion�rio
				word_dict.start
			until
				word_dict.after
			loop
				temp_string := word_dict.key_for_iteration -- Pegando a chave (palavra) na posi��o do dicion�rio atual
				final_list.extend (temp_string) -- Adiciona a chave � lista
				word_dict.forth -- Isso vai para a pr�xima posi��o do dicion�rio
			end
			create sorter.make
			if not chk5 then -- Se tiver dado erro em ordena na �ltima execu��o, n�o ordena a lista
				final_list := sorter.mergesort_key (final_list, word_dict) -- Ordena a lista baseada na sua frequ�ncia no dicion�rio que acompanha
			end
			from
				final_list.start; i := 0
			until
				final_list.exhausted or i >= 25
			loop
				print (final_list.item + " ")
				n := 0
				if word_dict.has (final_list.item) then -- Se de alguma foma um item da lista n�o estive no dicion�rio, sua frequ�ncia � 0
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

		rescue -- Trata exce��es com base na etapa de execu��o do programa
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
