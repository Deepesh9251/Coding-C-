#include<iostream>
#include<vector>
using namespace std;

//Q Question ->
//Q Given two sorted arrays A and B of length m and n respectively, generate all possible arrays such that the first element is taken from A then from B then from A, and so on in increasing order till the arrays are exhausted using recursion. The generated arrays should end with an element from B.
//Q Input:
//Q m = 3, n = 4
//Q A = {10, 15, 25}  B = {1, 5, 20, 30}
//Q Output:
//Q 10 20
//Q 10 20 25 30
//Q 10 30
//Q 15 20
//Q 15 20 25 30
//Q 15 30
//Q 25 30

void printVector(vector<int> vec){
    for(int i = 0; i < vec.size(); i++){
        cout<<vec[i]<<" ";
    }cout<<endl;
    return;
}

void printAlternateElementSorted(int a[], int b[], int m, int n, vector<int>& tempAns, int idx = 0, int jdx = 0, bool fromFirst = true)
{
    if(tempAns.size() != 0 && idx == m && jdx == n){
        printVector(tempAns);
    }
    
    while(a[idx] > b[jdx]){
        jdx++;
    }
    tempAns.push_back(a[idx]);
    tempAns.push_back(b[jdx]);

}

int main(){
    int a[] = {1,5,8,10,115};
    int b[] = {8,18,20,45,48};
    int m = sizeof(a) / sizeof(int);
    int n = sizeof(b) / sizeof(int); 
    vector<int> tempAns;
    
    printAlternateElementSorted(a, b, m, n, tempAns);
    
    return 0;
}