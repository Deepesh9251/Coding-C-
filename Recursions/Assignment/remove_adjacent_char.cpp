#include<iostream>
#include<string.h>
using namespace std;

void removeAdjacentRepetition1(string& s, int size, int i = 1, int j = 0){
    if(j == size){
        return;
    }
    if(s[i] == s[j]){
        s[j] = '\0';
    }
    removeAdjacentRepetition1(s, size, i + 1, j + 1);
    
}
void removeAdjacentRepetition2(string s, int size, string& ans, int i = 1, int j = 0){
    if(i == size){
        return;
    }
    if(s[i] != ans[j]){
        ans = ans + s[i];
        j++;
    }
    removeAdjacentRepetition2(s, size, ans, i + 1, j);
}

int main(){
    string s = "aaafaaashhsssaaa";
    int size = s.length();
    string ans = "";
    ans += s[0];
    removeAdjacentRepetition1(s, size);
    removeAdjacentRepetition2(s, size, ans);
    cout<<s<<endl;
    cout<<ans<<endl;
    return 0;
}