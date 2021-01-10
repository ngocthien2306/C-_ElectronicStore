#include "GuardingStaff.h"
GuardingStaff::GuardingStaff() {

}
GuardingStaff::GuardingStaff(string name, string id, int num, int salary, int shift) :
	Employee(name, id, num, salary) {
	ShiftWork = shift;
}
int GuardingStaff::GetShiftWork() {
	return this->ShiftWork;
}
void GuardingStaff::SetShiftWork(int shift) {
	this->ShiftWork = shift;
}
GuardingStaff::~GuardingStaff() {

}
void GuardingStaff::InputEmployee() {
	Employee::InputEmployee();
	CalculateSalary();
	cout << "\nEnter number of shift day (1: 7AM - 11AM, 2: 1PM - 5PM, 3: 5PM - 9PM)";
	cin >> ShiftWork;
}
void GuardingStaff::OutputEmployee() {
	Employee::OutputEmployee();
	if (ShiftWork == 1) {
		cout << "Shift 1: 7AM - 11AM";
	}
	if (ShiftWork == 2) {
		cout << "Shift 2: 1PM - 5PM";
	}
	else {
		cout << "Shift 3: 5PM - 9PM";
	}
	cout << "\nSalary: " << CalculateSalary();
}
double GuardingStaff::CalculateSalary() {
	double a = (double)Salaryperday * (double)NumberWork;
	return a;
}