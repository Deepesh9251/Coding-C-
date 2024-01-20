#include<iostream>
using namespace std;

int main(){
    int binary_num,n;
    cout<<"Enter the binary number : ";
    cin>>binary_num;
    int decimal_num = 0;
    n = binary_num;
    int mul = 1;

    while(binary_num>0){
        int ld = binary_num%10;
        binary_num = binary_num/10;
        decimal_num = decimal_num + ld*mul;
        mul = mul * 2;
    }

    cout<<"The decimal conversion of "<<n<<" is : "<<decimal_num<<endl;


    return 0;

}