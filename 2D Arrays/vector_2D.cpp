#include<iostream>
#include<vector>
using namespace std;

int main(){
    /*

    vector<pair<int,int>> vec_2D;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cin>>vec_2D[i][j];
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout<<vec_2D[i][j]<<" ";
        }
        cout<<endl;
    }
    
    */


    vector<vector<int>> vec2D = {{1,2},{4,3,5,3},{5,{2}}};
    for(int i = 0; i < vec2D.size(); i++){
        for(int j = 0; j < vec2D[i].size(); j++){
            cout<<vec2D[i][j]<<" ";
        }
        cout<<endl; 

    }
    
    return 0;
}