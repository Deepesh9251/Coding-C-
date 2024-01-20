#include<iostream>
using namespace std;

// Traverse in spiral order

int main(){
    int arr[][5] = {
        01, 2, 3, 4, 5,
        12,13,14,15, 6,
        11,10, 9, 8, 7,
        00, 0, 0, 0, 0,
    };

    int row = sizeof(arr)/sizeof(arr[0]);
    int col = sizeof(arr[0])/sizeof(arr[0][0]);
    int a = 0, b = col-1, c = row-1, d = 0;
    int ele = row*col;
    int i, j;
    while(ele){
        i = a;
        j = d;
        while(j <= b && ele){
            cout<<arr[i][j]<<" ";
            ele--;
            j++;
        }
        a++;

        i = a;
        j = b;
        while(i <= c && ele){
            cout<<arr[i][j]<<" ";
            ele--;
            i++;
        };
        b--;

        i = c;
        j = b;
        while(j >= d && ele){
            cout<<arr[i][j]<<" ";
            ele--;
            j--;
        }
        c--;

        i = c;
        j = d;
        while(i >= a && ele){
            cout<<arr[i][j]<<" ";
            ele--;
            i--;
        }
        d++;

    }
    
    return 0;
}