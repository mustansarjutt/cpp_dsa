#include <iostream>
using namespace std;

int *createArray(int sz, int element) {
    int *arr = new int[sz];
    for (int i=0; i<sz; i++) {
        arr[i] = element;
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
void insertionSort(int *arr, int sz) {
    int key, j;
    // loop for passes
    for (int i=1; i<sz; i++) {
        key = arr[i]; // use for storing the value
        j = i-1;
        // loop for each pass
        while (arr[j]>key && j>=0) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
    int size = 5;
    int *array = createArray(5, 1);
    output(array, size);
    cout << "Enter the elements:" << endl;
    input(array, size);
    cout << "Array before sorrting: ";
    output(array, size);
    cout << "Array after sorting: ";
    insertionSort(array, size);
    output(array, size);

    delete[] array;
    return 0;
}