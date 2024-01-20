#include<iostream>
using namespace std;
int main(){
    // int a , b;
    // cin>>a>>b;
    // if(a==b) cout<<"Square\n";
    // else cout<< "not a square\n";



    // int a;
    // cin>>a;
    // if(a<0) cout<<-a;
    // else cout<<a;


    // int cp, sp;
    // cin >>cp>>sp;
    // if(cp<sp) cout<<"profit of "<< sp - cp<< endl;
    // else if (cp>sp) cout<< "loss of "<< cp - sp <<endl;
    // else cout<<"no profit no loss."<<endl;


    int marks ;
    cin >> marks;

    if ( marks <= 100 && marks >90) cout << "A+"<< endl;
    else if ( marks <=90 && marks>80 ) cout<< "A"<< endl;
    else if ( marks <=80 && marks>70 ) cout<< "B+"<< endl;
    else if ( marks <=70 && marks>60 ) cout<< "B"<< endl;
    else if ( marks <=60 && marks>50 ) cout<< "C"<< endl;
    else if ( marks <=50 && marks>40 ) cout<< "D"<< endl;
    else if ( marks <=40 && marks>30 ) cout<< "E"<< endl;
    else if ( marks <=30 && marks>=0 ) cout<< "F"<< endl;
    else cout << "Marks are invalid"<< endl;

    return 0;
}