#include<iostream>
using namespace std;

string removeChar(string s, char c, int idx = 0){
    if(idx == s.size()){
        return "";
    }
    if(s[idx] != c){
        return s[idx] + removeChar(s, c, idx+1);
    }
    else{
        return removeChar(s, c, idx+1);
    }
}

int main(){
    string s;
    char c;
    cout<<"Enter the string : "<<endl;
    cin>>s;
    cout<<s;
    cout<<"Enter the character you want to remove from the string : "<<endl;
    cin>>c;
    //# for(int i = 0; i < s.size(); i++){
    //#     if(s[i] == 'k'){
    //#         s[i] = '\0';
    //#     }
    //# }
    //# cout<<s;

    cout<<removeChar(s, c);

    return 0;
}