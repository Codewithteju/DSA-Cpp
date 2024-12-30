#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the amount to get the denomination by 100,50,20,1 notes: "<<endl;
    cin>>n;
    int hund_notes;
    int fifty_notes;
    int twen_notes;
    int one_notes;
    
   
    switch(100){
        case 100:
            hund_notes=n/100;
            cout<<" You need "<<hund_notes<<" hundred notes for given amount "<<n<<endl;
            n=n%100;  
        case 50:
            fifty_notes =n/50;
            cout<<" You need "<<fifty_notes<<" fifty notes for given amount "<<endl;
            n=n%50;   
        case 20:
            twen_notes=n/20;
            cout<<" You need "<<twen_notes<<" twenty notes for given amount "<<endl;
            n=n%20;   
        case 1:
            one_notes=n/1;
            cout<<" You need "<<one_notes<<" one rupee notes for given amount "<<endl;
            n=n%1;
            break;
        default:
            cout<<"Nothing works with the expected denomination for the given amount"<<endl;

        }

    



    
}