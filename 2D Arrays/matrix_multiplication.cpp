#include <iostream>
using namespace std;

int main()
{
    int A[4][2] = {
        1, 2,
        3, 6,
        0, 1,
        0, 0};
    int B[2][4] = {
        0, 1, 1, 0,
        4, 2, 5, 1};
    int AB[4][4];
    string choice;
    cout << "Do you want to enter matrices?" << endl;
    cout << "(enter 0 for No, anything for Yes)" << endl;
    cin >> choice;

    if (choice != "0")
    {

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> A[i][j];
            }
        }
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> B[i][j];
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            AB[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                AB[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << AB[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}