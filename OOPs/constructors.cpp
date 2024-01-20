#include<iostream>
using namespace std;

class Rectangle{
public:
    int length;
    int breadth;
    string unit;

    Rectangle(){   //* Default Constructor
        length = 100;
        breadth = 200;
    }

    Rectangle(int length, int y){   //* Parameterised Constructor with 2 parameter
        this->length = length;
        breadth = y;
    }
    Rectangle(int x){   //* Parameterised Constructor with 1 parameter
        length = x;
        breadth = x;
    }

    Rectangle(Rectangle& r){  //* Copy Constructor with 1 object as parameter
        length = r.length;
        breadth = r.breadth;
    }
    Rectangle(Rectangle& r1, Rectangle& r2){  //* Copy Constructor with 2 object as parameter
        length = r1.length;
        breadth = r2.breadth;
    }

    ~Rectangle(){
        cout<<"The object "<<this->length<<" deleted!!!"<<endl;
    }

};

int main(){

    Rectangle* r1 = new Rectangle();
    delete r1;
    
    Rectangle r2(400, 600);
    cout<<r2.length<<" "<<r2.breadth<<endl;

    Rectangle r3(500);
    cout<<r3.length<<" "<<r3.breadth<<endl;
    
    Rectangle r4(r3);
    r4.length = 700;
    cout<<r4.length<<" "<<r4.breadth<<endl;

    // Rectangle r5(r1, r4);
    // cout<<r5.length<<" "<<r5.breadth<<endl;
    

    return 0;
}