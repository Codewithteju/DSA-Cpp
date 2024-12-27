#include<iostream>
#include<math.h>
using namespace std;
int main() {

        int n;
        cin>>n;
        int digit=0;
        int ans=0;
        while(n!=0){
            digit=n%10;
            if (ans >= -214748364 && ans <= 214748364) {
             ans = ans * 10 + digit;
            }
            else {
               ans = 0;
               break;
            }
            n=n/10;
        }
        cout<< ans<<" is the Reversed Integer";
    };
