#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
    {
        return true;
    }
    if (p1.second > p2.second)
    {
        return false; // they will be swapped
    }

    // they are same - sort according to first in desc order
    if (p1.first > p2.first)
    {
        return true;
    }
    return false;
}

void explainExtra()
{
    vector<int> v;
    v.emplace_back(10);
    v.emplace_back(17);
    v.emplace_back(7);
    v.emplace_back(5);
    v.emplace_back(12);

    cout << "Vector before sorting: ";
    for (auto it : v)
    {
        cout << it << " ";
    }

    cout << endl;

    sort(v.begin(), v.end());

    cout << "Vector after sorting: ";
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    int a[] = {1, 33, 25, 10, 4, 3};

    int size_n = sizeof(a) / sizeof(a[0]);

    cout << "Array before sorting: ";
    for (int i = 0; i < size_n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    sort(a, a + size_n);

    cout << "Array after sorting: ";
    for (int i = 0; i < size_n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // Sorting a part of the array
    sort(a + 2, a + 5);
    cout << "Array after sorting a part: ";
    for (int i = 0; i < size_n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // Using inbuilt comparator for sorting
    // greater<int> //  sorts is desc order
    sort(a, a + size_n, std::greater<int>());
    cout << "Array after sorting using inbuilt comparator: ";
    for (int i = 0; i < size_n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // Sorting an array of pairs using custom comparator
    pair<int, int> arr[] = {{1, 2}, {2, 1}, {4, 1}};
    sort(arr, arr + size_n, comp);

    cout << "Array of pairs after sorting: " << endl;
    for (int i = 0; i < size_n; i++)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
}

int main()
{
    explainExtra();
    return 0;
}