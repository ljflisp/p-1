#include <iostream>
#include <vector>
#include <fstream>
#include "lexer/Lexer.h"
#include "parser/Parser.h"

using namespace std;

imt main(int argc,char *argv[]) {
  string code;

  ifstream myfile (argv[1]);
  string line;
  if(myfile.is_open()) {
    while(getline (myfile,line) ) {
      for(int i= 0;i<line.length;i++) {
        
      }
    }
  }
}