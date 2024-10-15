#include <iostream>
#include <stack>
#include <string>
using namespace std;

int precedence(char ch) {
    if (ch == '+' || ch == '-')
        return 2;
    else if (ch == '*' || ch == '/')
        return 3;
    else if (ch == '(')
        return 0; // Lowest precedence for '('
    else if (ch == ')')
        return 1;
    else
        return 0;
}

bool isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '/' || ch == '*' || ch == '(' || ch == ')');
}

string infixToPostfix(string infix) {
    string postfix = "";
    stack<char> st;
    int len = infix.length();
    for (int i = 0; i < len; ++i) {
        char c = infix[i];
        if (!isOperator(c)) {
            postfix += c;
        } else {
            if (c == '(') {
                st.push(c);
            } else if (c == ')') {
                while (!st.empty() && st.top() != '(') {
                    postfix += st.top();
                    st.pop();
                }
                if (!st.empty()) {
                    st.pop(); // Discard the '('
                }
            } else {
                // Consider the '(' when comparing precedence
                while (!st.empty() && precedence(c) <= precedence(st.top())) {
                    if (st.top() == '(') break; // Stop if '(' encountered
                    postfix += st.top();
                    st.pop();
                }
                st.push(c);
            }
        }
    }

    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter the Infix notation: ";
    getline(cin, infix);

    cout << "The Postfix notation is: " << infixToPostfix(infix) << endl;
    return 0;
}