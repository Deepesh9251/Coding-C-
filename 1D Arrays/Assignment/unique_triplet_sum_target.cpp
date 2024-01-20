#include <iostream>
using namespace std;

int main()
{
    int nums[] = {0, 1, 1, 2, 3, 4, 5, 6, 7};       // In question the array is not sorted but I am  taking a sorted array as I can sort it using any technique after sometime.
    int size = sizeof(nums) / sizeof(int); 
    int target = 9;

    int tripletCount = 0;
    int idx1, idx2, idx3;

    for (int k = 0; k < size; k++)
    {
        if (tripletCount > 0 && nums[k] == nums[idx3])
        {
            continue;
        }

        for (int i = k + 1, j = size - 1; i < j;)
        {
            if (nums[i] + nums[j] > (target - nums[k]))
            {
                j--;
            }
            else if (nums[i] + nums[j] < (target - nums[k]))
            {
                i++;
            }
            else
            {
                if (tripletCount == 0)
                {   cout<<"("<<nums[i]<<", "<<nums[j]<<", "<<nums[k]<<")"<<endl;
                    tripletCount++;
                    idx1 = i;
                    idx2 = j--;
                    idx3 = k;
                    continue;
                }
                if (nums[i] == nums[idx1] || nums[i] == nums[idx2] || nums[j] == nums[idx1] || nums[j] == nums[idx2])
                {
                    j--;
                    continue;
                }
                cout<<"("<<nums[i]<<", "<<nums[j]<<", "<<nums[k]<<")"<<endl;
                tripletCount++;
                idx1 = i;
                idx2 = j--;
                idx3 = k;
            }
        }
    }

    cout << tripletCount;

    return 0;
}