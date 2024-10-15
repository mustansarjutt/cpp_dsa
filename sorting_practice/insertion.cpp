#include <iostream>
using namespace std;

void input(int*, int);
void output(int*, int);
void insertionSort(int *array, int size) {
    int key, j;
    for (int i=1; i<size; i++) {
        key = array[i]; // just for storing value
        j = i-1;

        while (array[j]>key && j>=0) {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
}
int main() {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int *array = new int[size];
    cout << "Enter the elements: ";
    input(array, size);
    cout << "Elements are: ";
    output(array, size);

    insertionSort(array, size);
    cout << "Array after sorting: ";
    output(array, size);

    delete[] array;
    array = nullptr;
    return 0;
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