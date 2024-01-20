#include<iostream>
#include<limits.h>

using namespace std;

int mini(int a, int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }

}

int main(){
    int a[] = {5,4,13,3,2,1};
    int b[] = {2,3,4,6,5};
    int min=INT_MAX, sec_min=INT_MAX;
    int min_idx=-1, sec_min_idx=-1;
    int minb=INT_MAX, sec_minb=INT_MAX;
    int minb_idx=-1, sec_minb_idx=-1;

    for(int i = 0; i<sizeof(a)/sizeof(int); i++){          // traversing both of the arrays

        // for array a[];
        // getting minimum and second minimum with their indices


        if(a[i] < min){
            sec_min = min;
            sec_min_idx = min_idx;
            min = a[i];
            min_idx = i;
        }
        if(a[i] == min && i != min_idx){
            sec_min = a[i];
            sec_min_idx = i;
        }
        if(a[i] > min && a[i] < sec_min){
            sec_min = a[i];
            sec_min_idx = i;
        }

        // for array b[];
        // getting minimum and second minimum with their indices


        if(b[i] < minb){
            sec_minb = minb;
            sec_minb_idx = minb_idx;
            minb = b[i];
            minb_idx = i;
        }
        if(b[i] == minb && i != minb_idx){
            sec_minb =b[i];
            sec_minb_idx = i;
        }
        if(b[i] > minb && b[i] < sec_minb){
            sec_minb = b[i];
            sec_minb_idx = i;
        }
    }

    int min_sum;           // Required sum


    if(min_idx == minb_idx){
        min_sum = mini(min+sec_minb, minb + sec_min);
    }
    else{
        min_sum = min + minb;
    }

    // int sum = INT_MAX;

    // for(int i = 0; i<sizeof(a)/sizeof(int); i++){                       // Time complexity = O(n^2)
    //     for(int j = 0; j<sizeof(b)/sizeof(int); j++){
    //         if(i!=j && sum > a[i] + b[j]){
    //             sum = a[i] + b[j];
    //         }
    //     }
    // }

    // cout<<sum;

    // cout<<min<<" "<<min_idx<<" "<<sec_min<<" "<<sec_min_idx<<endl;
    // cout<<minb<<" "<<minb_idx<<" "<<sec_minb<<" "<<sec_minb_idx;

    cout<<min_sum;

    cout<<" "<<a[-4];
    
    return 0;
}