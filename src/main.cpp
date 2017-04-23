#include <iostream>
#include <fstream>
#include "FileReader.hpp"
using namespace std;

int main(int argc, char* argv[])
{
	// FileReader teseting
	if (argc > 0) {
		FileReader* reader = new FileReader(argv[1]);
		reader->print();
		reader->print(13);
	}
	
	return 0;
} 
