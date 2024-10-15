#include <iostream>
using namespace std;

bool isEmpty(int &rear, int &front) {
    return rear == -1 && front == -1;
}
bool isFull(int &size, int &rear, int &front) {
    return (rear+1) % size == front;
}
void enqueue(int *arr, int &front, int &rear, int &size) {
    if (!isFull(size, rear, front)) {
        
    }
}
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

    
    return 0;
}