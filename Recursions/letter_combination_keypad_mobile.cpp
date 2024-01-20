#include<iostream>
using namespace std;

string letterString(char c){
    string newString = "";
    switch (c)
        {
        case '2':
            newString += "abc";
            break;
        case '3':
            newString += "def";
            break;
        case '4':
            newString += "ghi";
            break;
        case '5':
            newString += "jkl";
            break;
        case '6':
            newString += "mno";
            break;
        case '7':
            newString += "pqrs";
            break;
        case '8':
            newString += "tuv";
            break;
        case '9':
            newString += "wxyz";
            break;
        default:
            break;
        }
    return newString;
}

void letterCombinations(string s, int n, string ans, int idx = 0){
    if(idx == n){
        cout<<ans<<endl;
        ans.pop_back();
        return;
    }

    string l = letterString(s[idx]);
    int limit = l.length();
    for(int i = 0; i < limit; i++){
        letterCombinations(s, n, ans + l[i], idx + 1);
    }
}

int main(){
    string s = "23";
    string ans;
    int size = s.length();
    
    letterCombinations(s, s.length(), ans);

    return 0;
}