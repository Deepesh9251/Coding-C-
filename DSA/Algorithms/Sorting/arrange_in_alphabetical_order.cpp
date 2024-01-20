#include<iostream>
using namespace std;

//* Use of Selection Sort is mandatory.
//* Arrange the fruit names in alphabetical order.

void swap(string* a, string* b){
    string temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void sortFruits(string arr[], int size){
    for(int i = 0; i < size; i++){
        int min_idx = i;
        for(int j = i+1; j < size; j++){
            if(arr[min_idx][0] > arr[j][0]){
                min_idx = j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }
    return;
}

void printArray(auto arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    string fruits[] = {"mango", "banana", "pear", "apple", "grapes", "peach", "strawberry", "blackberry", "x-mas"};
    int size = 9;
    sortFruits(fruits, size);
    printArray(fruits, size);
    return 0;
}