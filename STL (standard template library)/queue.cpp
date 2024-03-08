#include <iostream>
#include <queue>
using namespace std;

// QUEUE - works on FIFO principle
void explainQueue()
{
    queue<int> q;
    q.push(4);
    q.push(8);
    q.emplace(12);

    q.back() += 4;

    cout << "Back element: " << q.back() << endl;

    cout << "Front element: " << q.front() << endl;

    q.pop();

    cout << "Front element after pop: " << q.front() << endl;
}

int main()
{
    explainQueue();
    return 0;
}
