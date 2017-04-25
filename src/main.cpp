#include <iostream>
#include <fstream>
#include "FileReader.hpp"
#include "Tokenizer.hpp"
using namespace std;


// TODO: Sanitize tokens for semicolons, other punctuation
// TODO: Logical operations on tokens.
int main(int argc, char* argv[])
{
	// FileReader teseting
	if (argc > 0) {
		FileReader* reader = new FileReader(argv[1]);
                Tokenizer* tokenizer = new Tokenizer();
//		reader->print();
//		reader->print(8);
              
//              tokenizer->printTokens(*reader, 15);
                tokenizer->tokenize(reader);
	}
	return 0;
} 
