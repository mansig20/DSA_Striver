#include <iostream>
#include <algorithm>
using namespace std;

int fact_num(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fact_num(n - 1);
}

void swap_num(int i, int arr[], int n)
{
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    swap_num(i + 1, arr, n);
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << "The factorial of " << n << " is : " << fact_num(n) << endl;

    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element : ";
        cin >> arr[i];
    }

    swap_num(0, arr, n);
    cout << "After swap : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}