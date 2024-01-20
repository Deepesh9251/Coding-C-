#include<iostream>
using namespace std;

class ABC{
    int x;

    
    public: 
    void set(int n){
        x = n;
        return;
    }

    int get(){
        return x;
    }
};

int main(){
    ABC obj;
    obj.set(4);
    cout<<obj.get();
    
    return 0;
}