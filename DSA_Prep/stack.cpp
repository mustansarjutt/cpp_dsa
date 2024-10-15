#include <iostream>
using namespace std;

#define size 10

class Stack {
    int topIndex;
    int *arr;;
public:
    Stack() {
        topIndex = -1;
        arr = new int[size];
    }
    void push(int x) {
        if (topIndex == size - 1) {
            cout << "Stack overflow" << endl;
            return;
        }
        topIndex++;
        arr[topIndex] = x;
    }
    void pop() {
        if(isEmpty()) {
            cout << "\nStack is empty, no element can be POP" << endl;
            return;
        }

        topIndex--;
    }
    int top() {
        if(isEmpty()) {
            cout << "\nStack is empty, no top element" << endl;
            return -1;
        }

        return arr[topIndex];
    }
    bool isEmpty() {
        return topIndex == -1;
    }
    ~Stack() {
        delete[] arr;
    }
};

int main() {
    Stack st;
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    for (int i=0; i < 6; i++) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}