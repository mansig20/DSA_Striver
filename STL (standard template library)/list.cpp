#include<iostream>
#include <list>
using namespace std;

// LIST : exactly similar to vector - but it gives front operations as well , internal operation is a doubly link list
void explainList()
{
    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(5); // cheap in terms of time complexity as compared to insert in vector

    // rest functions same as vector

    ls.emplace_front();
    for (auto it : ls)
    {
        cout << it << " ";
    }
}

int main()
{
    explainList();
    return 0;
}