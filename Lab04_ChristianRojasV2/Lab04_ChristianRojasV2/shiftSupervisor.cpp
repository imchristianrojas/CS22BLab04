#include "shiftSupervisor.h"


shiftSupervisor::shiftSupervisor()
{

}

shiftSupervisor::shiftSupervisor(std::string eName, int eNumber, std::string dH,double sal, double bo) :
	annualSal(sal), annualBonus(bo),employee(eName,eNumber,dH)
{

}


void shiftSupervisor::setAnnualSalary(double sal)
{
	annualSal = sal;
}
void shiftSupervisor::setAnnualBonus(double bo)
{
	annualBonus = bo;
}

double shiftSupervisor::getAnnualBonus()
{
	return annualBonus;

}
double shiftSupervisor::getAnnualSalary()
{
	return annualSal;
}


void shiftSupervisor::displayEmployeeInfo()
{
	
	std::cout << "Shift Supervisor Name: " << getEmployeeName() << "\nShift Supervisor Number: " << getEmployeeNumber()
		<< "\nDate Hired of Shift Supervisor: " << getHiredDate() << "\nShift Supervisor Annual Salary: " << getAnnualSalary() << "\nShift Supervisor Annual Bonus: " << getAnnualBonus()
		<<'\n'<< std::endl;
	

	
}