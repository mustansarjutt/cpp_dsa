#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void input(int *arr, int size) {
    int i=0;
    while (i<size) {
        cin >> arr[i];
        i++;
    }
}
void output(int *arr, int size) {
    int i=0;
    while (i<size) {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}
void selectionSort(int *arr, int size) {
    for (int i=0; i<size-1; i++) {
        int indexOfMin = i;
        for (int j=i+1; j<size; j++) {
            if (arr[indexOfMin] > arr[j]) {
                indexOfMin = j;
            }
        }
        swap(arr[i], arr[indexOfMin]);
    }
}
int main() {
    int size;
    cout << "Enter the size for array: ";
    cin >> size;
    int *arr = new int[size];
    cout << "Enter the elements:" << endl;
    input(arr, size);
    cout << "Elements are:" << endl;
    output(arr, size);
    selectionSort(arr, size);
    cout << "After sorting:" << endl;
    output(arr, size);
    delete[] arr;
    arr = nullptr;
    return 0;
}