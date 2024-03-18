#include <iostream>
#include <algorithm>
using namespace std;

void print_sum_1(int i, int sum) // paramerterised
{
    if (i < 1)
    {
        cout << "The sum is (single parameter) : " << sum;
        return;
    }
    print_sum_1(i - 1, sum + i);
}

int print_sum_2(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + print_sum_2(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    print_sum_1(n, 0);
    cout << endl;

    cout << "The sum is (2 parameters) : " << print_sum_2(n);
}