//
//  productionWorker.cpp
//  lab04MacV2
//
//  Created by Christian on 3/11/20.
//  Copyright © 2020 Christian Rojas. All rights reserved.
//

#include <stdio.h>
#include "productionWorker.h"

//int night;
productionWorker::productionWorker()
{
    rate = 0.0;
    shift = 1;

    std::cout << "Production Worker Default Constructor invoked" << std::endl;
}
productionWorker::productionWorker(int sh, double ra) :
shift(sh), rate(ra), employee(getEmployeeName(),getEmployeeNumber(),getHiredDate())
{
    std::cout << "Production Worker Default Constructor Initialization invoked" << std::endl;
}

void productionWorker::setRate(double ra){
    rate = ra;
}
void productionWorker::setShift(int sh){
    shift = sh;
}


int productionWorker::getShift()
{
    return shift;
}
double productionWorker::getRates()
{
    return rate;
}


void productionWorker::displayEmployeeInfo()
{
    if(shift == 2)
    std::cout<<"Employee Name: "<< getEmployeeName() <<"\nEmployee Number: "<< getEmployeeNumber()
       <<"\nDate Hired of Employee: "<<getHiredDate()<<"\nShift: Night"<<"\n Pay Rate: "<<getRates()<<std::endl;
    else
        std::cout<<"Employee Name: "<< getEmployeeNumber()<<"\nEmployee Number: "<< getEmployeeNumber()
              <<"\nDate Hired of Employee: "<<getHiredDate()<<"\nShift: Day"<<"\n Pay Rate: "<<getRates()<<std::endl;
        
        
}
