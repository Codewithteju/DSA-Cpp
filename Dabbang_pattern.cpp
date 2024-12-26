#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n) {

        //Print 1st triangle for Numbers
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j+=1;
        }
        
        //Print stars for 2nd triangle
        int space =1;
        while(space<=2*(i-1)){
            cout<<"*";
            space+=1;
        }
        
        //Print stars for 3rd triangle
        // int start =i-1;
        // while(start>0){
        //     cout<<"*";
        //     start-=1;
        // }

        //Print last set of Numbers

        int k=n-i+1;
        while(k>0){
            cout<<k;
            k-=1;
        }


        cout<<endl;
        i+=1;

    }
}