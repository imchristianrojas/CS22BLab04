#include "employee.h"

class shiftSupervisor : public employee
{
private:
	double annualSal;
	double annualBonus;
public:

	shiftSupervisor();
	shiftSupervisor(std::string eName, int eNumber, std::string dH,double sal, double bo);
	void setAnnualSalary(double);
	void setAnnualBonus(double);

	double getAnnualSalary();
	double getAnnualBonus();

	virtual void displayEmployeeInfo();




};