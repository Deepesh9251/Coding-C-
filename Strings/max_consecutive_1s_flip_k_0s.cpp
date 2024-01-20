#include<iostream>
using namespace std;

//Q. We have to find maximum number of consecutive ones if we can flip at max k zeros in a string.
//# we have to find longest substring with at max k zeros. then we will flip them to get the desired ans.
int max1sFlipK0s(string s, int k){
    if(s.size() == 0) return 0;
    if(k < 0){
        cout<<"INVALID INPUT";
        return -1;
    }
    if(k >= s.size()) return s.size();
    int countZero = 0;
    int maxLength = 0;
    int si = 0;
    int li = 0;
    while(li < s.size()){
        if(s[li] == '0'){
            countZero++;
        }
        while(countZero > k){
            if(s[si] == '0') countZero--;
            si++;
        }
        maxLength = max(maxLength, li - si + 1);
        li++;

    }
    return maxLength;
}

int main(){
    string s = "0111000001010010100011";
    int k = 100;
    cout<<max1sFlipK0s(s,k);
    return 0;
}