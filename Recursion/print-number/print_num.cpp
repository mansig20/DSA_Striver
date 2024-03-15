#include <iostream>
using namespace std;

// time complexity -- O(n)
void print_name(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "mansi"
         << " ";
    print_name(i + 1, n);
}

void print_num_1(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << i << " ";
    print_num_1(i + 1, n);
}

void print_num_2(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    print_num_2(i - 1, n);
    cout << i << " ";
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    print_name(1, n);
    cout << endl;
    
    print_num_1(1, n);
    cout << endl;
    
    print_num_2(n, n);
    cout << endl;
  

    return 0;
}