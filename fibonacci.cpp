#include<iostream>
using namespace std;


int fibonacci(int n){
    int a=0;
    int b=1;
    for(int i=1;i<n; i++){

        int fib=a+b;
        if(i==n-2){
            return fib;
        }
        a=b;
        b=fib;
    }
}

int main(){

    int n;
    cin>>n;
    int res= fibonacci(n);
    cout<<"The nth fibonacci number for the given input is: "<<res<<endl;

}