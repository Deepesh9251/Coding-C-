#include<iostream>
using namespace std;

void printReverseString(string s, int i){
    if(i <= -1) return;
    cout<<s[i];
    printReverseString(s, i - 1);
}

int main(){
    string s = "deepesh yadav is a good boy. ";
    int size = s.length();
    printReverseString(s, size - 1);
    
    return 0;
}