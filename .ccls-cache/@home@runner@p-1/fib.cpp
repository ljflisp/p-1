#include <iostream>
using namespace std;

int fib(int n){
  if(n== 1 || n== 2)
    return 1;
  else
    return fib(n-1)+fib(n-2);
}

int fib(void){
     int i;
     for(i= 0;i<15;i++){
       cout<<fib(i)<<"\n";
     }
  cout<<fib(20);
  return 0;
}