#include <iostream>
#include <map>
using namespace std;

// MULTI SET - everything is sorted but not unique
void explainMultiSet()
{
    multiset<int> ms;
    ms.insert(1);
    ms.insert(5);
    ms.insert(1);
    ms.insert(3);
    ms.insert(1);
    cout << "after insertion: ";
    for (auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;

    ms.erase(1); // erases all occurrences
    cout << "Count of 1 after erasing: " << ms.count(1) << endl;

    // erases single occurrence
    // ms.erase(ms.find(1));
    // cout << "after erasing one occurrence of 1: ";
    // for (auto it : ms)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;

    // erases occurences as per instruction
    //  ms.erase(ms.find(1), ms.find(1) + 2);
    //  ms.erase(ms.find(1), std::next(ms.find(1), 2));
    //  cout << "after erasing two occurrences of 1: ";
    //  for (auto it : ms)
    //  {
    //      cout << it << " ";
    //  }
    //  cout << endl;
}

int main()
{
    explainMultiSet();
    return 0;
}