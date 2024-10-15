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
            cout << "Successfully done!" << endl;
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
    void currentQueue();
    int usedSize();
};
void CircularQueue::currentQueue() {
    cout << "---------------------" << endl;
    cout << "Total size = " << this->size << endl;
    cout << "Used size = " << this->usedSize() << endl;
    cout << "Available space = " << (this->size - this->usedSize()) << endl;
    cout << "---------------------" << endl;
}
int CircularQueue::usedSize() {
    if (isEmpty()) {
        return 0;
    } else if (front <= rear) {
        return rear - front + 1;
    } else {
        return size - front + rear + 1;
    }
}
void menu() {
    cout << "----------------------------------" << endl;
    cout << "Press 1 to enqueue the element" << endl;
    cout << "Press 2 to dequeue the element" << endl;
    cout << "Press 3 to check the 1st element of queue" << endl;
    cout << "Press 4 to check whether queue is full or not" << endl;
    cout << "Press 5 to check whether queue is empty or not" << endl;
    cout << "Press 6 to check the current condition of queue" << endl;
    cout << "Press 9 to Exit the programme" << endl;
    cout << "----------------------------------" << endl;
    cout << "Enter Your Choice: ";
}
void intro();
int main() {
    intro();
    CircularQueue q(10);
    int choice, num;

    while(true) {
        menu();
        cin >> choice;

        if (choice == 9) {
            break;
        }

        switch(choice) {
            case 1:
                cout << "Enter the number: ";
                cin >> num;
                q.enqueue(num);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                if (!q.isEmpty()) {
                    cout << "The peak is " << q.peak() << endl;
                } else {
                    cout << "Queue is empty" << endl;
                }
                break;
            case 4:
                if (!q.isFull()) {
                    cout << "Queue is not full" << endl;
                } else {
                    cout << "Queue is full!" << endl;
                }
                break;
            case 5:
                if (!q.isEmpty()) {
                    cout << "Queue is not empty" << endl;
                } else {
                    cout << "Queue is empty!" << endl;
                }
                break;
            case 6:
                q.currentQueue();
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
void intro() {
    cout << "==================" << endl;
    cout << "Student info" << endl;
    cout << "Mustansar Hussain" << endl;
    cout << "Roll No: 1071" << endl;
    cout << "BS-IT 3rd Semester" << endl;
    cout << "==================" << endl;
}