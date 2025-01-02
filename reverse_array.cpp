#include<iostream>
using namespace std;

void reverse_array(int arr[], int size){

    for(int i=0;i<size/2;i++){
        int temp=arr[i];
        arr[i]=arr[(size-1)-i];
        arr[(size-1)-i]=temp;
        

    }
    
}

int main(){
    
    int size;
    cout<<"Enter the size of the Array"<<endl;
    cin>>size;

    int arr[size];

    for(int i=0; i<size;i++){

        cin>>arr[i];
    }

    reverse_array(arr, size);

    for(int i=0; i<size;i++){

        cout<<arr[i]<<" ";
    }
    

}