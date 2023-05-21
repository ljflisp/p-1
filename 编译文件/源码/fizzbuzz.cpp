#include<iostream>

using namespace std;

int main() {
   int x;
   for(int i=0; i<=100; i++)
     {
       x=i;
       if((x%3)==0&&(x%5)==0)
         cout<<"FIZZBUZZ"<<endl;
       else if((x%3)==0&&(x%5)!=0)
         cout<<"FIZZ"<<endl;
       else if((x%3)!=0&&(x%5)==0)
         cout<<"BUZZ"<<endl;
       else
         cout<<x<<endl;
     }
  return 0;
}