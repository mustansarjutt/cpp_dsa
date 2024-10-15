#include <iostream>
using namespace std;

#define SIZE 30

class Queue {
private:
    int *arr;
    int size, rear = -1;

public:
    Queue() {
        this->size = SIZE;
        arr = new int[size];
    }
    bool isEmpty() {
        return rear == -1;
    }
    bool isFull() {
        return rear == size-1;
    }
    // enqueue
    void add(int x) {
        if (!isFull()) {
            rear++;
            arr[rear] = x;
            return;
        }
        cout << "Queue is full!" << endl;
    }
    void remove() {
        if (!isEmpty()) {
            // int fornt = arr[0];
            for (int i=0; i < rear; i++) {
                arr[i] = arr[i+1];
            }
            rear--;
            return;
        }
        cout << "Queue is empty!" << endl;
    }
    int peak() {
        if (!isEmpty()) {
            return arr[0];
        }
        return -1;
    }
};

int main() {
    Queue q;

    q.add(1);
    q.add(2);
    q.add(3);
    q.add(4);

    while(!q.isEmpty()) {
        cout << q.peak() << " ";
        q.remove();
    }

    cout << endl;
    
    return 0;
}