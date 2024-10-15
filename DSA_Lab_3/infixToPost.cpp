#include <iostream>
#include <stack>
using namespace std;

bool isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '/' || ch == '*' || ch == '(' || ch == ')');
}

int precedence(char ch) {
    if (ch == '+' || ch == '-')
        return 2;
    else if(ch == '*' || ch == '/')
        return 3;
    else if(ch == '(')
        return 0;
    else if(ch == ')')
        return 1;
    else
        return 0;
}

string infixToPostfix(string infix) {
    stack<char> st;
    string postfix = "";
    int len = infix.length();
    char currChar;

    for (int i=0; i<len; i++) {
        currChar = infix.at(i);
        if (!isOperator(currChar)) {
            postfix += currChar;
        } else {
            if (currChar == '(') {
                st.push(currChar);
            } else if (currChar == ')') {
                while (!st.empty() && st.top() != '(') {
                    postfix += st.top();
                    st.pop();
                }
                if (!st.empty()) {
                    st.pop();
                }
            } else {
                while (!st.empty() && precedence(currChar) <= precedence(st.top())) {
                    if (st.top() == '(') {
                        break;
                    }
                    postfix += st.top();
                    st.pop();
                }
                st.push(currChar);
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
    int cntrl;
    while (true) {
        cout << "Enter the infix expression: ";
        getline(cin, infix);
        cout << "Postfix = " << infixToPostfix(infix) << endl;
        cout << "Enter 9 to Exit. Enter any number to continue" << endl;
        cin >> cntrl;
        if (cntrl == 9) {
            break;
        }
    }
    
    return 0;
}