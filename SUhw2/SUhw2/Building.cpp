#include "Building.h"



//default constructor
Building::Building()
{
	setCompanyName("");
	setFloors(0);
	setOffices(0);
	setEmployees(0);
	setFreeWorkingSeats(0);
}

//custom full range constructor
Building::Building(string companyname, int floors, int offices, int employees, int freeworkingseats)
{
	setCompanyName(companyname);
	setFloors(floors);
	setOffices(offices);
	setEmployees(employees);
	setFreeWorkingSeats(freeworkingseats);
}

//destructor
Building::~Building()
{
	cout << "The Building was destroyed!! Later make another one!!\n";
}


//setters
void Building::setCompanyName(string companyname)
{
	this->_companyName = companyname;
}

void Building::setFloors( int floors)
{
	if (floors > 0) // data filtring
	{
		this->_floors = floors;
	}
	else
	{
		this->_floors = 0;
	}
}

void Building::setOffices( int offices)
{
	if (offices > 0) // data filtring
	{
		this->_offices = offices;
	}
	else
	{
		this->_offices = 0;
	}
}

void Building::setEmployees( int employees)
{
	if (employees > 0) // data filtring
	{
		this->_employees = employees;
	}
	else
	{
		this->_employees = 0;
	}
}

void Building::setFreeWorkingSeats( int freeworkingseats)
{
	if (freeworkingseats > 0) // data filtring
	{
		this->_freeWorkingSeats = freeworkingseats;
	}
	else
	{
		this->_freeWorkingSeats = 0;
	}
}




//getters
string Building::getCompanyname()
{
	return _companyName;
}

unsigned int Building::getFloors()
{
	return _floors;
}

unsigned int Building::getOffices()
{
	return _offices;
}

unsigned int Building::getEmployees()
{
	return _employees;
}

unsigned int Building::getfreeWorkingSeats()
{
	return _freeWorkingSeats;
}




//custom methods
float Building::coefficientCalculation()
{
	return _employees / (_employees + _freeWorkingSeats);
}

float Building::peoplePerFloor()
{
	return _employees / _floors;
}

float Building::officesPerFloor()
{
	return _offices / _floors;
}

float Building::peoplePerOffice()
{
	return _employees / _offices;
}
