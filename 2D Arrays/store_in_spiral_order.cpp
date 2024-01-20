#include<iostream>
using namespace std;

// Store natural numbers in spiral order in a 2D matrix

int main(){
    int n;
    cout<<"Enter n so that I will make a matrix in which all natural numbers till n^2 are stored in spiral order: "<<endl;
    cin>>n;

    int arr[n][n];


    int a = 0, b = n-1, c = n-1, d = 0;
    int ele = n*n;
    int value = 1;

    int i, j;
    while(ele){
        i = a;
        j = d;
        while(j <= b && ele){
            arr[i][j] = value++;
            ele--;
            j++;
        }
        a++;

        i = a;
        j = b;
        while(i <= c && ele){
            arr[i][j] = value++;
            ele--;
            i++;
        };
        b--;

        i = c;
        j = b;
        while(j >= d && ele){
            arr[i][j] = value++;
            ele--;
            j--;
        }
        c--;

        i = c;
        j = d;
        while(i >= a && ele){
            arr[i][j] = value++;
            ele--;
            i--;
        }
        d++;

    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";

        }cout<<endl;
    }
    
    
    return 0; 
}