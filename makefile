main: main.o FileReader.o
	g++ -Wall main.o FileReader.o -o main

FileReader.o: FileReader.cpp FileReader.hpp
	g++ -Wall -c FileReader.cpp

main.o: main.cpp FileReader.hpp
	g++ -Wall -c main.cpp

clean:
	\rm *.o *~ main

