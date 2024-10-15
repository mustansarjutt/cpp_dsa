#include <iostream>
#include <string>
using namespace std;

#define MAX_SIZE 100

class Stack {
    int ptr, size;
    char *arr;
public:
    Stack() {
        this->size = MAX_SIZE;
        arr = new char[size];
    }
    void push(char element) {
        if (!isFull()) {
            ptr++;
            arr[ptr] = element;
            return;
        }

        cout << "Stack is Full" << endl;
    }
    void pop() {
        if (!isEmpty()) {
            ptr--;
            return;
        }
        cout << "Stack is Empty" << endl;
    }
    char top() {
        if (!isEmpty()) {
            return arr[ptr];
        }
        return -1;
    }
    bool isEmpty() {
        return (ptr == -1);
    }
    bool isFull() {
        return (ptr == (this->size-1));
    }
    int getSize() {
        return this->size;
    }
};
int precedence(char ch) {
    if (ch == '+' || ch == '-')
        return 1;
    else if(ch == '*' || ch == '/')
        return 2;
    else
        return 0;
}
bool isOperator(char ch) {
    if (ch == '+' || ch == '-' || ch == '/' || ch == '*') {
        return true;
    }
    return false;
}
string infixToPostfix(string infix) {
    Stack st;
    int j=0;
    string postfix = "";

    for (int i=0; i<infix.length(); i++) {
        if (!isOperator(infix[j])) {
            postfix += infix[j];
            j++;
        } else {
            if (precedence(infix[j]) > precedence(st.top())) {
                st.push(infix[j]);
                j++;
            } else {
                postfix += st.top();
                st.pop();
                j++;
            }
        }
    }
    while (!(st.isEmpty())) {
        postfix += st.top();
        st.pop();
    }
    return postfix;
}
int main() {
    string infix;
    cout << "Enter the infix expression: ";
    cin >> infix;
    cout << "The postfix expression is: " << infixToPostfix(infix) << endl;
    system("pause");
    return 0;
}