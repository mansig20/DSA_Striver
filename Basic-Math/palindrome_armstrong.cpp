#include <iostream>
#include <cmath>
#include <list>
#include <algorithm>

using namespace std;

// check for palindrome number
bool palindrome_num(int n)
{
    int rev = 0;
    int original = n;
    while (n > 0)
    {
        int lastdig = n % 10;
        rev = (rev * 10) + lastdig;
        n = n / 10;
    }
    if (original == rev)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// check for armstrong number
bool armstrong_num(int n)
{
    int sum = 0;
    int original = n;
    while (n > 0)
    {
        int lastdig = n % 10;
        sum = sum + (lastdig * lastdig * lastdig);
        n = n / 10;
    }
    if (original == sum)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cout << "Enter any number : ";
    cin >> n;

    bool p_num = palindrome_num(n);
    if (p_num)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }

    cout << "Enter any number : ";
    cin >> n;

    bool a_num = armstrong_num(n);
    if (a_num)
    {
        cout << "Armstrong" << endl;
    }
    else
    {
        cout << "Not Armstrong" << endl;
    }
    return 0;
}