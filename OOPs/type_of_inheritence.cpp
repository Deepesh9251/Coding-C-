#include<iostream>
using namespace std;

class Parent{
public:
    Parent(){
        cout<<"Parent"<<endl;
    }
};

class Child1: public Parent{        //* ( Parent --> Child1 ) is single inheritance
public:
    Child1(){
        cout<<"Child1"<<endl;
    }
};

class GrandChild1: public Child1{   //* ( Parent --> Child1 --> GrandChild1) is multi-level inheritance
public:
    GrandChild1(){
        cout<<"GrandChild1"<<endl;
    }
};

class GreatGrandChild2: public Parent, public Child1{  //* ( Parent --> GreatGrandChild2 <-- Child1) is multiple inheritance
public:
    GreatGrandChild2(): Parent(), Child1(){
        cout<<"GreatGrandChild2"<<endl;
    }
};

class Child2: public Parent{    //* ( Child1 --> Parent --> Child2) is hierarchical inheritance
public:
    Child2(){
        cout<<"Child2"<<endl;
    }
};

int main(){
    Child1 obj;
    
    return 0;
}