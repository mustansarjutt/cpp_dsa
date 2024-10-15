#include <iostream>
using namespace std;

class Array
{
private:
    int totalSize = 0, usedSize = 0, copiedArraySize = 0;
    int *arrPtr = nullptr;
    int *copiedArray = nullptr;

public:
    void setTotalSize(void)
    {
        cout << "Enter the total Size: ";
        cin >> this->totalSize;
    }

    void setUseSize(void)
    {
        cout << "Enter the number of elements that you want to insert in array: ";
        cin >> this->usedSize;
    }

    void createArray(void)
    {
        this->setTotalSize();
        if (this->totalSize == 0)
        {
            cout << "Please set the total Size First" << endl;
            return;
        }
        this->arrPtr = new int[this->totalSize];
        for (int i = 0; i < this->totalSize; i++)
        {
            this->arrPtr[i] = 0;
        }
        cout << "Array of size " << this->totalSize << " is created" << endl;
    }

    void inputArray(void)
    {
        if (this->arrPtr == nullptr)
        {
            cout << "Create Array first" << endl;
            return;
        }
        this->setUseSize();
        if (this->usedSize <= this->totalSize)
        {
            cout << "Enter the elements:" << endl;
            for (int i = 0; i < usedSize; i++)
            {
                cin >> this->arrPtr[i];
            }
        }
        else
        {
            cout << "Array has no capacity to store " << usedSize << " elements" << endl;
        }
    }

    void outputArray(void)
    {
        if (this->arrPtr == nullptr)
        {
            cout << "Create Array first" << endl;
            return;
        }
        if (this->usedSize == 0)
        {
            cout << "Your Array is empty" << endl;
            return;
        }
        cout << "-----------------------" << endl;
        cout << "Elements are: ";
        for (int i = 0; i < this->usedSize; i++)
        {
            cout << this->arrPtr[i] << " ";
        }
        cout << endl
             << "-----------------------" << endl;
    }

    void copyArray()
    {
        if (this->arrPtr == nullptr)
        {
            cout << "You have not created any Array" << endl;
            return;
        }
        if (this->usedSize == 0)
        {
            cout << "You have not initialized Array" << endl;
            return;
        }
        this->copiedArraySize = this->usedSize;
        this->copiedArray = new int[this->copiedArraySize];

        for (int i = 0; i < this->copiedArraySize; i++)
        {
            this->copiedArray[i] = this->arrPtr[i];
        }
        cout << "Array is copied" << endl;
    }

    void showCopiedArray()
    {
        if (this->copiedArray == nullptr)
        {
            cout << "Copy the Array first" << endl;
            return;
        }
        if (this->copiedArraySize == 0) {
            cout << "Copied array is empty" << endl;
            return;
        }
        cout << "-----------------------" << endl;
        cout << "Elements in copied Array are: ";
        for (int i = 0; i < this->copiedArraySize; i++)
        {
            cout << this->copiedArray[i] << " ";
        }
        cout << endl
             << "-----------------------" << endl;
    }

    void removeElements()
    {
        delete[] this->arrPtr;
        this->totalSize = 0;
        this->usedSize = 0;

        cout << "All elements are removed successfully" << endl;
    }

    void removeCopy()
    {
        delete[] this->copiedArray;
        this->copiedArraySize = 0;

        cout << "Copied Array deleted" << endl;
    }

    void getElement(void)
    {
        int index;
        cout << "Enter the index: ";
        cin >> index;

        if (index < this->usedSize && index >= 0)
        {
            cout << "Element at " << index << " index is " << this->arrPtr[index] << endl;
        }
        else
        {
            cout << "This index does not exist" << endl;
        }
    }

    void update(void)
    {
        int element, index;
        cout << "Enter the element: ";
        cin >> element;
        cout << "Enter the index: ";
        cin >> index;

        if (index < this->usedSize && index >= 0)
        {
            this->arrPtr[index] = element;
            cout << "Element is updated" << endl;
        }
        else
        {
            cout << "This index does not exist" << endl;
        }
    }

