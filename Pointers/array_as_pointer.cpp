#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 63, 214, 531, 5355, 34};
    int *ptr = arr;

    int a, b, c, d, e, f, g, h, i;
    int brr[] = {0, 34, 4, 553, 534, 5632, 23, 2, 24, 3, 4, 2, 2, 2, 2, 2};
    int crr[] = {0, 34, 4, 553, 53, 4, 87, 8, 23, 56, 32, 2, 24, 3, 4, 2, 2, 2, 2, 2};

    cout << arr << " " << ptr << endl;
    cout << *arr << " " << *ptr << endl;

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cout << int(arr + i) << endl;
    }

    cout << "---------------------------------------------" << endl;
    for (int i = 0; i < sizeof(brr) / sizeof(int); i++)
    {
        cout << int(brr + i) << endl;
    }

    cout << "---------------------------------------------" << endl;
    for (int i = 0; i < sizeof(crr) / sizeof(int); i++)
    {
        cout << int(crr + i) << endl;
    }
    cout << "---------------------------------------------" << endl;
    cout<<int(&a)<<endl;
    cout<<int(&b)<<endl;
    cout<<int(&c)<<endl;
    cout<<int(&d)<<endl;
    cout<<int(&e)<<endl;
    cout<<int(&f)<<endl;
    cout<<int(&g)<<endl;
    cout<<int(&h)<<endl;
    cout<<int(&i)<<endl;

    return 0;
}