#include<iostream>
using namespace std;

int main(){


    /*
    2 will be converted into 1's complement first and then do 2's complement on 1's rcomplement result, then you get the ~2 value, and also if the most significant bit is 1 (lsb) then it is a negative value
    */
   int a=2;
   int b=3;

   cout<< (a&b)<<endl;
   cout<<(a|b)<<endl;
   cout<<(~a)<<endl;
   cout<<(a^b)<<endl;
}