    void insert(int num, int index)
    {
        if (this->arrPtr == nullptr) {
            cout << "Array is not created yet" << endl;
            return;
        }

        if (index < 0 || index > this->usedSize)
        {
            cout << "Invalid index" << endl;
            return;
        }
        if (this->usedSize < this->totalSize) {
            for (int i = this->usedSize; i > index; i--)
            {
                this->arrPtr[i] = this->arrPtr[i-1];
            }
            this->usedSize++;
        } else {
            cout << "Can't insert. The array is full" << endl;
            return;
        }

        this->arrPtr[index] = num;

        cout << "Element is inserted successfully" << endl;
    }

    void delElement(int index) {
        if (index >= this->usedSize) {
            cout << "Index does not exist" << endl;
            return;
        }

        this->arrPtr[index] = 0;

        for(int i=index; i < this->usedSize; i++) {
            this->arrPtr[i] = this->arrPtr[i+1];
        }

        this->usedSize--;
        cout << "Element at " << index << " index is removed" << endl;
    }

    bool checkElement(int element)
    {
        bool check = false;
        for (int i = 0; i < this->usedSize; i++)
        {
            if (element == this->arrPtr[i])
            {
                check = true;
                break;
            }
        }

        return check;
    }

    void checkLength()
    {
        cout << "Total length of array is: " << this->usedSize << endl;
    }

    ~Array()
    {
        delete[] arrPtr;
        delete[] copiedArray;
    }
};

void menu(void)
{
    cout << endl;
    cout << "-----------------------------" << endl;
    cout << "Select any operation on Array" << endl;
    cout << "Press 1 to create an Array" << endl;
    cout << "Press 2 to input the Array" << endl;
    cout << "Press 3 to output the Array" << endl;
    cout << "Press 4 to copy the Array" << endl;
    cout << "Press 5 to display the copied Array" << endl;
    cout << "Press 6 to remove all elements from Array" << endl;
    cout << "Press 7 to remove all elements from copied Array" << endl;
    cout << "Press 8 to insert element in the Array" << endl;
    cout << "Press 9 to remove element at some position in the array" << endl;
    cout << "Press 10 to get the element at the given position in the array" << endl;
    cout << "Press 11 to update the element at given position" << endl;
    cout << "Press 12 to check the element in the list" << endl;
    cout << "Press 13 to check the length of array" << endl;
    cout << "Press 99 to exit the program" << endl;
    cout << "-----------------------------" << endl;
}

int main()
{
    Array *myArray = new Array();
    int choice, num, index;
    do
    {
        menu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            myArray->createArray();
            break;
        case 2:
            myArray->inputArray();
            break;
        case 3:
            myArray->outputArray();
            break;
        case 4:
            myArray->copyArray();
            break;
        case 5:
            myArray->showCopiedArray();
            break;
        case 6:
            myArray->removeElements();
            break;
        case 7:
            myArray->removeCopy();
            break;
        case 8:
            cout << "Enter the number: ";
            cin >> num;
            cout << "Enter the index: ";
            cin >> index;

            myArray->insert(num, index);
            break;
        case 9:
            cout << "Enter the index: ";
            cin >> index;

            myArray->delElement(index);
            break;
        case 10:
            myArray->getElement();
            break;
        case 11:
            myArray->update();
            break;
        case 12:
            int element;
            cout << "Enter the element: ";
            cin >> element;

            if (myArray->checkElement(element))
            {
                cout << element << " element pesent in the array" << endl;
            }
            else
            {
                cout << "Not found in the array" << endl;
            }

            break;
        case 13:
            myArray->checkLength();
            break;
        case 99:
            break;
        default:
            cout << "Please Select Valid Option" << endl;
        }
    } while (choice != 99);

    delete myArray;
    myArray = nullptr;
    return 0;
}