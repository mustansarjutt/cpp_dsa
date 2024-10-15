#include<iostream>
using namespace std;
// struct used to make custom datatypes
struct myArray {
    int totalSize;
    int usedSize;
    int *ptr;
};
void createArray(myArray* a, int tSize, int useSize) {
    a->totalSize = tSize;
    a->usedSize = useSize;
    a->ptr = (int*)malloc(tSize * sizeof(int));
    // this is equallent to upper
    // a->ptr = new int[tSize];
}
void show(myArray *a) {
    cout << "Elements in array are:" << endl;
    for (int i=0; i<a->usedSize; i++) {
        cout << a->ptr[i] << " ";
    }
}
void setVal(myArray* a) {
    for (int i=0; i<a->usedSize; i++) {
        cout << "Enter the " << i << " elements: ";
        cin >> a->ptr[i];
    }
}
int main() {
    myArray marks;
    createArray(&marks, 10, 3);
    setVal(&marks);
    show(&marks);
    return 0;
}