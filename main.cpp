#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]){
	// This code is for practicing opening and closing files
	fstream file;
	file.open(argv[1], ios::in | ios::out);
	file << "Writing test." << endl;
	string string;
	file >> string;
	cout << string << endl;
	file.close();
	return 0;
} 
