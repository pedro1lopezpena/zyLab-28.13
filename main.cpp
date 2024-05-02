#include <iostream>
#include "ItemToPurchase.h"

using namespace std;

int main() {
    ItemToPurchase item1, item2;
    string itemName;
    int itemPrice, itemQuantity;


    cout << "Item 1" << endl;
    cout << "Enter the item name:" << endl;
    getline(cin, itemName);
    item1.SetName(itemName);

    cout << "Enter the item price:" << endl;
    cin >> itemPrice;
    item1.SetPrice(itemPrice);

    cout << "Enter the item quantity:" << endl << endl;
    cin >> itemQuantity;
    item1.SetQuantity(itemQuantity);

    cin.ignore();  

    // Get details for Item 2
    cout << "Item 2" << endl;
    cout << "Enter the item name:" << endl;
    getline(cin, itemName);
    item2.SetName(itemName);

    cout << "Enter the item price:" << endl;
    cin >> itemPrice;
    item2.SetPrice(itemPrice);

    cout << "Enter the item quantity:" << endl << endl;
    cin >> itemQuantity;
    item2.SetQuantity(itemQuantity);

    cout << "TOTAL COST" << endl;
    cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << item1.GetQuantity() * item1.GetPrice() << endl;
    cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << item2.GetQuantity() * item2.GetPrice() << endl << endl;

    int totalCost = (item1.GetQuantity() * item1.GetPrice()) + (item2.GetQuantity() * item2.GetPrice());
    cout << "Total: $" << totalCost << endl;

    return 0;
}
