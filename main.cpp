#include <iostream>
using namespace std;

//update from Pinzonnn 
//will m
int main(){

  ItemToPurchase item1;
	ItemToPurchase item2;

	string item1_name;
	string item2_name;

	int item1_price;
	int item2_price;

	int item1_quantity;
	int item2_quantity;
//We ask for the name of Item 1

	cout << "Item 1" << endl;
	cout << "Enter the item name:" << endl;
	getline(cin, item1_name);
	item1.SetName(item1_name);
//We enter the price to item 1 
	cout << "Enter the item price:" << endl;
	cin >> item1_price;
	item1.SetPrice(item1_price);
//We enter the item quantity for item 1
	
	cout << "Enter the item quantity:" << endl;
	cin >> item1_quantity;
	item1.SetQuantity(item1_quantity);

	cout << endl;
	cin.ignore();
//We ask for the name of the item2
	
	cout << "Item 2" << endl;
	cout << "Enter the item name:" << endl;
	getline(cin, item2_name);
	item2.SetName(item2_name);
// We ask for the item2 price
	cout << "Enter the item price:" << endl;
	cin >> item2_price;
	item2.SetPrice(item2_price);
// We ask to input the item2 quantity
	cout << "Enter the item quantity:" << endl;
	cin >> item2_quantity;
	item2.SetQuantity(item2_quantity);
//Then after we gather all of the info for item 1 and item 2 we output the total cost of the items
	cout << endl << "TOTAL COST" << endl;
	cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << item1.GetPrice() * item1.GetQuantity() << endl;
	cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << item2.GetPrice() * item2.GetQuantity() << endl << endl;
	cout << "Total: $" << (item1.GetPrice() * item1.GetQuantity()) + (item2.GetPrice() * item2.GetQuantity()) << endl;
  
  return 0;
}
