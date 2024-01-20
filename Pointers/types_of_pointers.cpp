#include <iostream>
using namespace std;

int main(){
    int a = 5563;
    float b = 45.5223;
    int *p1 = NULL;
    int *p2 = 0;
    string *p3 = '\0';
    cout<<p1<<" "<<p2<<" "<<p3<<endl;

    void *ptr =  &a;
    cout<<*((int*)ptr)<<endl;
    ptr = &b;
    cout<<*((float*)ptr)<<endl;
    return 0;
}