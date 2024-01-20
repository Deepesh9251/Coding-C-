#include<iostream>
#include<vector>
using namespace std;

bool binarySearch(vector<vector<int>> arr, int target){
    int row = arr.size();
    int col = arr[0].size();
    int size = row * col;
    int low = 0;
    int high = size - 1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        int i = mid / col;
        int j = mid % col;
        if(arr[i][j] == target) return true;
        if(arr[i][j] > target) high = mid - 1;
        else low = mid + 1;
    }
    return false;
}

int main(){
    vector<vector<int>> arr(5,vector<int>(4,0));
    arr = {{-177,-176,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int target = 7;
    int n = (arr.size() * arr[0].size());
    for(int i = -1; i <= n+11; i++){
        cout<<i<<" : "<<binarySearch(arr, i)<<endl;
    }
    return 0;
}