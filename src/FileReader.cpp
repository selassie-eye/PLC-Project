#include "FileReader.hpp"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//	Constructors
FileReader::FileReader(void){}
FileReader::~FileReader(){}
FileReader::FileReader(char* filename) {
	_filename = filename;
	parseLines();
}

// Line parser
void FileReader::parseLines(void) {
	string str;
	_file.open(_filename);
	while(getline(_file, str)){ this->_lines.push_back(str); }
	_file.close();
        cout << endl << this->_lines.size() << endl;
}

//	Line accessors
parsedLines_t FileReader::getLines(void) { 
	return this->_lines; 
}
string FileReader::getLine(unsigned int i) { 
	if (i < this->_lines.size()) return this->_lines[i];
	else return "ERROR: LINE IS OUT OF BOUNDS";
}


//	_filename accessors/mutators
char* FileReader::getFilename(void) { return _filename; }
void FileReader::setFilename(char* filename) { _filename = filename; }

//	Prints
void FileReader::print(void) {
	for (unsigned int i = 0; i < this->_lines.size(); i++) cout << this->_lines[i] << endl;
}
void FileReader::print(int i) { cout << endl << getLine(i) << endl; }

