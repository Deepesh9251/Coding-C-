#include<iostream>
using namespace std;

void subarraySum(int arr[], int size, int idx = 0, int sum = 0){
    if(idx == size){
        cout<<sum<<" ";
        return;
    }
    subarraySum(arr, size, idx+1, sum + arr[idx]);
    subarraySum(arr, size, idx+1, sum);

}

int main(){
    int arr[] = {1,0,0,1};
    int size = sizeof(arr) / sizeof(int);

    subarraySum(arr, size);
    return 0;
}