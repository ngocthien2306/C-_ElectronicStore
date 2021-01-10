#include "Phones.h"
Phones::Phones(string id, string name, string color, double price, int memory) : Products(id, name, color, price) {
	MemoryPhone = memory;
}
int Phones::GetMemory() {
	return this->MemoryPhone;
}
void Phones::SetMemory(int memory) {
	this->MemoryPhone = memory;
}
void Phones::InputProduct() {
	CalculateProduct();
	Products::InputProduct();
	cout << "\nEnter the menory of the phone: ";
	cin >> MemoryPhone;
}
void Phones::OutputProduct() {
	Products::OutputProduct();
	cout << "\nMemory: ";
	cout << "\nPrice of phones: " << CalculateProduct();
}
double Phones::CalculateProduct() {
	return Price + (MemoryPhone * 0.2);
}