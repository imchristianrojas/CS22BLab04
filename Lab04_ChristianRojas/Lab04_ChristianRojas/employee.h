#pragma once
#include <iostream>


class employee
{

private:
	std::string employeeName;
	int employeeNumber;
	std::string hiredDate;//maybe int??
public:
	employee();
	employee(std::string eN, int eNum, std::string hiredDate);
	virtual ~employee();
	void setEmployeeName(std::string eName);
	void setEmployeeNumber(int eNumber);
	void setHiredDate(std::string hD);

	std::string getEmployeeName();
	int getEmployeeNumber();
	std::string getHiredDate();




};