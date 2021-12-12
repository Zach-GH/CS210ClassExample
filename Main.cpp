#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {

	/* Type your code here */
	ItemToPurchase ItemOne;
	ItemToPurchase ItemTwo;
	string name;
	int price;
	int quantity;

	cout << "Item 1" << endl;
	cout << "Enter the item name:" << endl;
	getline(cin, name);
	ItemOne.SetName(name);
	cout << ItemOne.GetName() << endl;
	cout << "Enter the item price:" << endl;
	cin >> price;
	ItemOne.SetPrice(price);
	cout << ItemOne.GetPrice() << endl;
	cout << "Enter the item quantity:" << endl;
	cin >> quantity;
	ItemOne.SetQuantity(quantity);
	cout << ItemOne.GetQuantity() << endl;


	cout << "\nItem 2" << endl;
	cout << "Enter the item name:" << endl;
	cin.ignore();
	getline(cin, name);
	ItemTwo.SetName(name);
	cout << ItemTwo.GetName() << endl;
	cout << "Enter the item price:" << endl;
	cin >> price;
	ItemTwo.SetPrice(price);
	cout << ItemTwo.GetPrice() << endl;
	cout << "Enter the item quantity:" << endl;
	cin >> quantity;
	ItemTwo.SetQuantity(quantity);
	cout << ItemTwo.GetQuantity() << endl;

	cout << "\nTOTAL COST" << endl;
	cout << ItemOne.GetName() << " " << ItemOne.GetQuantity() << " @ $" << ItemOne.GetPrice() << " = $" << ItemOne.GetQuantity() * ItemOne.GetPrice() << endl;
	cout << ItemTwo.GetName() << " " << ItemTwo.GetQuantity() << " @ $" << ItemTwo.GetPrice() << " = $" << ItemTwo.GetQuantity() * ItemTwo.GetPrice() << "\n" << endl;
	cout << "Total: $" << (ItemOne.GetQuantity() * ItemOne.GetPrice()) + (ItemTwo.GetQuantity() * ItemTwo.GetPrice()) << endl;
	return 0;
}