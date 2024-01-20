#include<iostream>
using namespace std;

int main(){
                // This is a mathematical approach to optimise the problem. One another approach is to make 2D vector and store the values in it. hence, a[i][j] = a[i-1][j] + a[i-1][j-1]; this is due to the fact that every element is sum of its above element and previous of its above element.
                
    int n = 7;

    for(int i = 0; i < n; i++){
        int prod = 1;
        for(int j = 0; j < n - i - 1; j++){
            cout<<" ";
        }

        for(int j = 0; j <= i; j++){
            cout<<prod<<" ";

            //! prod = prod * ((i - j) / (j + 1));   

                    //* this line is wrong as the bracket will be calculated first and it should be an integer so there will be unexpected results. if all 'int' are converted into float then the line will be correct.


            prod = prod * (i - j) / (j + 1);   

                    //* the line is correct as  "prod * (i - j)" will be calculated first and this will always be divisible by (j+1) so the result will always be an integer. so it will give expected output.
        }
        cout<<endl;
    }



    return 0;
}