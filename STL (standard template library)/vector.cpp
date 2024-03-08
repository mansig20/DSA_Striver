#include <iostream>
#include <vector>
#include <utility> // for pair
using namespace std;

// vector - a container - store elements in same manner as array - dynamic in nature
void explainVector()
{
    vector<int> v; // creates an empty container
    v.push_back(10);
    v.emplace_back(20);
    v.emplace_back(30);
    v.emplace_back(40);
    v.emplace_back(50);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4);

    vector<int> v1(5, 100);

    vector<int> v2(5);

    vector<int> v3(5, 20);
    vector<int> v4(v3);

    cout << v1[0] << "\n" << v1.at(0) << "\n";

    vector<int>::iterator it1 = v.begin(); // iterator points to memory add
    it1++;
    cout << *(it1) << " ";

    it1 = it1 + 2;
    cout << *(it1) << " ";

    vector<int>::iterator it2 = v.end();
    it2--;
    cout << *(it2) << " ";

    vector<int>::reverse_iterator rit1 = v.rend();
    vector<int>::reverse_iterator rit2 = v.rbegin();
    rit2++;
    cout << *(rit2) << " ";

    cout << v.back() << "\n";

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << "\n";

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << "\n";

    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << "\n";

    v.erase(v.begin() + 1);
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << "\n";

    v.erase(v.begin() + 2, v.begin() + 4); // start included , end not included
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << "\n";

    vector<int> v5(2, 15);

    v.insert(v.begin() + 1, 15);
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << "\n";

    v.insert(v.begin() + 1, 2, 15);
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << "\n";

    vector<int> copy(2, 45);
    v.insert(v.begin(), copy.begin(), copy.end());
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << "\n";

    cout << v.size() << "\n";

    v.swap(v1);
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << "\n";

    v.clear(); // erases the entire vector
}

int main()
{
    explainVector();
    return 0;
}
