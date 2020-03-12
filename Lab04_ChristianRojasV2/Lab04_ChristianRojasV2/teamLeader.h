#include "productionWorker.h"


class teamLeader : public productionWorker
{

private:
	double monthlyBonus;
	int reqTraining;
	int trainingHoursAttend;

public:
	teamLeader();
	teamLeader(std::string name, int num, std::string dateHired, int shift, double rate, double monBo, int req, int attend);

	void setMonthlyBonus(double);
	void setReqTraining(int);
	void setTrainingHoursAttend(int);

	double getMonthlyBonus();
	int getReqTraining();
	int getTrainingHoursAttend();


	virtual void displayEmployeeInfo();


};