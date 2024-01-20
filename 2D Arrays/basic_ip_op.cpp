#include<iostream>
using namespace std;

int main(){
    int arr[4][2];
    // for(int i = 0; i < 4; i++){
    //     for(int j = 0; j < 2; j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // cout<<"Output: "<<endl;
    // for(int i = 0; i < 4; i++){
    //     for(int j = 0; j < 2; j++){
    //         cout<<arr[i][j]<<" ";
    //     } 
    //     cout<<"\n";
    // }

    cout<<"No. of rows: "<<sizeof(arr)/sizeof(arr[4])<<endl;
    cout<<"No. of coloumn: "<<(sizeof(arr)/sizeof(arr[4][0]))/(sizeof(arr)/sizeof(arr[4]));


    
    return 0;
}