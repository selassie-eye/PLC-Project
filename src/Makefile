main: main.o FileReader.o Tokenizer.o
	g++ -Wall main.o FileReader.o Tokenizer.o -o main

FileReader.o: FileReader.cpp FileReader.hpp
	g++ -Wall -c FileReader.cpp
	
Tokenizer.o: Tokenizer.cpp Tokenizer.hpp
	g++ -Wall -c Tokenizer.cpp
	
main.o: main.cpp FileReader.hpp Tokenizer.hpp
	g++ -Wall -c main.cpp

clean:
	\rm *.o main