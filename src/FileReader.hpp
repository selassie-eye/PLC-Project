#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

typedef vector<string> parsedLines_t;

class FileReader
{
public:
					 /*  Constructors   */
						FileReader(void);
						FileReader(char* filename);
						~FileReader(void);
						
	//	These functions retrieve and return lines from a specified file
	parsedLines_t		getLines			(void);
	string				getLine				(unsigned int);
	
	//	_filename accessors/mutators
	char*				getFilename			(void);
	void				setFilename			(char*);
	
	//	Prints the whole file or just a certain line
	void				print				(void);
	void				print				(int);

private:
	fstream	 			_file;				// File to be read
	char*				_filename;			// File name
	parsedLines_t		_lines;				// Lines taken from file
	
	//	Parses each line in a file into a string vector for further analysis
	void	 			parseLines			(void);

	
		

};