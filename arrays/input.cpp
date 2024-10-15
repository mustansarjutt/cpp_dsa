#include <iostream>
using namespace std;

void input(int arr[], int size) {
    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }
}
void output(int arr[], int size) {
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void modif(int arr[], int size) {
    for (int i=0; i<size; i++) {
        arr[i] *= 2;
    }
}
int main() {
    int size = 10;
    int arr[size];

    cout << "Enter the elements:" << endl;
    input(arr, size);

    cout << "Elements are:" << endl;
    output(arr, size);

    modif(arr, size);

    cout << "After modification:" << endl;
    output(arr, size);
    
    return 0;
}