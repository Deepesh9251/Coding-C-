#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n == 0 || n == 1)
        return false;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter the number which you want to check : ";
    cin >> n;
    bool check = false;

    for (int i = 2; i <= n/2; i++)
    {
        if (isPrime(i) && isPrime(n-i))
        {
            cout << n << " = " << i << " + " << n-i << endl;
            check = true;
        }
    }
    if (check == false)
    {
        cout << "No, "<<n<<" can't be expressed as the sum of two integers. ";
    }
}