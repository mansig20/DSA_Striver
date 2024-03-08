#include <iostream>
#include <map>
using namespace std;

// MAP - stores key value pairs , keys are unique and sorted
void explainMap()
{
    map<int, int> mpp;
    mpp[1] = 5;
    mpp.insert({2, 10});
    mpp.insert({3, 15});

    mpp.emplace(3, 15);

    cout << "Map mpp:" << endl;
    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    map<int, pair<int, int>> mpp1;
    mpp1[2] = {3, 15};

    cout << "Map mpp1:" << endl;
    for (auto it : mpp1)
    {
        cout << it.first << " (" << it.second.first << ", " << it.second.second << ")" << endl;
    }

    map<pair<int, int>, int> mpp2;
    mpp2[{1, 10}] = 20;

    cout << "Map mpp2:" << endl;
    for (auto it : mpp2)
    {
        cout << "(" << it.first.first << ", " << it.first.second << ") " << it.second << endl;
    }

    cout << "Value associated with key 1 in mpp: " << mpp[1] << endl;

    auto it_find = mpp.find(2);
    cout << "Value associated with key 2 using find(): " << it_find->second << endl;

    cout << "using lower_bound() - " << endl;
    auto it_lower_bound = mpp.lower_bound(2);
    cout << "Value associated with key 2: " << it_lower_bound->second << endl;

    auto it_lowerb = mpp.lower_bound(3);
    cout << "Value associated with key 3: " << it_lowerb->second << endl;
}

// MULTIMAP -- can store duplicate keys - in sorted order
// mpp[key]  cannot be used here

// UNOREDRED MAP -- stores unique keys in random order - not sorted

int main()
{
    explainMap();
    return 0;
}