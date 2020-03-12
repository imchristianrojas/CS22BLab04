//
//  productionWorker.cpp
//  lab04MacV2
//
//  Created by Christian on 3/11/20.
//  Copyright © 2020 Christian Rojas. All rights reserved.
//


#include "productionWorker.h"

//int night;
productionWorker::productionWorker()
{
	rate = 0.0;
	shift = 1;

}
productionWorker::productionWorker(std::string eN, int eNum, std::string hiredDate, int sh, double ra) :
	shift(sh), rate(ra), employee(eN,eNum,hiredDate)
{
	
}

void productionWorker::setRate(double ra) {
	rate = ra;
}
void productionWorker::setShift(int sh) {
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
	if (shift == 2)
		std::cout << "Production Worker Name: " << getEmployeeName() << "\nProduction Worker Number: " << getEmployeeNumber()
		<< "\nDate Hired of Production Worker: " << getHiredDate() << "\nShift: Night" << "\n Pay Rate: " << getRates()<<'\n' << std::endl;
	else
		std::cout << "Production Worker Name: " << getEmployeeNumber() << "\nProduction Worker Number: " << getEmployeeNumber()
		<< "\nDate Hired of Production Worker: " << getHiredDate() << "\nShift: Day" << "\n Pay Rate: " << getRates()<<'\n' << std::endl;


}