#include <iostream>
#include <utility> // for pair
using namespace std;

// Pairs - part of utility library
void explainPair()
{
    pair<int, int> p = {1, 5};
    cout << p.first << " " << p.second;

    cout << endl;

    pair<int, pair<int, int>> m = {1, {4, 6}};
    cout << p.first << " " << m.second.first << " " << m.second.second;

    cout << endl;

    pair<int, int> arr[] = {{10, 20}, {30, 40}, {50, 60}};
    cout << arr[1].first << " " << arr[2].second;
}

int main()
{
    explainPair();
    return 0;
}