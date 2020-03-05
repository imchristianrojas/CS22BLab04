#pragma once
#include "employee.h"

employee::employee() {

	this->employeeName = "NA";
	this->employeeNumber = 0;
	this->hiredDate = "00/00/00";
}

employee::employee(std::string name, int num, std::string dateHired):
employeeName(name), employeeNumber(num), hiredDate(dateHired)
{}



void employee::setEmployeeName(std::string eName)
{
	this->employeeName = eName;
}
void employee::setEmployeeNumber(int eNumber) 
{

	this->employeeNumber = eNumber;
}
void employee::setHiredDate(std::string hD) 
{

	this->hiredDate = hD;
}

std::string employee::getEmployeeName() 
{
	return employeeName;

}
int employee:: getEmployeeNumber()
{
	return employeeNumber;
}
std::string employee::getHiredDate()
{

	return hiredDate;
}

