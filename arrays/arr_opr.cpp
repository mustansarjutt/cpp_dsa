#include <iostream>
using namespace std;

void input(int *arr, int size) {
    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }
}
void output(int *arr, int size) {
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size = 10;
    int *arr = new int[size];
    
    cout << "Enter the elements:" << endl;
    input(arr, size);
    cout << "Elements are:" << endl;
    output(arr, size);

    delete[] arr;
    arr = nullptr;
    return 0;
}