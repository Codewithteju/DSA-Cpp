#include<iostream>
using namespace std;


void search(int arr[], int size, int key){

    bool result;

    for(int i=0; i<size; i++){
        if(arr[i]==key){
        result=true;
        }else{
            result=false;
        }
    }

    if(result){
        cout<<"Found the key in the Array: "<<key<<endl;
    }else{
        cout<<"Not found the key in the Array"<<endl;
    }
}

int main(){

    cout<<"Enter the key to search in the array"<<endl;
    int key;
    cin>>key;

    int size;
    cout<<"Enter the size of the Array"<<endl;
    cin>>size;

    int arr[size];

    for(int i=0; i<size;i++){

        cin>>arr[i];
    }

    search(arr, size, key);
}