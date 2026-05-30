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
#include <list>
using namespace std;


//   stack using ll 


class Stack {
private:
    list<int> ll;

public:
    void push(int val) { // O(1)
        ll.push_front(val);
    }

    void pop() { // O(1)
        if (ll.empty()) {
            cout << "Stack Underflow" << endl;
            return;
        }
        ll.pop_front();
    }

    int top() { // O(1)
        if (ll.empty()) {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return ll.front();
    }

    bool empty() {
        return ll.empty();
    }
};

int main() {

    list ll;

    ll.push(10);
    ll.push(20);
    ll.push(30);
    ll.push(40);

    cout << "Top element: " << ll.front() << endl;

    ll.pop();

    cout << "Top element after pop: " << ll.front() << endl;

    cout << "\nPopping all elements:\n";

    while (!ll.empty()) {
        cout << ll.front() << endl;
        ll.pop_front();
    }

    if (ll.empty()) {
        cout << "Stack is empty" << endl;
    }

    return 0;
}


//  using stl 



// stack<int>st;

// st.push(20);
// st.push(30);
// st.push(40);

// while(!st.empty())  {
//        cout<<st.top()<< endl;
//        st.pop();
// }

