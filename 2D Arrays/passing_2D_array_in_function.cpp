#include<iostream>
using namespace std;

// void printArray(auto a, int r, int c){
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
            
//             cout<<arr[i][j]<<" ";
//         }
//     }
// }

void printArray(int* arr, int r, int c){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout<<*(arr + i*c + j)<<" ";
        }
    }
}



int main(){
    
    int arr[3][3] = {
        1,2,3,4,5,6,7,8,9
    };
    // printArray(arr, 3, 3);
    printArray((int*)arr, 3, 3);
    return 0;
}