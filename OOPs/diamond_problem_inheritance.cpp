#include<iostream>
using namespace std;

class A{
public:
    A(){
        cout<<'A'<<endl;
    }
};
class B: public A{
public:
    B(){
        cout<<'B'<<endl;
    }
};
class F: public A{
public:
    F(){
        cout<<'F'<<endl;
    }
};
class C: public A{
public:
    C(){
        cout<<'C'<<endl;
    }
};
class E: public C{
public:
    E(){
        cout<<'E'<<endl;
    }
};
class D: public B, public F, public E{
public:
    D(){
        cout<<'D'<<endl;
    }
};

int main(){ 
    D obj; 
    //* Here the constructors of parents classes will be executed multiple times. This is a problem known as Diamond Problem.
    return 0; 
}