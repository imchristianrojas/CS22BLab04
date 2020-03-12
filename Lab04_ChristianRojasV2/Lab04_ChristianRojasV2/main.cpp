//
//  main.cpp
//  lab04MacV2
//
//  Created by Christian on 3/11/20.
//  Copyright © 2020 Christian Rojas. All rights reserved.
//

#include <iostream>
#include "employee.h"
#include "productionWorker.h"
#include "shiftSupervisor.h"
#include "teamLeader.h"
#include <iomanip>
#include <string>

using namespace std;




void menu()
{

	bool cond = true;

	int userChoose;

	int countProduction = 0;
	int countShift = 0;
	int countTeamLead = 0;
	int countRegular = 0;

	const int SIZE = 50;


	string name, dateHired;
	int id, shift, hoursToAttend, hoursRequired;
	double annualSal, annualBonus, monthlyBonus, payRate;

	employee regular[SIZE];
	shiftSupervisor supers[SIZE];
	productionWorker pWorkers[SIZE];
	teamLeader leads[SIZE];
	while (cond)
	{
		cout << setw(55) << "Welcome to Employee Information System"<< endl;
		cout << setfill('-')<<setw(65)<<'-' << endl;
		cout << setw(5) << "Input a number that corresponds to what you want create " << endl;
		cout << setw(5) << "1.Employee\n2.Production Worker\n3.Shift Supervisor:\n4.Team Leader:\n5.Exit Program." << endl;
		cin >> userChoose;

		
		switch (userChoose)
		{
		case 1:
		{
			employee *regularEmployee = new employee;
			cout << "please enter employee name:";
			cin.ignore();
			getline(cin, name);
			regularEmployee->setEmployeeName(name);
			cout << "\nplese enter the employee id number:";
			cin >> id;
			regularEmployee->setEmployeeNumber(id);
			cout << "\nplease enter date hired of the employee in this format xx/xx/xxxx:";
			cin.ignore();
			getline(cin, dateHired);
			regularEmployee->setHiredDate(dateHired);
			regular[countRegular] = *regularEmployee;
			countRegular++;
			break;
			
		}
		case 2:
		{
			productionWorker *productWork = new productionWorker;
			cout << "please enter employee name:";
			cin.ignore();
			getline(cin, name);
			productWork->setEmployeeName(name);
			cout << "\nplese enter the employee id number:";
			cin >> id;
			productWork->setEmployeeNumber(id);
			cout << "\nplease enter date hired of the employee in this format xx/xx/xxxx:";
			cin.ignore();
			getline(cin, dateHired);
			productWork->setHiredDate(dateHired);
			cout << "\nPlease enter shift Number(1 or 2): ";
			cin >> shift;
			productWork->setShift(shift);
			cout << "\nPlease enter rate of pay: ";
			cin >> payRate;
			productWork->setRate(payRate);
			pWorkers[countProduction] = *productWork;
			countProduction++;

			break;
		}
		case 3:
		{
			shiftSupervisor *sup = new shiftSupervisor;
			cout << "please enter employee name:";
			cin.ignore();
			getline(cin, name);
			sup->setEmployeeName(name);
			cout << "\nplese enter the employee id number:";
			cin >> id;
			sup->setEmployeeNumber(id);
			cout << "\nplease enter date hired of the employee in this format xx/xx/xxxx:";
			cin.ignore();
			getline(cin, dateHired);
			sup->setHiredDate(dateHired);
			cout << "\nPlease enter annuall salarary: ";
			cin >> annualSal;
			sup->setAnnualSalary(annualSal);
			cout << "\nPlease enter annual bonus: ";
			cin >> annualBonus;
			sup->setAnnualBonus(annualBonus);
			supers[countShift] = *sup;
			countShift++;
			break;
		}
		case 4:
		{
			teamLeader *lead = new teamLeader;
			cout << "please enter employee name:";
			cin.ignore();
			getline(cin, name);
			lead->setEmployeeName(name);
			cout << "\nplese enter the employee id number:";
			cin >> id;
			lead->setEmployeeNumber(id);
			cout << "\nplease enter date hired of the employee in this format xx/xx/xxxx:";
			cin.ignore();
			getline(cin, dateHired);
			lead->setHiredDate(dateHired);
			cout << "\nPlease enter shift Number(1 or 2): ";
			cin >> shift;
			lead->setShift(shift);
			cout << "\nPlease enter rate of pay: ";
			cin >> payRate;
			lead->setRate(payRate);
			cout << "\nPlease enter monthly bonus:  ";
			cin >> monthlyBonus;
			lead->setMonthlyBonus(monthlyBonus);
			cout << "\nPlease enter required training hours:  ";
			cin >> hoursRequired;
			lead->setReqTraining(hoursRequired);
			cout << "\nPlease enter hours required to attend: ";
			cin >> hoursToAttend;
			lead->setTrainingHoursAttend(hoursToAttend);


			leads[countTeamLead] = *lead;
			countTeamLead++;
			break;

		}
		case 5:
			cond = 0;
			break;
		}


	}



	//Display All Regular Workers Informations
	for (int i = 0; i < (countRegular); i++)
	{
		regular[i].displayEmployeeInfo();
	}
	
	//Diplay all production Workers
	for (int i = 0; i < (countProduction ); i++)
	{
		pWorkers[i].displayEmployeeInfo();
	}

	//Display All Shift Supervisors
	for (int i = 0; i < (countShift); i++)
	{
		 supers[i].displayEmployeeInfo();
	}

	//Display All Team Leads
	for (int i = 0; i < (countTeamLead); i++)
	{
		leads[i].displayEmployeeInfo();
	}

}

int main() {

	//employee em("Salvador", 00, "04/14/1996");
	//productionWorker workerOne("Mis Nalgas", 232, "02/13/11", 2, 15.24);
	//shiftSupervisor test("Christian Rojas", 20398596, "03/15/2000", 2000.0, 1000.0);
	//teamLeader lead("Rafael Sucks ass", 3152, "03/2/21", 2, 21.3, 10, 5, 12);

	//
	//em.displayEmployeeInfo();
	//workerOne.displayEmployeeInfo();
	//test.displayEmployeeInfo();
	//lead.displayEmployeeInfo();


	menu();



	cout << "\n\n\n\n\n\n" << endl;
	system("pause");






	return 0;
}