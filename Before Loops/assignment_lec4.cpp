#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    x==y?  cout<< bool(x==y) : cout << bool(x==y);

    if(x<50 && x<y) cout<< "\nBoth the conditions are true" << endl;
    else cout << "\nBoth the conditions are not true." << endl;

    int boys, girls ;
    boys = 17;
    int total = (80 * 45)/100 ;
    girls = total - boys ;
    cout << "The number of girls getting grade A is " << girls << endl ;

    int number, dig1, dig2, dig4, dig3, dig5 ;
    cin>> number ;
    dig1 = number /10000 ;
    number = number %10000;
    dig2 = number /1000 ;
    number = number %1000;
    dig3 = number /100 ;
    number = number %100;
    dig4 = number/ 10 ;
    number = number %10;
    dig5 = number;
    cout << " The sum of first and second last digit of th number is : "<< dig1+dig4<<endl;

    float num1, num2;
    char opr;
    float result = 0;
    cin >> num1;
    cin >> opr;
    cin >> num2;
    switch (opr)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    case '%':
        result = int(num1) % int(num2);
        break;

    default:
        cout << " Enter valid operator";
    }
    result == 0 ? cout << "" : cout << "result = " << result << endl;
    return 0;
}