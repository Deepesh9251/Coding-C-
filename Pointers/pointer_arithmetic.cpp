#include<iostream>
using namespace std;

int main(){
    // int x = 7;
    // int *ptr = &x;

    // double dec = 3.2;
    // double *ptrd = &dec;

    // cout<<"sizeof(int) = "<<sizeof(x)<<endl;
    // cout<<"sizeof(double) = "<<sizeof(dec)<<endl;

    // cout<<ptr<<" "<<ptr+1<<" "<<ptr+2<<endl;
    // cout<<ptrd<<" "<< ptrd+1<<" "<<ptrd+2<<endl;




    int arr[3] = {2, 6, 9};
    int *ptr1 = &arr[0];

    cout<<"*ptr1++  "<<*ptr1++<<endl;
    cout<<"(*ptr1)++  "<<(*ptr1)++<<endl;
    cout<<"++*ptr1  "<<++*ptr1<<endl;
    cout<<"*(++ptr1)  "<<*(++ptr1)<<endl;


    return 0;
}