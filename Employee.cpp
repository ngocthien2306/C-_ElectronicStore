#include "Employee.h"
Employee::Employee() {

}

string Employee::GetNameEmployee() {
	return this->NameEmployee;
}
void Employee::SetNameEmployee(string name) {
	this->NameEmployee = name;
}
string Employee::GetIDEmployee() {
	return this->IDEmployee;
}
void Employee::SetIDEmployee(string id) {
	this->IDEmployee = id;
}
int Employee::GetWorkEmployee() {
	return this->NumberWork;
}
void Employee::SetWorkEmployee(int num) {
	this->NumberWork = num;
}
int Employee::GetSalaryEmployee() {
	return this->Salaryperday;
}
void Employee::SetSalaryEmployee(int salary) {
	this->Salaryperday = salary;
}
Employee::Employee(string name, string id, int num , int salary) {
	NameEmployee = name;
	IDEmployee = id;
	NumberWork = num;
	Salaryperday = salary;
}
Employee::~Employee() {

}
void Employee::InputEmployee() {
	string a;
	getline(cin, a);
	cout << "\nEnter name: ";
	getline(cin, NameEmployee);
	cout << "\nEnter ID: ";
	getline(cin, IDEmployee);
	cout << "\nEnter number of work: ";
	cin >> NumberWork;
	cout << "\nEnter salary perday ($): ";
	cin >> Salaryperday;
}
void Employee::OutputEmployee() {
	cout << "\nName: " << NameEmployee;
	cout << "\nID: " << IDEmployee;
	cout << "\nNumber of work: " << NumberWork;
	cout << "\nSalary perday: " << Salaryperday;
}
