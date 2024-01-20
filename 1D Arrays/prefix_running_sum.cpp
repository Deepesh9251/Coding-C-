#include<iostream>
using namespace std;

int main(){
    int arr[] = {134,32,-144,444,2,3,4,56,78};
    int size = sizeof(arr)/sizeof(int);
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
        arr[i] = sum;
    }

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }

    
    
    return 0;
}
