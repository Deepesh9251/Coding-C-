#include<iostream>
#include<vector>
using namespace std;

//Q. isomorphic strings are those strings in which each character is one to one mapped. e.g. "add" & "egg", here e <-> a, d <-> g. e is mapped to a and g is mapped to d.

//+ bool isIsomorphic(string s, string t){
//+     if(s.size() != t.size()) return false;
//+     int n = s.size();
//+     char map1[26];
//+     for(int i = 0; i < 26; i++){
//+         map1[i] = '*';
//+     }
//+     char map2[26];
//+     for(int i = 0; i < 26; i++){
//+         map2[i] = '*';
//+     }
//+     for(int i = 0, j = 0; i < n; i++, j++){
//+         if(map1[t[j] - 'a'] != s[i] && map1[t[j] - 'a'] != '*') return false;
//+         map1[t[j] - 'a'] = s[i];
//+         if(map2[s[j] - 'a'] != t[i] && map2[s[j] - 'a'] != '*') return false;
//+         map2[s[j] - 'a'] = t[i];
//+     }

//+     return true;
//+ }

bool isIsomorphic(string s, string t){
    if(s.size() != t.size()) return false;
    int n = s.size();
    vector<int> arr1(26,-1);
    vector<int> arr2(26,-1);
    for(int i = 0; i < n; i++){
        if(arr1[s[i] - 'a'] != arr2[t[i] - 'a']) return false;
        arr1[s[i] - 'a'] = arr2[t[i] - 'a'] = i;
    }

    return true;
}

int main(){
    string s = "abcdefgh";
    string t = "stuvwxyz";
    cout<<isIsomorphic(s, t);
    return 0;
}