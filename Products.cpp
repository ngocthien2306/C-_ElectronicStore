#include "Products.h"
Products::Products() {

}
Products::~Products() {

}
Products::Products(string id, string name, string color, double price) {
	IDProduct = id;
	NameProduct = name;
	ColorProduct = color;
	Price = price;
}
string Products::GetIDProducts() {
	return this->IDProduct;
}
void Products::SetIDProducts(string id) {
	this->IDProduct = id;
}
string Products::GetNameProduct() {
	return this->NameProduct;
}
void Products::SetNameProduct(string name) {
	this->NameProduct = name;
}
string Products::GetColorProduct() {
	return this->ColorProduct;
}
void Products::SetColorProduct(string color) {
	this->ColorProduct = color;
}
double Products::GetPriceProduct() {
	return this->Price;
}
void Products::SetPriceProduct(double price) {
	this->Price = price;
}
void Products::InputProduct() {
	CalculateProduct();
	string check;
	getline(cin, check);
	cout << "\nEnter ID of the product: ";
	getline(cin, IDProduct);
	cout << "\nEnter name: ";
	getline(cin, NameProduct);
	cout << "\nEnter color: ";
	getline(cin, ColorProduct);
	cout << "\nEnter price: ";
	cin >> Price;
}
void Products::OutputProduct() {
	cout << "\nID: " << IDProduct;
	cout << "\nName: " << NameProduct;
	cout << "\nColor: " << ColorProduct;
	cout << "\nPrice: " << Price;
	//cout << "\nThe Price: " << CalculateProduct();
}
//double Products::CalculateProduct() {
//	return Price * 1.25;
//}