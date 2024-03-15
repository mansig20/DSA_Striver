#include <iostream>
using namespace std;

void print_num_rev_1(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    cout << i << " ";
    print_num_rev_1(i - 1, n);
}

void print_num_rev_2(int i, int n)
{
    if (i > n)
    {
        return;
    }
    print_num_rev_2(i + 1, n);
    cout << i << " ";
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    
    print_num_rev_1(n, n);
    cout << endl;
   
    print_num_rev_2(1, n);
    cout << endl;

    return 0;
}