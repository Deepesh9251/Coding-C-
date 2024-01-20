#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    while (n)
    {
        if (n % 7 == 0)
        {
            cout << n << endl;
            break;
        }
        n += 5;
    }
}