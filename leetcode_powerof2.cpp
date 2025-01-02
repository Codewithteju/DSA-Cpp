#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cin>>n;
        int i = 0;
        bool ans = false;
        while (i <= 30) {
            int value = pow(2, i);
            if (value == n) {
                ans= true;
            }
            i++;
        }
    
        if(ans){
            cout<<"Given number is a power of 2"<<endl;
        }else{
            cout<<"Given number is not a power of 2"<<endl;
        }
    }