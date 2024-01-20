#include<iostream>
using namespace std;

void mergeAlternatively(string s1, string s2, int size1, int size2, string& ans, bool fromFirst = true, int i = 0, int j = 0){
    if(i >= size1 && j >= size2) return;

    if(i == size1 && j < size2){
        for(int x = j; x < size2; x++){
            ans = ans + s2[x];
        }
        return;

    }
    if(j == size2 && i < size1){
        for(int x = i; x < size1; x++){
            ans = ans + s1[x];
        }
        return;

    }
    if(fromFirst && i < size1){
        ans = ans + s1[i];
        fromFirst = !fromFirst;
        i++;
    }
    if((!fromFirst) && j < size2){
        ans = ans + s2[j];
        fromFirst = !fromFirst;
        j++;
    }
    mergeAlternatively(s1, s2, size1, size2, ans, fromFirst, i, j);

}

int main(){
    string s1 = "Deepesh";
    string s2 = "Yadav";

    int size1 = s1.size();
    int size2 = s2.size();

    string mergeAns;
    mergeAlternatively(s1, s2, size1, size2, mergeAns);
    cout<<mergeAns<<endl;
    return 0;
}