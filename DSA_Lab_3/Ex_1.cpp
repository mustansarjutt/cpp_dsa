#include <iostream>
using namespace std;

#define size 25

class Stack {
    int *array;
    int ptr;

public:
    Stack() {
        array = new int[size];
        ptr = -1;
    }
    void push(int x) {
        if (isFull()) {
            cout << "Stack is Full. Can't push any element" << endl;
            return;
        }
        ptr++;
        array[ptr] = x;
    }
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Can't POP" << endl;
            return;
        }
        ptr--;
        cout << "POP done successfuly" << endl;
    }
    int top() {
        if (!isEmpty()) {
            return array[ptr];
        }
        return -1;
    }
    bool isFull() {
        return (ptr == size-1);
    }
    bool isEmpty() {
        return (ptr == -1);
    }
    void crrSit() {
        cout << "----------------------------------" << endl;
        cout << "Total size of Stack = " << size << endl;
        cout << "Current elements in Stack = " << ptr+1 << endl;
        cout << "Available space in Stack = " << size - (ptr+1) << endl;
        cout << "----------------------------------" << endl;
    }
    ~Stack() {
        delete[] array;
    }
};

void menu() {
    cout << "----------------------------------" << endl;
    cout << "Press 1 to push" << endl;
    cout << "Press 2 to pop" << endl;
    cout << "Press 3 to check the top most element in stack" << endl;
    cout << "Press 4 to check that wheather Stack is full or not" << endl;
    cout << "Press 5 to check that wheather Stack is empty or not" << endl;
    cout << "Press 6 to check the current condition of stack" << endl;
    cout << "Press 9 to quit the program" << endl;
    cout << "----------------------------------" << endl;
    cout << "Enter your choice: ";
}

int main() {
    Stack *st = new Stack();
    int choice, element;

    do {
        menu();
        cin >> choice;

        if (choice == 9) {
            break;
        }

        switch(choice) {
            case 1:
                cout << "Enter the element: ";
                cin >> element;
                st->push(element);
                break;
            case 2:
                st->pop();
                break;
            case 3:
                if (st->top() != -1) {
                    cout << "Top most element is " << st->top() << endl;
                } else {
                    cout << "Stack is Empty" << endl;
                }
                break;
            case 4:
                if (st->isFull()) {
                    cout << "Stack is Full" << endl;
                } else {
                    cout << "Stack is not Full" << endl;
                }
                break;
            case 5:
                if (st->isEmpty()) {
                    cout << "Stack is empty" << endl;
                } else {
                    cout << "Stack is not empty" << endl;
                }
                break;
            case 6:
                st->crrSit();
                break;
            default:
                cout << "Invalid option selected" << endl;

        }
    } while(choice != 9);

    delete st;
    st = nullptr;
    system("pause");
    return 0;
}