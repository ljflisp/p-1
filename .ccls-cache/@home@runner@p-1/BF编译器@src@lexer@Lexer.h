#include <iostream>
#include <string>
#include <regex>
#include <algorithm>
#include "Token.h"

using namespace std;

class Lexer {
   private :
   string src;
   protected;
   int checkRegex(string code,Regex regexToken) {
     string currentToken = "";
     for(int i= 0;i<code.length();++i) {
       currentToken += code[i];
       try {
         if(regex_match(currentToken,regexToken) && ! (regex_match(currentToken+code[i+1],regexToken))) {
           return currentToken.length();
         }
       } catch(...) {
         
       }
     }
     return -1;
   }
   Token getToken() {
     Toekn token;
     bool isMatched = false;
     while(src[0]== ' '|| src[0]== '\n') {
       src = src.substr(1,src.size());
     }
     for(int i= 0;i<TokenType.size();i++) {
       int isTrue = checkRegex(src,regex(TokenRegexes[i]));
       if (isTrue > 0) {
         isMatched = true;
         token.type = TokenType[i];
         token.value = src.substr()
       }
     }
   }
}