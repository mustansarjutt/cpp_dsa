#include<iostream>
using namespace std;

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void update(int* a, int i) {
    *a += i;
}

int main() {
    int a = 10;
    int b = 20;
    // it will not swap
    swap(a, b);
    cout << a << " " << b << endl;
    // now it will swap
    swap(&a, &b);
    cout << a << " " << b << endl;
    update(&a, 1);
    cout << a << endl;
    update(&b, 5);
    cout << b << endl;
    return 0;
}