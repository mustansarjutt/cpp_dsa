#include<iostream>
using namespace std;

void display(int[], int);
void insertion(int[], int, int ,int, int);
int main() {
    int arr[50] = {1, 2, 3, 4, 5};
    display(arr, 5);
    insertion(arr, 5, 10, 50, 3);
    display(arr, 6);
    return 0;
}
void display(int arr[], int size) {
    for (int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    cout << endl;
}
void insertion(int arr[], int size, int element, int capacity, int index) {
    if(size >= capacity) {
        cout << "Array is full" << endl;
    }
    else {
        for (int i = size-1; i >= index; i--) {
            arr[i+1] = arr[i];
        }
        arr[index] = element;
    }
}