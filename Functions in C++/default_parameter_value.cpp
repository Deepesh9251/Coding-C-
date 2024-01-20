#include <iostream>
using namespace std;
void fun(int x, int y = 10, int z =0){
    cout<<x<<" "<<y<<" "<<z<<endl;
    return;
}

int main(){
    fun(40,3,4);
    return 0;
}