#include<iostream>
using namespace std;

int main(){
    int arr[4] = {3, 1, 5, 2};
    int (*ptr)[4] = &arr ;

    cout<<ptr<<" "<<arr<<" "<<*ptr<<" "<<**ptr<<" "<<*arr<<endl;
    
    return 0;
}