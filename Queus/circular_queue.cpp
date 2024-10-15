#include <iostream>
using namespace std;

class CircularQueue {
private:
    int *arr;
    int front, rear, size;
public:
    CircularQueue(int sz) {
        this->size = sz;
        arr = new int[size];
        rear = -1;
        front = -1;
    }
    ~CircularQueue() {
        delete[] arr;
    }
    bool isEmpty() {
        return rear == -1 && front == -1;
    }
    bool isFull() {
        return (rear+1) % size == front;
    }
    void enqueue(int x) {
        if (!isFull()) {
            if (front == -1) {
                front = 0;
            }
            rear = (rear+1) % size;
            arr[rear] = x;
            cout << "Successfully done" << endl;
            return;
        }
        cout << "Overflow!" << endl;
    }
    void dequeue() {
        if (!isEmpty()) {
            if (front == rear) {
                front = rear = -1;
            } else {
                front = (front+1) % size;
            }
            return;
        }
        cout << "Empty Queue!" << endl;
    }
    int peak() {
        if (!isEmpty()) {
            return arr[front];
        }
        return -1;
    }
    void display() {
        cout << "Elements are: ";
        while (!isEmpty()) {
            cout << peak() << " ";
            dequeue();
        }
        cout << endl;
    }
};

void menu() {
    cout << "----------------------------------" << endl;
    cout << "Press 1 to enqueue the element" << endl;
    cout << "Press 2 to dequeue the element" << endl;
    cout << "Press 3 to check the 1st element in the queue" << endl;
    cout << "Press 9 to Exit the programme" << endl;
    cout << "----------------------------------" << endl;
    cout << "Enter Your Choice: ";
}

int main() {
    CircularQueue q(10);
    int choice, num;
    while (true) {
        menu();
        cin >> choice;
        if (choice == 9) {
            break;
        }

        switch (choice) {
            case 1:
                cout << "Enter the Number: ";
                cin >> num;
                q.enqueue(num);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                cout << "The peak is " << q.peak() << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    }
    return 0;
}