#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] > key) {
            end = mid-1;
        }
        else {
            start = mid+1;
        }
    }
    return -1;
}

int main() {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter the numbers:" << endl;
    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the number to search: ";
    cin >> key;

     
    int result = binarySearch(arr, size, key);

    if (result > 0) {
        cout << "The number is present at " << result << " index" << endl;
    }
    else {
        cout << "Not found";
    }

    delete[] arr;
    arr = NULL;

    return 0;
}