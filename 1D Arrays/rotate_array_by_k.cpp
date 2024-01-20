#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void revPart(int arr[], int si, int li)
{
    for (int i = si, j = li; i < j; i++, j--)
    {
        swap(&arr[i], &arr[j]);
    }
}

// 1 2 3 4 5 6 7 8 9          k=3
// 7 8 9 1 2 3 4 5 6

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(int);
    int k = 15;
    k = k % size;



    // More time complexity maybe O(n^2) in worst case

    // for (int i = 0; i < k; i++)
    // {
    //     for (int j = 1; j < size; j++)
    //     {
    //         swap(&arr[0], &arr[j]);
    //     }
    // }


    revPart(arr,0,size-1);
    revPart(arr,0,k-1);
    revPart(arr,k,size-1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}