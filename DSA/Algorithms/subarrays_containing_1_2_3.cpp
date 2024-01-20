#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,1,2,2,1,3,1,3,2,2,2,3,2,2,1,3};
    int size = sizeof(arr) / sizeof(int);
    int cntA = 0;
    int cntB = 0;
    int cntC = 0;
    int val = 0;
    int ans = 0;
    for(int i = 0, j = 0; j <= size; ){
        

        if(cntA && cntB && cntC) {
            ans += size - j + 1;
            for(int x = 0; x < size-j+1; x++){
                for(int y = i; y <= j - 1+ x; y++){
                    cout<<arr[y]<<" ";
                }cout<<endl;
            }
            val = arr[i++];
        }
        else{
            if(arr[j] == 1) cntA++;
            if(arr[j] == 2) cntB++;
            if(arr[j] == 3) cntC++;
            j++;
        }
        if(val == 1) cntA--;
        if(val == 2) cntB--;
        if(val == 3) cntC--;
        val = 0;
        
    }
    cout<<ans;
    return 0;
} 