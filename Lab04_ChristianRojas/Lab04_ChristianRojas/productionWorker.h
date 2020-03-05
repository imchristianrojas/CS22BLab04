#pragma once
#include "employee.h"


class productionWorker : public employee
{
private:
	int shift;
	double rate;
public:

	productionWorker();
	productionWorker(int shift, double rate);

	void setShift(int sh) { shift = sh; }
	void setRate(double ra) {rate = ra;}


	int getShift() { return shift; }
	double getRates() { return rate; }




};