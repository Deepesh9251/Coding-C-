#include<iostream>
using namespace std;

class ABC{
public:           //* Access Specifier
    int x = 1;

private:           //* Access Specifier
    int y = 0;

protected:           //* Access Specifier
    int z = 5;
};

class Child1: public ABC{    //* Mode of Inheritence
public:
    int b = x;       //# x --> public
    int d = z;       //# z --> protected
                     //# y --> inaccessible
    void fun(){
        z = z + 4;
    }
    int getZ(){
        return z;
    }
};

class Child2: private ABC{    //* Mode of Inheritence
    int a = x;      //# x --> private
                    //# z --> private
                    //# y --> inaccessible
    void fun(){
        int a = x + z;
    }
};

class Child3: protected ABC{    //* Mode of Inheritence

    //# x --> protected
    //# z --> protected
    //# y --> inaccessible
};

int main(){
    ABC obj;
    Child1 obj1;
    obj1.fun();
    cout<<obj1.getZ();
    
    return 0;
}