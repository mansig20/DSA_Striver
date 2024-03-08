#include <iostream>
#include <utility> // for pair
#include <vector>
#include <algorithm> // for sort
using namespace std;

// comp -- self written comparator --- boolean function
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

int main()
{
    vector<pair<int, int>> v = {{1, 4}, {2, 3}, {3, 2}, {4, 1}, {5, 2}};

    cout << "Before sorting:" << endl;
    for (const auto &p : v)
    {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;

    // Sorting using custom comparator
    sort(v.begin(), v.end(), comp);

    cout << "After sorting:" << endl;
    for (const auto &p : v)
    {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;

    return 0;
}
