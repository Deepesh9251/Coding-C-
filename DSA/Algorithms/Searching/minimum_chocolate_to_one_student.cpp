#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

//Q. You have 'n' boxes of chocolate. Each box contain arr[i] chocolates. You need to distribute these boxes among 'm' students such that the maximum number of chocolates allocated to a student is minimum. array is sorted.
//Q a) one box to exactly one student.
//Q b) all boxes should be allocated.
//Q c) Each student should have atleast one box.
//Q d) Allotment shoudl be  in continous order(e.g (1,234) or (12,34) or (123,4) etc...)
//Q    Calculate and return that minimum possible number. Assume that it is always possible to distribute the chocolates.

bool canDistribute(vector<int> &arr, int size, int mid, int students){
    int chocolateCount = 0;
    int studentCount = 1;
    for(int i = 0; i < size; i++){
        if(arr[i] > mid) return false;
        if(chocolateCount + arr[i] > mid){
            chocolateCount = arr[i]; 
            studentCount++;
        }
        else{
            chocolateCount += arr[i];
        }
    }
    return (studentCount <= students);
}

int minChocolateToOneStudent(vector<int> &arr, int size, int students){
    if(students > size){
        return -1;
    }
    int low = arr[0];
    int high = 0;
    for(int i = 0; i < size; i++){
        high += arr[i];
    }
    int ans = -1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(canDistribute(arr, size, mid, students)){
            high = mid - 1;
            ans = mid;
        }
        else{
            low = mid + 1;
        }
    }

    return ans;
}

int main(){
    vector<int> arr = {1,1,1,1,1};
    int n = arr.size();
    int students = 6;
    int result = minChocolateToOneStudent(arr, n, students);
    result != -1 ? cout<<result : cout<<"INVALID";
    return 0;
}