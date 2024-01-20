#include<iostream>
using namespace std;

string name = "Deepesh Yadav";

void fun(string name){
    cout<<name<<endl;
}



int main(){

    cout<<name<<endl;
    string name = "Deepesh";
    fun(name);
    cout<<name<<endl;

    return 0;
}