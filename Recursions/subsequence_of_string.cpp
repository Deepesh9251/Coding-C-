#include<iostream>
using namespace std;

void printSubsequence(string s,int size, int idx = 0, string substring = ""){
    if(idx == size){
        cout<<(substring.length() ? substring : "NULL")<<endl;
        return;
    }
    printSubsequence(s,size, idx + 1, substring);
    substring = substring + s[idx];
    printSubsequence(s,size, idx+1, substring);

}

int main(){
    string s = "abc";
    printSubsequence(s, s.length());
    return 0;
}