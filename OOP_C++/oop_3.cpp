#include <iostream>
using namespace std;

class Shop
{
private:
    int itemId[50];
    int itemPrice[50];
    int counter;

public:
    void initCounter()
    {
        counter = 0;
    }
    void setPrice();
    void displayPrice()
    {
        for (int i = 0; i < counter; i++)
        {
            cout << "The Price of item with ID " << itemId[i] << " is " << itemPrice[i] << endl;
        }
    }
};

void Shop ::setPrice()
{
    cout << "Enter the Id of your item " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter the price of your item " << counter + 1 << endl;
    cin >> itemPrice[counter];
    counter++;
}

int main()
{
    Shop* dukan = new Shop();
    dukan->initCounter();
    int num;
    cout << "Enter the number of items you want to add the shop: ";
    cin >> num;
    for (int i=0; i < num; i++)
    {
        dukan->setPrice();
    }
    dukan->displayPrice();
    delete dukan;
    dukan = nullptr;
    return 0;
}