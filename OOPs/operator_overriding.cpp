#include<iostream>
using namespace std;

class Parent{
public:
    virtual void print(){
        cout<<"Parent Class"<<endl;
    }
    virtual void show(){
        cout<<"Parent Class"<<endl;
    }
};
class Child: public Parent{
public:
    void print(){
        cout<<"Child Class"<<endl;
    }
    void show(){
        cout<<"Child Class"<<endl;
    }
};

int main(){
    Parent p;
    p.print();
    Parent *ptr = &p;
    Child c;
    ptr->print();
    c.print();
    c.show();

    return 0;
}