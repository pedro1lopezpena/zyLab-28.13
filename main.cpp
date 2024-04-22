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

	cout << "Item 1" << endl;
	cout << "Enter the item name:" << endl;
	getline(cin, item1_name);
	item1.SetName(item1_name);

	cout << "Enter the item price:" << endl;
	cin >> item1_price;
	item1.SetPrice(item1_price);

	cout << "Enter the item quantity:" << endl;
	cin >> item1_quantity;
	item1.SetQuantity(item1_quantity);

	cout << endl;
	cin.ignore();

	cout << "Item 2" << endl;
	cout << "Enter the item name:" << endl;
	getline(cin, item2_name);
	item2.SetName(item2_name);

	cout << "Enter the item price:" << endl;
	cin >> item2_price;
	item2.SetPrice(item2_price);

	cout << "Enter the item quantity:" << endl;
	cin >> item2_quantity;
	item2.SetQuantity(item2_quantity);

	cout << endl << "TOTAL COST" << endl;
	cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << item1.GetPrice() * item1.GetQuantity() << endl;
	cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << item2.GetPrice() * item2.GetQuantity() << endl << endl;
	cout << "Total: $" << (item1.GetPrice() * item1.GetQuantity()) + (item2.GetPrice() * item2.GetQuantity()) << endl;
  
  return 0;
}
