#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st, int element) {
    if (st.empty()) {
        st.push(element);
        return;
    }

    int topElement = st.top();
    st.pop();

    insertAtBottom(st, element);
    st.push(topElement);
}

void reverseStack(stack<int> &st) {
    if (st.empty()) {
        cout << "Stack is empty" << endl;
        return;
    }

    int element = st.top();
    reverseStack(st);
    insertAtBottom(st, element);
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    
    reverseStack(st);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}

// #include <iostream>
// #include <stack>
// using namespace std;

// void insertAtBottom(stack<int> &st, int element) {
//     if (st.empty()) {
//         st.push(element);
//         return;
//     }

//     int topElement = st.top();
//     st.pop();

//     insertAtBottom(st, element);
//     st.push(topElement);
// }

// void reverseStack(stack<int> &st) {
//     if (st.size() <= 1) { // Base case
//         return;
//     }

//     int element = st.top();
//     st.pop();
//     reverseStack(st);
//     insertAtBottom(st, element);
// }

// int main() {
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5);
//     st.push(6);
    
//     reverseStack(st);

//     while (!st.empty()) {
//         cout << st.top() << " ";
//         st.pop();
//     }
//     cout << endl;

//     return 0;
// }