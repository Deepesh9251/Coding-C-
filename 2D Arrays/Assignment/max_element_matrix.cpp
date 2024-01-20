#include<iostream>
using namespace std;

int main(){
    int arr[3][3] = {{1,2,3},{3,4,5},{-2,3,35}};
    int m = sizeof(arr)/sizeof(arr[3]);
    int n = (sizeof(arr)/sizeof(arr[3][0]))/(sizeof(arr)/sizeof(arr[3]));
    int max = arr[0][0];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    cout<<"max element: "<<max<<endl;
}