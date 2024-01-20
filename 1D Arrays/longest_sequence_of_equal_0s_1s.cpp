#include<iostream>
using namespace std;

int main(){ 
    int arr[] = {0,1,1,1,0,0,1,0,1,1,1,0,1};
    int size = sizeof(arr)/sizeof(int);
    int sequence_length = -1;


    for(int i = 1; i < size; i++){
        arr[i] = arr[i] + arr[i-1];
        if(arr[i] == (i+1)/2){
            sequence_length = i+1;
        }  
    }
    cout<<sequence_length;

    
    return 0;
}