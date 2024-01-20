#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "abcd";             //# Initialization method 1
    string c("Deepesh Yadav");     //# Initialization method 2

    cout<<s<<endl;                 //# Output         
    cout<<c<<endl;

    string str;                    //# Declaration
    cin>>str;                      //* Input (dont give spaces or enter or tabs in input)
    cout<<str<<endl;

    string s1;
    getline(cin,s1);
    cout<<s1<<endl;
    
    
    
    return 0;
}