#include<iostream>
using namespace std;

int Setbits(int n){
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
       n=n>>1; 
    }
    return count;
}
int main(){

    int a;
    cin>>a;

    int b;
    cin>>b;
    int count=0;

    int setbitsa=Setbits(a);
    int setbitsb=Setbits(b);

    cout<<"No of set bits in a&b are: "<<setbitsa+setbitsb<<endl;

}