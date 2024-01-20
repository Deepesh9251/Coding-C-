#include<iostream>
using namespace std;

// Perfect Matrix: All diagonal elements should be non-zero integers and all non-diagonal elements should be zero.

bool isPerfect(int* arr, int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            int ele = *(arr + i*size + j);
            if((i != j && ele != 0) || (i == j && ele == 0)){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    int arr[n][n];

    cout<<"Enter square matrix of order n : "<< endl;   
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    cout<<isPerfect((int*)arr, n);

    return 0;
}