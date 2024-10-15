#include <iostream>
using namespace std;

int *createArray(int sz) {
    int *arr = new int[sz];
    for (int i=0; i<sz; i++) {
        arr[i] = 0;
    }
    return arr;
}
void input(int *arr, int sz) {
    for (int i=0; i<sz; i++) {
        cin >> arr[i];
    }
}
void output(int *arr, int sz) {
    for (int i=0; i<sz; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void insertionSort(int *arr, int sz) {
    for (int i=1; i<sz; i++) {
        int crr = arr[i];
        int j = i-1;
        while (arr[j]>crr && j>=0) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = crr;
    }
}
void bubbleSort(int *arr, int sz) {
    int counter = 1;
    while (counter < sz) {
        for (int i=0; i<sz-counter; i++) {
            if (arr[i] > arr[i+1]) {
                swap(arr[i], arr[i+1]);
            }
        }
        counter++;
    }
}

int main() {
    int size = 5;
    int *arr = createArray(size);
    cout << "Input array:" << endl;
    input(arr, size);
    cout << "Elements: ";
    output(arr, size);
    bubbleSort(arr, size);
    cout << "Sorted Array: ";
    output(arr, size);

    delete[] arr;
    return 0;
}