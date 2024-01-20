#include<iostream>
using namespace std;

// Prints upper triangular elements of a matrix including diagonal elements

void upper(int* arr, int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(i <= j){
                cout<<*(arr + i*size + j)<<" ";
            } else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    return;
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
    upper((int*)arr, n);
    
    return 0;
}