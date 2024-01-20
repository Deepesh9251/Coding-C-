#include<iostream>
using namespace std;


int main(){
    int arr[] = {1,2,3,4};    // 0,1,3,6,10,15   e,o,o,e,e,o
    int size = sizeof(arr)/sizeof(int);
    int even = 0;
    int odd = 0;
    int answer = 0;

    for(int i = 0; i < size; i++){

    //This is an amazing solution. At every element we are calculating how many more subarrays are formed due to that element. if the element is even then we just simply add previous value answer to answer because we can just include the even element in the subarrays and those subarrays will still be even summed. And if the element is odd then we are swapping even and odd variables so that we can write a common expression for answer at line 25. this is due to the fact that even + odd = odd and odd + odd = even, so we will swap even and odd variables. So if the element is odd then becuase those even summed arrays will form odd summed arrays and vice versa so we swap even and odd then increase odd by 1 and then add odd in the answer as the question was to find odd summed subarrays.
    //This is the longest comment I have written in any programme. Still wonder how someone can think like this. :-)
    

        if(arr[i] % 2 == 0){
            even++;
        }
        else{
            int temp = even;
            even = odd;
            odd = temp;
            odd++;
        }
        answer = answer + odd;
    }    

    cout<<answer;
    return 0;
}