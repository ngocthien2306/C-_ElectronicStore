#pragma once
#include"Products.h"
class Phones : public Products
{
private: 
	int MemoryPhone = 0;
public:
	Phones() {

	}
	~Phones() {

	}
	Phones(string id, string name, string color, double price, int memory = 0);
	void InputProduct();
	void OutputProduct();
	int GetMemory();
	void SetMemory(int memory);
	double CalculateProduct();
};

