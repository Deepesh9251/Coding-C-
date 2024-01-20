#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[3][8] = {
        {1 ,-2, 0, 6,10, 0, 0, 7},
        {9 , 4,15, 0,11, 9, 0, 1},
        {2 , 3, 7,-2, 6,44, 1, 9}
    };
    
    vector<vector<int>> positions;
    int m = sizeof(arr)/sizeof(arr[3]);
    int n = (sizeof(arr)/sizeof(arr[3][0]))/(sizeof(arr)/sizeof(arr[3]));

    // storing all the positions where element is 0.
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 0){
                positions.push_back({i,j});
            }
        }
    }

    // Making columns zero

    for(int i = 0; i < positions.size(); i++){
        for(int j = 0; j < n; j++){
            arr[positions[i][0]][j] = 0;
        }
    }

    // Making rows zero

    for(int i = 0; i < m; i++){
        for(int j = 0; j < positions.size(); j++){
            arr[i][positions[j][1]] = 0;
        }
    }

    // Printing the updated array

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<positions.size();
    
    
    return 0;
}