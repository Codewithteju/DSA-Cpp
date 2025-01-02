#include<iostream>
using namespace std;


int printsum(int arr[], int size){

    int sum=0;
    cout<<"Printing sum of the array members"<<endl;
    cout<<endl;


    for (int i=0; i<size; i++){
        sum=sum+arr[i];

    }
   
    return sum;
}

int main(){

    int size;
    cout<<"Give the size of the Array: "<<endl;
    cin>>size;

    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int total_sum=printsum(arr,size);
    cout<<"Printing sum of the Array is Done....."<<endl;
    cout<<endl;
    cout<<"Total sum of the Array members: "<<total_sum<<endl;
}