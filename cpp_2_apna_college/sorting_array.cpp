#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter the elements in array:" << endl;
    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }

    for (int i=0; i<size-1; i++) {
        for (int j=i+1; j<size; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    arr = NULL;

    return 0;
}