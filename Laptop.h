#pragma once
#include"Products.h"

class Laptop : public Products
{
private: 
	int Ram = 0;
	int Rom = 0;
public:
	Laptop();
	~Laptop();
	Laptop(string id, string name, string color, double price = 0, int ram = 0, int rom = 0);
	void InputProduct();
	void OutputProduct();
	double CalculateProduct();
	int GetRom();
	void SetRom(int rom);
	int GetRam();
	void SetRam(int ram);
};

