#include <iostream>
#include <set>
using namespace std;

// SET - everything is sorted and unique - not a linear container, a tree is maintained - everything happens in log time complexity
void explainSet()
{
    set<int> st;
    st.insert(50);
    st.emplace(25);
    st.insert(50); // no duplicate values
    st.insert(5);
    st.insert(10);

    for (auto it : st)
    {
        cout << it << " ";
    }
    cout << endl;

    auto it = st.find(5);
    if (it != st.end())
        cout << "Element 5 found" << endl;
    else
        cout << "Element 5 not found" << endl;

    it = st.find(15); // Corrected declaration
    if (it != st.end())
        cout << "Element 15 found" << endl;
    else
        cout << "Element 15 not found" << endl;

    st.erase(5);
    for (auto it : st)
    {
        cout << it << " ";
    }
    cout << endl;

    int cnt = st.count(1);
    cout << "Count of 1: " << cnt << endl;

    it = st.find(5); 
    st.erase(it);
    for (auto it : st)
    {
        cout << it << " ";
    }
    cout << endl;

    auto it1 = st.find(10);
    auto it2 = st.find(50);
    st.erase(it1, it2);
    for (auto it : st)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    explainSet();
    return 0;
}
