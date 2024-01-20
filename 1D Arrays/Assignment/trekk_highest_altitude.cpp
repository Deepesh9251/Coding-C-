#include<iostream>
using namespace std;

int main(){

    int arr[] = {-4,1,6,0,-8};
    int size  = sizeof(arr)/sizeof(int);
    int max_alt = 0;
    int sum = 0;


    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
        if(sum > max_alt){
            max_alt = sum;
        }
    }
    cout<<max_alt;
    
    return 0;
}