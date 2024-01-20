#include<iostream>
using namespace std;

void sortString(string &s){
    int n = s.size();
    int freq[26] = {0};
    for(int i = 0; i < n; i++){
        freq[s[i] - 'a']++;
    }
    for(int i = 1; i < 26; i++){
        freq[i] += freq[i-1];       
    }
    string ans = s;
    for(int i = n - 1; i >= 0; i--){
        freq[s[i] - 'a']--;
        ans[freq[s[i] - 'a']] = s[i];
    }
    s = ans;
}
int main(){
    string s = "areyelvishbhaikeaagekoibolsktahaikya";

    sortString(s);
    cout<<s;
    
    return 0;
}