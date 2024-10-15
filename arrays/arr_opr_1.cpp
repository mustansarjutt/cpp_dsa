#include <iostream>
using namespace std;

void input(int arr[5]) {
    for (int i=0; i<5; i++) {
        cin >> arr[i];
    }
}
void output(int arr[5]) {
    for (int i=0; i<5; i++) {
        cout << arr[i];
    }
}

int main() {
    int arr[5];
    input(arr);
    output(arr);
    return 0;
}