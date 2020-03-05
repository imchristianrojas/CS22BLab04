#include "employee.h"
#include "productionWorker.h"

//int night;
productionWorker::productionWorker()
{
	this->rate = 0.0;
	this->shift = 1;

	std::cout << "Production Worker Default Constructor invoked" << std::endl;
}
productionWorker::productionWorker(int sh, double ra) :
	shift(sh), rate(ra)
{
	std::cout << "Production Worker Default Constructor Initialization invoked" << std::endl;
}

