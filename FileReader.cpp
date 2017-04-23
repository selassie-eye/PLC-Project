#include "FileReader.hpp"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//	Constructors
FileReader::FileReader(void){}
FileReader::~FileReader(){}
FileReader::FileReader(char* filename)
{
	_filename = filename;
	parseLines();
}

// Line parser
void FileReader::parseLines(void) 
{
	string str;
	_file.open(_filename);
	while(getline(_file, str)) _lines.push_back(str);
	_file.close();
}

//	Line accessors
parsedLines_t FileReader::getLines(void) 
{ 
	parseLines();
	return _lines; 
}
string FileReader::getLine(int i) 
{ 
	parseLines();
	return _lines[i]; 
}


//	_filename accessors/mutators
char* FileReader::getFilename(void) { return _filename; }
void FileReader::setFilename(char* filename) { _filename = filename; }

//	Prints
void FileReader::print(void)
{
	for (unsigned int i = 0; i < _lines.size(); i++) cout << _lines[i] << endl;
}
void FileReader::print(int i)
{
	cout << endl << getLine(i) << endl;
}

