#include <iostream>
#include <iomanip>
#include "ljflisp.h"
using namespace std;
using namespace Ljflisp;

int main() {
//  std::cout << "Hello World!\n";
  ljfclojure pai= ljfclojure();
  for(int i= 0;i<150000;i++){
    pai.iterate();
  }
  cout<<"pi= "<<setprecision(20)<<pai.p<<"\n";
  return 0;
}