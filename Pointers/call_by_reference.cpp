#include <iostream>
using namespace std;

// Question : tell me the first and last occurence of any target letter in a string.

void fun(string s, int *first, int *last, char target)
{
    int counter = 0;
    bool flag1 = false;
    bool flag2 = false;
    *first = -1;
    *last = -1;

    for (int i = 0, j = s.length() - 1; i < s.length() && j >= 0; i++, j--)
    {
        if (*first == -1)
        {
            if (s[i] == target)
            {
                *first = i;
                flag1 = true;
            }
        }
        if (*last == -1)
        {
            if (s[j] == target)
            {
                *last = j;
                flag2 = true;
            }
        }

        if(flag1 == true && flag2 == true) {
            break;
        }
    }
}

int main()
{

    string s;
    cin >> s;

    int first_occurence, last_occurence;

    fun(s, &first_occurence, &last_occurence, 'a');

    cout<<first_occurence<<" "<<last_occurence<<endl;

    return 0;
}