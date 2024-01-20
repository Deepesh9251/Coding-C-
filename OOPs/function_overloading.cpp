#include<iostream>
#include<cmath>
using namespace std;

//Q. Use function overloading to create a function for area of circle, rectangle and triangle.

class Shape{
public:
    float area(float radius){
        return 22 * radius * radius / 7;
    }
    float area(float length, float breadth){
        return length * breadth;
    }
    float area(float a, float b, float C){
        return 0.5 * a * b * sin(C);
    }
};
int main(){
    Shape s;
    cout<<s.area(7)<<endl;
    cout<<s.area(40, 7)<<endl;
    cout<<s.area(20, 30, 0.523599); //# 0.523599 is 30 degree in radians, as sin() function take radian arguments
    
    return 0;
}