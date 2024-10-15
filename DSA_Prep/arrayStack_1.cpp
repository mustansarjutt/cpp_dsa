#include <iostream>
using namespace std;

#define n 10 // macroo

class Stack
{
    int *arr;
    int topVar;

public:
    Stack()
    {
        arr = new int[n];
        topVar = -1;
    }

    void push(int x)
    {
        if (topVar == n - 1)
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
            cout << "No element in statck" << endl;
            return -1;
        }
        return arr[topVar];
    }

    bool isEmpty() {
        return topVar == -1;
    }

    ~Stack() {
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