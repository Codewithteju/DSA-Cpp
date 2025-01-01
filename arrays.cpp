#include<iostream>
using namespace std;


int getMax(int num[], int n){
    int max=INT16_MIN;

    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}

int getMin(int num[], int n){
    int min=INT16_MAX;

    for(int i=0;i<n;i++){
        if(min>num[i]){
            min=num[i];
        }
    }
    return min;
}

int main(){

    int size;
    cin>>size;

    cout<<"We are getting max and min values from the array"<<endl;

    int num[100];
    
    for (int i=0;i<size;i++){

        cin>>num[i];
    }
    cout<<"Max value from the array: "<<getMax(num,size)<<endl;
    cout<<"Min value from the array: "<<getMin(num,size)<<endl;

}