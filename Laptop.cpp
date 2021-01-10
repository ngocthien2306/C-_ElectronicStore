#include "Laptop.h"
Laptop::Laptop() {

}
Laptop::Laptop(string id, string name, string color, double price, int ram, int rom) 
	: Products( id, name, color, price)
{
	Ram = ram;
	Rom = rom;
}
Laptop::~Laptop() {

}
void Laptop::InputProduct() {
	CalculateProduct();
	Products::InputProduct();
	cout << "\nEnter Ram of laptop: ";
	cin >> Ram;
	cout << "\nEnter Rom of laptop: ";
	cin >> Rom;
}
void Laptop::OutputProduct() {
	Products::OutputProduct();
	cout << "\nRam: " << Ram;
	cout << "\nRom: " << Rom;
	cout << "\nPrice of laptop: " << CalculateProduct();
}
double Laptop::CalculateProduct() {
	return Price + Ram * 0.05 + Rom * 0.04;
}