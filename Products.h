#pragma once
#include<iostream>
#include<string>
using namespace std;
class Products
{
protected:
	string IDProduct;
	string NameProduct;
	string ColorProduct;
	double Price = 0;
public:
	Products();
	~Products();
	Products(string id, string name, string color, double price = 0);
	string GetIDProducts();
	void SetIDProducts(string id);
	string GetNameProduct();
	void SetNameProduct(string name);
	string GetColorProduct();
	void SetColorProduct(string color);
	double GetPriceProduct();
	void SetPriceProduct(double price);
	virtual void InputProduct() = 0;
	virtual void OutputProduct() = 0;
	virtual double CalculateProduct() = 0;
};

