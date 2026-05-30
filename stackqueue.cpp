// Stack is a linear data structure that follows the Last In First Out (LIFO) principle.
// It can be implemented using arrays or linked lists.

// #include <iostream>
// #include <stack>

// using namespace std;

// int main() {
//     stack<int> st;

//     st.push(1);
//     st.push(2);
//     st.push(3);

//     cout << st.top() << endl;  // Output: 3

//     st.pop();

//     cout << "Top element after pop: " << st.top() << endl;

//     cout << "Size of the stack is: " << st.size() << endl;

//     if (st.empty()) {
//         cout << "Stack is empty" << endl;
//     } else {
//         cout << "Stack is not empty" << endl;
//     }

//     return 0;
// }


//  stack using arrays and vector and linkedlist 


//  stack using arrays 


#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> v;

public:
    void push(int val) { // O(1)
        v.push_back(val);
    }

    void pop() { // O(1)
        if (v.empty()) {
            cout << "Stack Underflow" << endl;
            return;
        }
        v.pop_back();
    }

    int top() { // O(1)
        if (v.empty()) {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return v[v.size() - 1];
    }

    bool empty() {
        return v.empty();
    }
};

int main() {

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(70);
    s.push(90);
    s.push(100);

    cout << "Top element: " << s.top() << endl;

    s.pop();

    cout << "Top element after pop: " << s.top() << endl;

    cout << "\nPopping all elements:\n";

    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }

    if (s.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}


#include <iostream>
using namespace std;

class Stack {
private:
    int arr[100];
    int topIndex;

public:
    Stack() {
        topIndex = -1;
    }

    void push(int val) {
        if (topIndex == 99) {
            cout << "Stack Overflow" << endl;
            return;
        }

        arr[++topIndex] = val;
    }

    void pop() {
        if (topIndex == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }

        topIndex--;
    }

    int top() {
        if (topIndex == -1) {
            cout << "Stack is Empty" << endl;
            return -1;
        }

        return arr[topIndex];
    }

    bool empty() {
        return topIndex == -1;
    }

    int size() {
        return topIndex + 1;
    }
};

int main() {

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "Top element: " << s.top() << endl;

    s.pop();

    cout << "Top element after pop: " << s.top() << endl;

    cout << "\nPopping all elements:\n";

    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }

    cout << "Size: " << s.size() << endl;

    return 0;
}