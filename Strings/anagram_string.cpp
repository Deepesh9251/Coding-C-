#include<iostream>
using namespace std;

//Q. anagram strings are those strings which are made up of same characters and each character same number of times.

bool isAnagram(string s, string t){
    if(s.size() != t.size()) return false;
    int n = s.size();
    int count[26] = {0};
    for(int i = 0; i < n; i++){
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    for(int i = 0; i < 26; i++){
        if(count[i]) return false;
    }
    return true;
}

int main(){
    string s = "akjdlkajlkdjlkja";
    string t = "alkjdkajkdjklalj";

    cout<<isAnagram(s,t);
    
    return 0;
}