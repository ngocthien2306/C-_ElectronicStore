#include"ElectroniceStore.h"

int main() {
	char choice;
	ElectroniceStore* store = new ElectroniceStore();
	do {
		cout << "\n------MENU------";
		cout << "\n1. Add product ";
		cout << "\n2. Add employee ";
		cout << "\n3. Display ";
		cout << "\n4. Exit!";
		cout << "\nYour choice: ";
		cin >> choice;
		switch (choice)
		{
		case '1':
			store->InputProduct();
			store->OutputProduct();
			break;
		case '2': 
			store->InputEmployee();
			store->OutputEmployee();
			break;
		case '3': 
			store->Display();
			break;
		default:
			cout << "The your choice ERROR! Please choice again.";
			break;
		}

	} while (choice != '4');
	

}