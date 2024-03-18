#include <iostream>
#include <algorithm>
using namespace std;

bool palindrome(int i, string &s)
{
    if (i >= s.size() / 2)
    {
        return true;
    }
    if (s[i] != s[s.size() - i - 1])
    {
        return false;
    }
    return palindrome(i + 1, s);
}

int fibonacci(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    int last = fibonacci(n - 1);
    int slast = fibonacci(n - 2);
    return last + slast;
}

int main()
{
    string s;
    cout << "Enter a string : ";
    cin >> s;
    bool result = palindrome(0, s);
    if (result)
    {
        cout << "Is a Palindrome" << endl;
    }
    else
    {
        cout << "Is not a Palindrome" << endl;
    }

    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
    return 0;
}