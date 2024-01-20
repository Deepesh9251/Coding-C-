#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Q. Given the array of strings. Write a program to find the longest common prefix among all the strings in the array.

string longestCommonPrefix(vector<string> arr){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    string ans = "";
    for(int i = 0; i < arr[0].size() && i < arr[n-1].size(); i++){
        if(arr[0][i] == arr[n-1][i]){
            ans += arr[0][i];
        }else{
            break;
        }
    }
    return ans;
}

string commonPrefix(string str1, string str2){
    string ans = "";
    for(int i = 0; i < min(str1.size(), str2.size()); i++){
        if(str1[i] == str2[i]) ans += str1[i];
        else break;
    }
    return ans;
}

string longestCommonPrefix(vector<string> &arr){
    string ans = arr[0];
    
    for(int i = 1; i < arr.size(); i++){
        ans = commonPrefix(ans, arr[i]);
    }
    return ans;
}

int main(){
    vector<string> arr = {"flower", "flower", "flower"};

    cout<<longestCommonPrefix(arr);
    
    return 0;
}