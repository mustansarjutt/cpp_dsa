#include <iostream>
using namespace std;

int *createArray(int size)
{
    int *array = new int[size];
    return array;
}

void input(int *arr, int size) {
    cout << "Enter the Elements:" << endl;
    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }
}

void output(int *arr, int size) {
    cout << "Element in array are: ";
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int *copyArray(int* arr, int size) {
    int* copyArr = new int[size];
    for (int i=0; i<size; i++) {
        copyArr[i] = arr[i];
    }

    return copyArr;
}

void remove(int *arr, int* size) {
    delete[] arr;
    *size = 0;
}

void insert(int *arr, int* size, int num, int index) {
    if (index < 0 || index > *size) {
        cout << "Invalid index" << endl;
        return;
    }
    (*size)++;
    for (int i=*size-1; i>index; i--) {
        arr[i] = arr[i-1];
    }

    arr[index] = num;
}

void option() {
    cout << "Press 1 to create the Array" << endl;
    cout << "Press 2 input the Array" << endl;
    cout << "Press 3 display the Array" << endl;
    cout << "Press 4 to copy the Array" << endl;
    cout << "Press 5 to create the Array" << endl;
}

int main()
{
    int size, choice;
    cout << "Enter the size of array: ";
    cin >> size;

    

    return 0;
}