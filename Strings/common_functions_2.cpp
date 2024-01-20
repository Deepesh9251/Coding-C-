#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char s1[20] = "Deepesh";
    char s2[20] = "Yadav";
    strcat(s1,s2);             //- s1 += s2;
    cout<<s1<<endl;

    string s = "abcd";
    s.push_back('e');
    cout<<s<<endl;

    cout<<s.size()<<endl;
    cout<<s.length()<<endl;
    cout<<strlen(s1)<<endl;

    int x = 1345;
    string y = to_string(x);
    
    y += "12";
    cout<<y<<endl;
    
    return 0;
}