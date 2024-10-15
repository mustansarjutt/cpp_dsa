#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i=0; i<size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
};

int main() {
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    
    int* arr = new int[n];

    cout << "Enter the elements in array:" << endl;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the number to search: ";
    cin >> key;

    int index = linearSearch(arr, n, key);

    if (index > 0) {
        cout << "Number is present at " << index << " index" << endl;
    }
    else {
        cout << "Element not found" << endl;
    }

    delete[] arr;
    arr = NULL;
    
    return 0;
}