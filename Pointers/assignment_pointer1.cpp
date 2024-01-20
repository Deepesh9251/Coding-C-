#include<iostream>
using namespace std;

// int fun(string name, char *first_letter, char *last_letter){
//     *first_letter = name[0];
//     *last_letter = name[name.length() - 1];
//     int counter=0;
//     for(int i = 0; i<name.length(); i++){
//         if (name[i] == 't') counter++;
//     }
//     return counter;
// }

// int max(int a, int b, int c){
//     if(a>=b && a>=c) return a;
//     if(b>=a && b>=c) return b;
//     if(c>=b && c>=a) return c;
// }
// int min(int a, int b, int c){
//     if(a<=b && a<=c) return a;
//     if(b<=a && b<=c) return b;
//     if(c<=b && c<=a) return c;
// }


// int largest_and_smallest(int num1, int num2, int num3, int *largest){
// *largest = max(num1, num2, num3);
//     return min(num1, num2, num3);

// }

int main(){

    // ------------------- Question 1--------------------------

    // int x=5;
    // cin>>x;

    // int* ptr = &x;
    // cout<<(ptr);

    // --------------------- Question 2-------------------------

    // int x, y ;
    // cin>>x>>y;
    // int *ptr1 = &x, *ptr2 = &y, ptr_result= (*ptr1) * (*ptr2);

    // cout<<*ptr1<<" * "<<*ptr2<<" = "<<ptr_result<<endl;
    
    // --------------------- Question 3-------------------------

    // int num1, num2, num3;
    // cin>>num1>>num2>>num3;
    // int largest;

    // int smallest = largest_and_smallest(num1, num2, num3, &largest);
    // cout<<"min = "<<smallest<<endl<<"max = "<<largest<<endl;


    // --------------------- Question 5-------------------------
    //  Write a function that returns the first character, last character and the number of occurrences of ‘t’ in a string input by user.

    // string name;
    // cin>>name;

    // char first_letter, last_letter;
    // int t_in_name = fun(name, &first_letter, &last_letter);

    // cout<<t_in_name<<endl<<first_letter<<endl<<last_letter<<endl;

    return 0;
}