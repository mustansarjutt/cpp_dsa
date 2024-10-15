#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Stack {
    int ptr, size;
    char *arr;
public:
    Stack() {
        this->size = MAX_SIZE;
        arr = new char[size];
        ptr = -1;
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
    ~Stack() {
        delete[] arr;
    }
};

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

bool isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '/' || ch == '*' || ch == '(' || ch == ')');
}

string infixToPostfix(string infix) {
    Stack st;
    string postfix = "";
    int len = infix.length();

    for (int i=0; i < len; i++) {
        char currentChar = infix.at(i);
        if (!isOperator(currentChar)) {
            postfix += currentChar;
        } else {
            if (currentChar == '(') {
                st.push(currentChar);
            } else if (currentChar == ')') {
                while (!st.isEmpty() && st.top() != '(') {
                    postfix += st.top();
                    st.pop();
                }
                if (!st.isEmpty()) {
                    st.pop();
                }
            } else {
                while (!st.isEmpty() && precedence(currentChar) <= precedence(st.top())) {
                    if (st.top() == '(') {
                        break;
                    }
                    postfix += st.top();
                    st.pop();
                }
                st.push(currentChar);
            }
        }
    }

    while (!st.isEmpty()) {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

void menu() {
    cout << "----------------------------------------" << endl;
    cout << "Press 1 to Infix to Postfix conversion" << endl;
    cout << "Press 2 to evaluate the infix expression" << endl;
    cout << "Press 9 to exit the programme" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Enter your choice: ";
}

int main() {
    string infix;
    int choice;

    while (true) {
        menu();
        cin >> choice;

        if (choice == 9) {
            break;
        }

        switch (choice) {
            case 1:
                cout << "Enter the Infix expression: ";
                cin >> infix;
                cout << "Postfix of " << infix << " is " << infixToPostfix(infix) << endl;
                break;
            case 2:
                cout << "Comming soon" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    }
    
    return 0;
}