#include <iostream>
#include <cmath>
#include <list>
#include <algorithm>

using namespace std;

// to count number of digits in a number
int count_num(int n)
{
    int count = 0;
    while (n > 0)
    {
        // int lastdig = n%10;
        count++;
        n = n / 10;
    }
    return count;
}

// to reverse a number
int reverse_num(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int lastdig = n % 10;
        rev = (rev * 10) + lastdig;
        n = n / 10;
    }
    return rev;
}

// check for prime-number
bool prime_num(int n)
{
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if (n % i != i)
            {
                count++;
            }
        }
    }
    if (count == 2)
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

    int result = count_num(n);
    cout << "The number of digits are : " << result << endl;

    cout << "Enter any number : ";
    cin >> n;

    int r_num = reverse_num(n);
    cout << "The reverse is : " << r_num << endl;

    cout << "Enter any number : ";
    cin >> n;

    bool pr_num = prime_num(n);
    if (pr_num)
    {
        cout << "Number is Prime" << endl;
    }
    else
    {
        cout << "Number is Not prime" << endl;
    }
    return 0;
}