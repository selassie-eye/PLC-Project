/* 
 * File:   Tokenizer.cpp
 * Author: khari
 * 
 * Created on April 24, 2017, 8:00 PM
 */

#include "Tokenizer.hpp"

Tokenizer::Tokenizer() {
}

Tokenizer::Tokenizer(const Tokenizer& orig) {
}

Tokenizer::~Tokenizer() {
}

tokenlist_t Tokenizer::tokenize(FileReader* reader, int i){
    tokenlist_t tokenlist;
    parsedLines_t tokens;
    line_t line = reader->getLine(i);
    tokenlist.line = line;
    
    int tokenStart;
    for(unsigned int j = 0; j < line.size(); j++){
        if (line[j] != ' '){
            line_t token;
            int tokenLen = 1;
            tokenStart = j;
            j++;
            while(line[j] != ' '){
                tokenLen++;
                j++;
            }
            token = line.substr(tokenStart, tokenLen);
            tokenlist.tokens.push_back(token);
        }
    }
    return tokenlist;
}

void Tokenizer::tokenize(FileReader* reader){
    parsedLines_t lines = reader->getLines();
    tokenlist_t tokenlist;
    for (unsigned int i = 0; i < lines.size(); i++){
        tokenlist = tokenize(reader, i);
        _tokenmap.insert(pair<unsigned int, tokenlist_t>(i, tokenlist));
        cout << "LINE: " << tokenlist.line << endl;
        for (unsigned int j = 0; j < tokenlist.tokens.size(); j++){
            cout << "   TOKEN: " << tokenlist.tokens[j] << endl;
        }
    }
}

tokenlist_t Tokenizer::getTokenlist(unsigned int i){ return _tokenmap[i]; }

void Tokenizer::printTokens(FileReader* reader, int i){
    parsedLines_t tokens;
    line_t line = reader->getLine(i);
    cout << endl << "Tokens of line " << i << ":" << endl;
    int tokenStart;
    for(unsigned int j = 0; j < line.size(); j++){
        if (line[j] != ' '){
            line_t token;
            int tokenLen = 1;
            tokenStart = j;
            j++;
            while(line[j] != ' '){
                tokenLen++;
                j++;
            }
            token = line.substr(tokenStart, tokenLen);
            cout << token << endl;
        }
    }
}

