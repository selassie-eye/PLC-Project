/* 
 * File:   Tokenizer.hpp
 * Author: khari
 *
 * Created on April 24, 2017, 8:00 PM
 */

#ifndef TOKENIZER_HPP
#define	TOKENIZER_HPP
#include <map>
#include "FileReader.hpp"

struct tokenlist_t{
    line_t line;
    parsedLines_t tokens;
};

class Tokenizer {
public:
    Tokenizer();
    Tokenizer(const Tokenizer& orig);
    virtual ~Tokenizer();
    
    tokenlist_t tokenize(FileReader*, int);
    void tokenize(FileReader*);
    
    tokenlist_t getTokenlist(unsigned int);
    
    void printTokens(FileReader*, int);
private:
    map<unsigned int, tokenlist_t> _tokenmap;

};

#endif	/* TOKENIZER_HPP */

