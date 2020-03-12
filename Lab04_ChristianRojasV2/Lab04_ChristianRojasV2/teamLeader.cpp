#include "teamLeader.h"


teamLeader::teamLeader()
{
	monthlyBonus = 0.0;
	trainingHoursAttend = 0;
	reqTraining = 0;
}

teamLeader::teamLeader(std::string name, int num, std::string dateHired,int shift, double rate,double bon, int requiredTr, int trainingAttend):
	monthlyBonus(bon), reqTraining(requiredTr), trainingHoursAttend(trainingAttend),productionWorker(name,num,dateHired,shift,rate)
{

}

void teamLeader::setMonthlyBonus(double bo)
{
	monthlyBonus = bo;
}

void teamLeader::setTrainingHoursAttend(int att)
{
	trainingHoursAttend= att;
}
void teamLeader::setReqTraining(int req)
{
	reqTraining = req;
}

double teamLeader::getMonthlyBonus()
{
	return monthlyBonus;
}
int teamLeader::getReqTraining()
{
	return reqTraining;
}
int teamLeader::getTrainingHoursAttend()
{
	return trainingHoursAttend;
}


void teamLeader::displayEmployeeInfo()
{

	productionWorker::displayEmployeeInfo();

	/*std::cout << "Team Leader Name: " << getEmployeeName() << "\nTeam Leader Number: " << getEmployeeNumber()
		<< "\nDate Hired of Team Leader: " << getHiredDate() */
	std::cout<< "\nTeam Leader Monthly Bonus: " << getMonthlyBonus() << "\nTeam Leader Required Hours of Training: "<<getReqTraining()<<
		"\nTeam Leader Training Hours to Attend: "<<getTrainingHoursAttend()<<'\n'<< std::endl;



}
