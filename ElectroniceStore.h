#pragma once
#include"TiVi.h"
#include"Phones.h"
#include"Laptop.h"
#include"GuardingStaff.h"
#include"Accountant.h"
#include"TechnicalStaff.h"
#include<vector>
class ElectroniceStore
{
private:
	vector<Employee*> ListEmployee;
	vector<Products*> ListProduct;
	string NameStore;
public:
	ElectroniceStore();
	~ElectroniceStore();
	void InputEmployee();
	void OutputEmployee();
	double CalcuteSalary();
	void InputProduct();
	void OutputProduct();
	double CalculateProduct();
	string GetNameStore();
	void SetNametStore(string namestore);
	void Display();
};
