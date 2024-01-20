#include<iostream>
using namespace std;

// It is given that every row is sorted

int main(){
    int arr[][5] = {
        0, 0, 0, 0, 0,
        0, 0, 0, 1, 1, 
        0, 0, 1, 1, 1,
        0, 0, 1, 1, 1,
        0, 0, 0, 0, 0
    };

    int r = sizeof(arr)/sizeof(arr[0]);
    int c = sizeof(arr[0])/sizeof(arr[0][0]);
    int maxIndex = c;
    int row_number = -1;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < maxIndex; j++){
            if(arr[i][j] == 1){
                maxIndex = j;
                row_number = i;
                break;
            }
        }
    }

    int max_1s = c - maxIndex;
    cout<<max_1s<<" "<<row_number+1;
    
    return 0;
}