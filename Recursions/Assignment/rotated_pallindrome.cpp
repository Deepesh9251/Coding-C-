#include<iostream>
using namespace std;

string reverseString(string s, int size, int i){
    if(i == size) return "";
    return reverseString(s, size, i + 1) + s[i];

}
string substring(string s, int size, int i){
    if(i == size) return "";
    return s[i] + substring(s, size, i+1);
}

bool isRotatedPallindrome(string& s, int size, int i, int rotations){
    if(rotations == 0) return false;

    if(reverseString(s, size, i) == substring(s, size, i)){
        return true;
    }
    else{
        s += s[i];
    }
    return isRotatedPallindrome(s, size + 1, i + 1, rotations - 1);
}

int main(){
    string s = "hello";
    int size = s.length();
    cout<<(isRotatedPallindrome(s, size, 0, size) ? "YES" : "NO")<<endl;
    return 0;
}