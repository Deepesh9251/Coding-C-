#include <iostream>
using namespace std;

float fact(float a)
{
    if (a == 1 || a == 0)
        return 1;
    return a * fact(a - 1);
}
int main()
{
    float n;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Factorial of " << n << " is " << fact(n) << ".\n";
    return 0;
}