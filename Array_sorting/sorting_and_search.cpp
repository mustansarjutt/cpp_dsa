#include <iostream>
using namespace std;

int *createArray(int sz) {
    int *arr = new int[sz];
    for (int i=0; i<sz; i++) {
        arr[i] = 0;
    }
    return arr;
}
void input(int *arr, int sz) {
    for (int i=0; i<sz; i++) {
        cin >> arr[i];
    }
}
void output(int *arr, int sz) {
    cout << endl << "-----------------------" << endl;
    for (int i=0; i<sz; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << "-----------------------" << endl;
}
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int *copyArray(int *orignalArray, int sz) {
    int *copiedArray = new int[sz];

    for (int i=0; i<sz; i++) {
        copiedArray[i] = orignalArray[i];
    }
    return copiedArray;
}
int *insertionSort(int *arr, int sz) {
    int *sortedArray = copyArray(arr, sz);
    int key, j;
    for (int i=1; i<sz; i++) {
        key = sortedArray[i];
        j = i-1;
        while (sortedArray[j]>key && j>=0) {
            sortedArray[j+1] = sortedArray[j];
            j--;
        }
        sortedArray[j+1] = key;
    }
    return sortedArray;
}
int *selectionSort(int *arr, int sz) {
    int *sortedArray = copyArray(arr, sz);
    for (int i=0; i<sz-1; i++) {
        int indexOfMin = i;
        for (int j=i+1; j<sz; j++) {
            if (sortedArray[j] < sortedArray[indexOfMin]) {
                indexOfMin = j;
            }
        }
        swap(sortedArray[i], sortedArray[indexOfMin]);
    }
    return sortedArray;
}
int *bubbleSort(int *arr, int sz) {
    int *copiedArray = copyArray(arr, sz);
    int counter = 1;
    while (counter < sz) {
        for (int i=0; i<sz-counter; i++) {
            if (copiedArray[i] > copiedArray[i+1]) {
                swap(copiedArray[i], copiedArray[i+1]);
            }
        }
        counter++;
    }
    return copiedArray;
}
int binarySearch(int *arr, int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Target found at index mid
        }

        if (arr[mid] < target) {
            left = mid + 1; // Ignore the left half
        } else {
            right = mid - 1; // Ignore the right half
        }
    }

    return -1; // Target not found
}
void menu() {
    cout << "-----------------------" << endl;
    cout << "1. Create array" << endl;
    cout << "2. Input array" << endl;
    cout << "3. Output array" << endl;
    cout << "4. Output sorted array" << endl;
    cout << "5. Insertion sort" << endl;
    cout << "6. Selection sort" << endl;
    cout << "7. Bubble sort" << endl;
    cout << "8. Binary search" << endl;
    cout << "9. Delete array" << endl;
    cout << "99. Quit the program" << endl;
    cout << "-----------------------" << endl;
    cout << "Enter you choice: ";
}
void intro() {
    cout << "==================" << endl;
    cout << "Student info" << endl;
    cout << "Mustansar Hussain" << endl;
    cout << "Roll No: 1071" << endl;
    cout << "BS-IT 3rd Semester" << endl;
    cout << "==================" << endl;
}

int main() {
    int choice, size, number, *arr = nullptr, *sorted = nullptr;
    bool isCreated = false, isInput = false, isSorted = false;
    intro();
    while (true) {
        menu();
        cin >> choice;

        if (choice == 99) {
            break;
        }
        switch (choice) {
            case 1:
                if (!isCreated) {
                    cout << "Enter the size of array: ";
                    cin >> size;
                    arr = createArray(size);
                    cout << "Array is created successfully" << endl;
                    isCreated = true;
                } else {
                    cout << "You already have created array" << endl;
                }
                break;
            case 2:
                if (isCreated) {
                    cout << "Enter the elements: ";
                    input(arr, size);
                    isInput = true;
                } else {
                    cout << "To input first create array" << endl;
                }
                break;
            case 3:
                if (isCreated) {
                    if (isInput) {
                        cout << "Elements are: ";
                        output(arr, size);
                    } else {
                        cout << "First input the elements" << endl;
                    }
                } else {
                    cout << "First create array" << endl;
                }
                break;
            case 4:
                if (isCreated) {
                    if (isInput) {
                        if (isSorted) {
                            cout << "Elements in sorted array are: " << endl;
                            output(sorted, size);
                        } else {
                            cout << "You have not run any sorted algorithm" << endl;
                        }
                    } else {
                        cout << "To sort first input array" << endl;
                    }
                } else {
                    cout << "You have not created any array yet" << endl;
                }
                break;
            case 5:
                if (isCreated) {
                    if (isInput) {
                        if (!isSorted) {
                            sorted = insertionSort(arr, size);
                            cout << "Array sorted using insertion sort" << endl;
                            isSorted = true;
                        } else {
                            cout << "Array is already sorted" << endl;
                        }
                    } else {
                        cout << "To sort first input the array elements" << endl;
                    }
                } else {
                    cout << "To sort firt create array and then input" << endl;
                }
                break;
            case 6:
                if (isCreated) {
                    if (isInput) {
                        if (!isSorted) {
                            sorted = selectionSort(arr, size);
                            cout << "Array sorted using insertion sort" << endl;
                            isSorted = true;
                        } else {
                            cout << "Array is already sorted" << endl;
                        }
                    } else {
                        cout << "To sort first input the array elements" << endl;
                    }
                } else {
                    cout << "To sort firt create array and then input" << endl;
                }
                break;
            case 7:
                if (isCreated) {
                    if (isInput) {
                        if (!isSorted) {
                            sorted = bubbleSort(arr, size);
                            cout << "Array sorted using insertion sort" << endl;
                            isSorted = true;
                        } else {
                            cout << "Array is already sorted" << endl;
                        }
                    } else {
                        cout << "To sort first input the array elements" << endl;
                    }
                } else {
                    cout << "To sort firt create array and then input" << endl;
                }
                break;
            case 8:
                if (isCreated) {
                    if (isInput) {
                        if (isSorted) {
                            cout << "Enter the number to search (using binary search): ";
                            cin >> number;
                            int result = binarySearch(sorted, size, number);
                            if (result == -1) {
                                cout << "Number not founded" << endl;
                            } else {
                                cout << number << " is present at index " << result << endl;
                            }
                        } else {
                            cout << "Sorting of array is compulsory so sort the array first" << endl;
                        }
                    } else {
                        cout << "Please input the array first" << endl;
                    }
                } else {
                    cout << "Create array first!" << endl;
                }
                break;
            case 9:
                delete[] arr;
                delete[] sorted;
                arr = nullptr;
                sorted = nullptr;
                isCreated = false;
                isInput = false;
                isSorted = false;
                cout << "Array is deleted" << endl;
                break;
            default:
                cout << "Invalid option!" << endl;
        }
    }
    if (isCreated) {
        delete[] arr;
        arr = nullptr;
    }
    if (isSorted) {
        delete[] sorted;
        sorted = nullptr;
    }
    return 0;
}