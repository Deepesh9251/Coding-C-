#include<iostream>
using namespace std;

class Fruit{
public:
    int price = 999;
    string name;
    string color;

};

int main(){
    Fruit mango;
    mango.color = "Yellow";
    mango.price = 100;
    mango.name = "Mango";
    // cout<<mango.color;

    Fruit *orange = new Fruit();
    orange->price = 100;
    orange->color = "Orange";
    orange->name = "Orange";
    cout<<orange<<endl;
    cout<<&((*orange).price)<<endl;
    cout<<&(orange->name)<<endl;
    cout<<&(orange->color)<<endl;

    cout<<endl<<endl;
    Fruit kele;
    cout<<kele.price;
    return 0;
}