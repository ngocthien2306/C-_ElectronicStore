#include "ElectroniceStore.h"
string ElectroniceStore::GetNameStore() {
	return this->NameStore;
}
void ElectroniceStore::SetNametStore(string namestore) {
	this->NameStore = namestore;
}
void ElectroniceStore::InputEmployee() {
	string next1;
	getline(cin, next1);
	cout << "\nThe name of electronic store: ";
	getline(cin, NameStore);
	char choice; 
	do {
		cout << "\n1. Add a technical staff";
		cout << "\n2. Add a accountant staff";
		cout << "\n3. Add a guarding staff";
		cout << "\n4. Search employee";
		cout << "\n5. Exit";
		cout << "\nEnter your choice: ";
		cin >> choice;
		Employee* employee;
		switch (choice)
		{
		case '1':
			employee = new TechnicalStaff;
			cout << "\nEnter the information technical employee";
			employee->InputEmployee();
			ListEmployee.push_back(employee);
			break;
		case '2':
			employee = new Accountant;
			cout << "\nEnter the information accountant employee";
			employee->InputEmployee();
			ListEmployee.push_back(employee);
			break;
		case '3':
			employee = new GuardingStaff;
			cout << "\nEnter the information guarding employee";
			employee->InputEmployee();
			ListEmployee.push_back(employee);
			break;
		case '4':
			break;
		case '5':
			break;
		default:
			break;
		}
	} while (choice != '5');
}
void ElectroniceStore::InputProduct() {
	CalculateProduct();
	string next;
	getline(cin, next);
	cout << "\nThe name of electronic store: ";
	getline(cin, NameStore);
	char choice;
	do {
		cout << "\n1. Add a tivi";
		cout << "\n2. Add a phone";
		cout << "\n3. Add a laptop";
		cout << "\n4. Search product";
		cout << "\n5. Exit!";
		cout << "\nEnter your choice: ";
		cin >> choice;
		Products* product;
		switch (choice)
		{
		case '1':
			product = new TiVi;
			cout << "\nEnter the information of tivi ";
			product->InputProduct();
			ListProduct.push_back(product);
			break;
		case '2':
			product = new Phones;
			cout << "\nEnter the information of phone ";
			product->InputProduct();
			ListProduct.push_back(product);
			break;
		case '3':
			product = new Laptop;
			cout << "\nEnter the information of laptop ";
			product->InputProduct();
			ListProduct.push_back(product);
			break;
		case '4':
			break;
		case '5':
			break;
		default:
			cout << "\nYour choice is ERROR! please choice again!";
			break;
		}
	} while (choice != '5');
}
void ElectroniceStore::OutputEmployee() {
	CalcuteSalary();
	cout << "\nName store: " << NameStore;
	cout << "\nList of employees \n";
	int n = ListEmployee.size();
	for (int i = 0; i < n; i++)
	{
		cout << "\nThe information of employee " << i + 1;
		ListEmployee[i]->OutputEmployee();
	}
	cout << "\nSum all salary of employee: " << CalcuteSalary();
}
double ElectroniceStore::CalcuteSalary() {
	double sume = 0;
	int n = ListEmployee.size();
	for (int i = 0; i < n; i++)
	{
		sume = sume + ListEmployee[i]->CalculateSalary();
	}
	return sume;
}
void ElectroniceStore::OutputProduct() {
	cout << "\nName store: " << NameStore;
	cout << "\nList of products\n";
	int n = ListProduct.size();
	for (int i = 0; i < n; i++)
	{
		cout << "\nThe information of product " << i + 1;
		ListProduct[i]->OutputProduct();
	}
	cout << "\nSum all price the product: " << CalculateProduct();
}
double ElectroniceStore::CalculateProduct() {
	double sum = 0;
	int n = ListProduct.size();
	for (int i = 0; i < n; i++)
	{
		sum = sum + ListProduct[i]->CalculateProduct();
	}
	return sum;
}
void ElectroniceStore::Display() {
	int n = ListProduct.size();
	for (int i = 0; i < n; i++)
	{
		cout << "\nThe information of product " << i + 1;
		ListProduct[i]->OutputProduct();
	}
}
ElectroniceStore::ElectroniceStore() {

}
ElectroniceStore::~ElectroniceStore() {

}