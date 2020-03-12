//
//  employee.cpp
//  lab04MacV2
//
//  Created by Christian on 3/11/20.
//  Copyright © 2020 Christian Rojas. All rights reserved.
//

#include "employee.h"

employee::employee() {

	employeeName = "NA";
	employeeNumber = 0;
	hiredDate = "00/00/00";
}

employee::employee(std::string name, int num, std::string dateHired) :
	employeeName(name), employeeNumber(num), hiredDate(dateHired)
{}


void employee::setEmployeeName(std::string eName)
{
	employeeName = eName;
}
void employee::setEmployeeNumber(int eNumber)
{

	employeeNumber = eNumber;
}
void employee::setHiredDate(std::string hD)
{

	hiredDate = hD;
}

std::string employee::getEmployeeName()
{
	return employeeName;

}
int employee::getEmployeeNumber()
{
	return employeeNumber;
}
std::string employee::getHiredDate()
{

	return hiredDate;
}

void employee::displayEmployeeInfo()
{
	std::cout << "Employee Name: " << getEmployeeName() << "\nEmployee Number: " << getEmployeeNumber()
		<< "\nDate Hired of Employee: " << getHiredDate() <<'\n'<< std::endl;


}

