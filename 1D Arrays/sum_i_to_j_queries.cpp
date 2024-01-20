#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7}; // {1,3,6,10,15,21,28} j=6  i=2   correct = 20  
    int size = sizeof(arr)/sizeof(int);


    for(int i = 1; i < size; i++){
        arr[i] = arr[i] + arr[i-1];
    }

    int q;
    cout<<"Enter number of queries : "<<endl;
    cin>>q;

    while(q--){
        int i,j;
        cout<<"Enter first and second index : ";
        cin>>i>>j;
        cout<<"The sum from "<<i<<" to "<<j<<" = "<<arr[j-1] - arr[i-2]<<endl;
    }

    
    return 0;
}