#include <iostream>
using namespace std;

int *createDynamicArray(int sz) {
    int *arr = new int[5];
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
void selectionSort(int *arr, int sz) {
    for (int i=0; i<sz-1; i++) {
        int indexOfMin = i;
        for (int j=i+1; j<sz; j++) {
            if (arr[j] < arr[indexOfMin]) {
                indexOfMin = j;
            }
        }
        swap(arr[i], arr[indexOfMin]);
    }
}

int main() {
    int size = 10;
    int *arr = createDynamicArray(size);
    
    cout << "Enter the elements:" << endl;
    input(arr, size);
    cout << "Array before sorting: ";
    output(arr, size);
    selectionSort(arr, size);
    cout << "Array after sorting: ";
    output(arr, size);

    delete[] arr;
    arr = nullptr;
    return 0;
}