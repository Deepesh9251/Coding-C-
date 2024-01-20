#include<iostream>
#include<algorithm>
using namespace std;

//Q. 

string decodeString(string &s){
    string ans = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] != ']'){
            ans += s[i];
        }
        else{
            int j = ans.size() - 1;
            string tempStr = "";
            while(ans[j] != '['){
                tempStr += ans[ans.size() - 1];
                ans.pop_back();
                j--;
            }
            reverse(tempStr.begin(),tempStr.end());

            j--;
            ans.pop_back();

            string numStr = "";
            while(ans[j] >= '0' && ans[j] <= '9'){
                numStr += ans[j];
                ans.pop_back();
                j--;
            }
            reverse(numStr.begin(), numStr.end());
            int num = stoi(numStr);
            for(int i = 0; i < num; i++){
                ans += tempStr;
            }
        }
    }
    return ans;
}

int main(){
    string s = "jhgg";
    int n = s.size();
    string ans = decodeString(s);
    cout<<ans;
    
    return 0;
}