#include <iostream>
#include <vector>    
using namespace std;

int main(){

    // Understand erase function :-

    // vector<int> v;
    // v.push_back(3);
    // v.push_back(7);
    // v.push_back(9);
    // v.push_back(5);
    //  v.erase(v.end() -2);
    // v.erase(v.begin()+2);
    // for(int i = 0; i < v.size(); i++){
    //     cout<<v[i]<<" ";
    // }

    vector<int> v;

    // cout<<"Size: "<<v.size()<<endl;
    // cout<<"Capacity: "<<v.capacity()<<endl;
    // v.push_back(23);
    // cout<<"Pushed "<<v[v.size()-1]<<endl;
    // for(int i = 0; i < v.size(); i++){
    //     cout<<v[i]<<" ";
    // } cout<<endl<<endl;

    // cout<<"Size: "<<v.size()<<endl;
    // cout<<"Capacity: "<<v.capacity()<<endl;
    // v.push_back(2);
    // for(int i = 0; i < v.size(); i++){
    //     cout<<v[i]<<" ";
    // } cout<<endl<<endl;

    // cout<<"Size: "<<v.size()<<endl;
    // cout<<"Capacity: "<<v.capacity()<<endl;
    // v.push_back(123);
    // for(int i = 0; i < v.size(); i++){
    //     cout<<v[i]<<" ";
    // } cout<<endl<<endl;

    // cout<<"Size: "<<v.size()<<endl;
    // cout<<"Capacity: "<<v.capacity()<<endl;
    // v.push_back(723);
    // for(int i = 0; i < v.size(); i++){
    //     cout<<v[i]<<" ";
    // } cout<<endl<<endl;

    for(int i = 0; i < 10; i++){
        cout<<"Size: "<<v.size()<<endl;
        cout<<"Capacity: "<<v.capacity()<<endl;
        int element;
        cout<<"Enter the element : ";
        cin>>element;
        v.push_back(element);
        cout<<"The vector is {";
        for(int j = 0; j < v.size()-1; j++){
            cout<<v[j]<<", ";
        } cout<<v[v.size()-1]<<"}";
        cout<<endl;
        cout<<"Popped: "<<v[v.size()-1]<<endl;
        v.pop_back();

        
        cout<<endl;
    }
    v.resize(5);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"The vector is {";
    for(int i = 0; i < v.size()-1; i++){
        cout<<v[i]<<", ";
    } cout<<v[v.size()-1]<<"}";
    cout<<endl<<endl;


    return 0;
}