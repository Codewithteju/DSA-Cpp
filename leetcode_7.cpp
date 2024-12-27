#include<iostream>
#include<math.h>
using namespace std;

//Decimal to Binary
int main(){
    int n;
    cin>>n;
    int rem=0;
    int ans=0;
    int place=1;
    while(n!=0){

        rem=n%2;
        ans=rem * place+ans;
      
        n=n/2;
        place*=10;
   
    }
    cout<<ans<< " This is the binary "<<endl;
} 