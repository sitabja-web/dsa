// Stack is a linear data structure that follows the Last In First Out (LIFO) principle.
// It can be implemented using arrays or linked lists.

#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);

    cout << st.top() << endl;  // Output: 3

    st.pop();

    cout << "Top element after pop: " << st.top() << endl;

    cout << "Size of the stack is: " << st.size() << endl;

    if (st.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}


