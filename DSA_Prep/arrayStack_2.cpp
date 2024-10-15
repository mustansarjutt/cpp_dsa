#include <iostream>
using namespace std;

#define MAX_SIZE 10 // Define maximum size of the stack

class Stack
{
    int *arr;
    int topVar;
    int size;

public:
    Stack()
    {
        size = MAX_SIZE;
        arr = new int[size];
        topVar = -1;
    }

    void push(int x)
    {
        if (topVar == size - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        topVar++;
        arr[topVar] = x;
    }

    void pop()
    {
        if (topVar == -1)
        {
            cout << "No element to pop" << endl;
            return;
        }

        topVar--;
    }

    int top()
    {
        if (topVar == -1)
        {
            cout << "No element in stack" << endl;
            return -1;
        }
        return arr[topVar];
    }

    bool isEmpty()
    {
        return topVar == -1;
    }

    ~Stack()
    {
        delete[] arr;
    }
};

int main()
{
    Stack *st = new Stack();
    st->push(1);
    st->push(3);
    st->push(5);
    st->push(7);

    cout << "Top = " << st->top() << endl;

    delete st;
    st = nullptr;
    return 0;
}