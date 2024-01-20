#include<iostream>
using namespace std;

int main(){
    int arr[4][5] = {
        {1,2,3,1,0},
        {0,1,2,3,1},
        {4,0,1,2,3},
        {5,4,0,1,2}
    };
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(arr[0])/sizeof(arr[0][0]);
    
    bool isPerfect = true;
    int element_count = m + n - 1;

    for(int i = 0; i < m - 1; i++){
        for(int j = i, k = 0; (j + 1 < m) && (k + 1 < n); j++, k++){
            if(arr[j][k] != arr[j+1][k+1]){
                isPerfect = false;
                break;
            }
        }

        for(int j = 0, k = i; (j + 1 < m) && (k + 1 < n); j++, k++){
            if(arr[j][k] != arr[j+1][k+1]){
                isPerfect = false;
                break;
            }
        }
    }
    isPerfect ? cout<<"Perfect":cout<<"Not perfect";
    return 0;
}