#include <iostream>
#include <stack>
using namespace std;

// STACK - works on LIFO principle
void explainStack()
{
    stack<int> st;

    st.push(5);
    st.push(15);
    st.push(25);
    st.push(35);
    st.emplace(45);

    cout << "Top element: " << st.top() << endl;

    cout << "Size of stack: " << st.size() << endl;

    cout << "Is the stack empty? " << (st.empty() ? "Yes" : "No") << endl;

    st.pop();

    cout << "Top element: " << st.top() << endl;

    stack<int> st2;
    st.swap(st2);

    cout << "Size of st1 after swapping: " << st.size() << endl;
    cout << "Size of st2 after swapping: " << st2.size() << endl;
}

int main()
{
    explainStack();
    return 0;
}
