#include<iostream>
using namespace std;

int maxEle(int* arr, int size){
    int max = arr[0];
    for(int i = 0; i < size; i++){
        if(max < arr[i]) max = arr[i];
    }
    return max;
}
int minEle(int* arr, int size){
    int min = arr[0];
    for(int i = 0; i < size; i++){
        if(min > arr[i]) min = arr[i];
    }
    return min;
}

void normalise(int* arr, int size, int min, bool toAdd){
    for(int i = 0; i < size; i++){
        if(toAdd) arr[i] -= (min);
        else arr[i] += (min);
    }
    return;
}

void countSort(int* arr, int size, bool isStable = true){
    int min = minEle(arr, size);
    normalise(arr, size, min, true);      //# to normalise all elements, so that the algorithm can handle negative cases
    int max = maxEle(arr, size);

    int count[max + 1] = {0};

    for(int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    //_ STABLE ALGORITHM
    if(isStable){
        for(int i = 1; i <= max; i++) count[i] = count[i] + count[i-1];
        int ans[size];

        for(int i = size - 1; i >= 0; i--){  
            count[arr[i]]--;
            ans[count[arr[i]]] = arr[i];
        }

        for(int i = 0; i < size; i++) arr[i] = ans[i];
    }
    
    //_ UNSTABLE ALGORITHM
    else{    
        //+ for(int i = 1; i <= max; i++) count[i] = count[i] + count[i-1];
        int idx = 0;
        for(int i = 0; i <= max; i++){
            //+ for(int j = idx;j < count[i]; j++){
            for(int j = 0; j < count[i]; j++){
                arr[idx++] = i;
            }
        }
    }
    normalise(arr, size, min, false);     //# for restoring all the actual elements
    return;
}


int main(){
    int arr[] = {5,-1,2,-4,-4,8,1,-9,4,3};
    int size = sizeof(arr) / sizeof(int);

    countSort(arr, size, false);
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    countSort(arr, size, true);
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}