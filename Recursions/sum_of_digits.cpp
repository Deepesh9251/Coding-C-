#include <iostream>
using namespace std;

int digitSum1(int n, int* sum)
{
    *sum = *sum + n % 10;
    if (n < 10)
        return n;

    return digitSum1(n / 10, sum);
}

int digitSum2(int n){
    if ( n < 10 ) return n;
    return digitSum2(n / 10) + n % 10;
}

int main()
{

    int num;
    cin >> num;

    int sum1 = 0;
    digitSum1(num, &sum1);
    cout << sum1 <<endl;


    int sum2 = digitSum2(num);
    cout<<sum2<<endl;


    return 0;
}