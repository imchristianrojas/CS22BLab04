//
//  employee.h
//  lab04MacV2
//
//  Created by Christian on 3/11/20.
//  Copyright © 2020 Christian Rojas. All rights reserved.
//

#ifndef employee_h
#define employee_h
#include <iostream>

 class employee
{

private:
   // friend class productionWorker;
    std::string employeeName;
    int employeeNumber;
    std::string hiredDate;
public:
    employee();
    employee(std::string eN, int eNum, std::string hiredDate);
    
    void setEmployeeName(std::string eName);
    void setEmployeeNumber(int eNumber);
    void setHiredDate(std::string hD);
    
    
    
    std::string getEmployeeName();
    int getEmployeeNumber();
    std::string getHiredDate();

    virtual void displayEmployeeInfo();



};

#endif /* employee_h */
