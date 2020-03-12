//
//  productionWorker.h
//  lab04MacV2
//
//  Created by Christian on 3/11/20.
//  Copyright © 2020 Christian Rojas. All rights reserved.
//

#ifndef productionWorker_h
#define productionWorker_h

#include "employee.h"


class productionWorker : public employee
{
private:
	int shift;
	double rate;
public:

	productionWorker();
	productionWorker(std::string eN, int eNum, std::string hiredDate,int shift, double rate);

	void setShift(int);
	void setRate(double ra);


	int getShift();
	double getRates();


	virtual void displayEmployeeInfo();


};



#endif /* productionWorker_h */