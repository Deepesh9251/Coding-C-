#include <iostream>
using namespace std;
int main()
{ cout<<"-----------------------------------------------------------------\n";
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i == 3 && j==4) break;
            cout << j << " ";
        }cout<<endl;
        for (int j = 5; j >= 0; j--)
        {
            cout << j << " ";
        }cout<<endl;

    }

    return 0;
}