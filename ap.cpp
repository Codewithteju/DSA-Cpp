#include<iostream>
using namespace std;


int AP(int n){
    int ap=(3*n)+7;
    return ap;
}
int main(){

    int n;
    cout<<"Enter the input value: "<<endl;
    cin>>n;

    int arith_prog= AP(n);
    cout<<"The nth term for given input "<<n<<" is: "<<arith_prog<<endl;

}