#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string fullName = "Deepesh Yadav";
    reverse(fullName.begin(), fullName.end());    //# #include<algorithm>
    reverse(fullName.begin(), fullName.end());    //# #include<algorithm>

    string firstName = fullName.substr(0,7);    //#substring of a string: str.substr(position, length)
    cout<<firstName<<" ";   
    string lastName = fullName.substr(8);        //# this will return complete string starting from 8
    cout<<lastName<<endl;

    fullName = firstName+' '+lastName;          //# concatenate
    cout<<firstName;
    
    return 0;
}