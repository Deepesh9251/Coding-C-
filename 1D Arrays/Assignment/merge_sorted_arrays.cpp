#include<iostream>
using namespace std;

int main(){
    int arr1[] = {9,9,9,10,111};
    int arr2[] = {1,2,3,5,7,19};
    int m = sizeof(arr1)/sizeof(int);
    int n = sizeof(arr2)/sizeof(int);

    int arr[m+n];
    int a = 0, b = 0;
    int i = 0;
    while(i<m+n){
        if(a<m && b<n){
            if(arr1[a] < arr2[b]){
                arr[i++] = arr1[a++];
            }
            
            else if(arr1[a] >= arr2[b]){
                arr[i++] = arr2[b++];
            }
        }
        if(a>=m){
            arr[i++] = arr2[b++];
        }
        if(b>=n){
            arr[i++] = arr1[a++];
        }
    }

    cout<<"array = {";
    for(int i = 0; i < m+n-1; i++){
        cout<<arr[i]<<", ";
    } cout<<arr[m+n-1]<<"}"<<endl;
    
    return 0;
}