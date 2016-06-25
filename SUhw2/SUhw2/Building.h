#pragma once
#include "Includes.h" //used custom header with included libraries

//custom Building class
class Building
{
	//private members
private:
	string _companyName;
	unsigned int _floors;
	unsigned int _offices;
	unsigned int _employees;
	unsigned int _freeWorkingSeats;

	//public methods
public:
	Building(); //default constructor
	Building(string, int, int, int, int); //full range constructor

	~Building();  //destructor

	//setters
	void setCompanyName(string);
	void setFloors(int);
	void setOffices(int);
	void setEmployees(int);
	void setFreeWorkingSeats(int);

	//getters
	string getCompanyname();
	unsigned int getFloors();
	unsigned int getOffices();
	unsigned int getEmployees();
	unsigned int getfreeWorkingSeats();

	//custom methods
	float coefficientCalculation();
	float peoplePerFloor();
	float officesPerFloor();
	float peoplePerOffice();

};

