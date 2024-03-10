#include <iostream>
#include <cmath>
#include <list>
#include <algorithm>

using namespace std;

// check for divisors of a number
void divisors_num(int n)
{
    cout << "The divisors are : ";
    list<int> ls;
    // O(sqrt(n))
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if ((n / i) != i)
            {
                ls.push_back(n / i);
            }
        }
    }

    // O(n log n) --- (n = number of factors)
    ls.sort();
    // O(n) --- (n = number of factors)
    for (auto it : ls)
    {
        cout << it << " ";
    }
    cout << endl;
}

// greatest common divisor of 2 numbers
int gcd_num(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
            b = b % a;
    }
    if (a == 0)
    {
        return b;
    }
    else
        return a;
}

int main()
{
    int n;
    cout << "Enter any number : ";
    cin >> n;

    divisors_num(n);

    int x, y;
    cout << "Enter 2 numbers : ";
    cin >> x >> y;
    cout << "The gcd is : " << gcd_num(x, y) << endl;

    return 0;
}