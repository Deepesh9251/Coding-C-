#include <iostream>
using namespace std;

void printArray(int* x, int n ){
    for(int i = 0 ; i < n ; i ++ ){
        cout<<*(x + i )<< endl;
    }
}

int main(){
    int arr[] = {5, 255, 6, 24, 5, 2, 252, 6355, 666, 112, 52};
    int size = sizeof(arr) / sizeof(int) ;

    printArray(arr, size);
    return 0;
}