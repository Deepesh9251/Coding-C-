#include<iostream>
using namespace std;

int main(){

    int arr[] = {-2,-1,-1,0,0,0,2,2,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    int sqArray[size];
    int k = size -1;
    
    for(int i = 0, j = size - 1 ; k>=0 ;){
        if(abs(arr[i]) > abs(arr[j])){
            sqArray[k--] = arr[i]*arr[i++];
        }
        if(abs(arr[i]) <= abs(arr[j])){
            sqArray[k--] = arr[j]*arr[j--];
        }
    }

    cout<<"sqArray = {";
    for(int i = 0; i < size-1; i++){
        cout<<sqArray[i]<<", ";
    } cout<<sqArray[size-1]<<"}"<<endl;

    
    
    return 0;
}