#include <iostream>
#include <deque>
using namespace std;

// DEQUE
void explainDeque()
{
    deque<int> dq;
    dq.push_back(100);
    dq.emplace_back(90);
    dq.push_front(50);
    dq.emplace_front(60);

    cout << "after pushing: ";
    for (auto num : dq)
        cout << num << " ";
    cout << endl;

    cout << "Back element: " << dq.back() << endl;
    cout << "Front element: " << dq.front() << endl;

    dq.pop_back();
    cout << "after popping from the back: ";
    for (auto num : dq)
        cout << num << " ";
    cout << endl;

    dq.pop_front();
    cout << "after popping from the front: ";
    for (auto num : dq)
        cout << num << " ";
    cout << endl;

}

int main()
{
    explainDeque();
    return 0;
}
 