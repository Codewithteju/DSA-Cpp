#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for (int i=2; i<n;i++){
        if(n%i==0){
            cout<<n<<" "<<"is not a prime number"<<endl;
            break;
        }
        
        if(i==n-1){
         cout<<n<<" "<<"is a Prime Number"<<endl;
        }

    }
}