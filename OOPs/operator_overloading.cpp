#include<iostream>
using namespace std;

class Complex{
public:
    int real = 0;
    int imag = 0;

    Complex(int real, int imag){
        this->imag = imag;
        this->real = real;
    }
    Complex(int real){
        this->real = real;
        this->imag = 0;
    }

    void printComplex(){
        cout<<real<<" + "<<imag<<"i ";
        return;
    }

    Complex operator+ (Complex &c){
        Complex ans(0,0);
        ans.real = real + c.real;
        ans.imag = imag + c.imag;
        return ans;
    }
};

int main(){
    Complex c1(4,7), c2(2,3), c3 = c1 + c2;
    c3.printComplex();

    return 0;
}