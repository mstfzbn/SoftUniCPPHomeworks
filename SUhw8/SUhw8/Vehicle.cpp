#include "Vehicle.hpp"

//default constructor
Vehicle::Vehicle()
{
	
}

//full range custom constructor
Vehicle::Vehicle(string registration_number,
	float weight,
	unsigned short int number_of_seats,
	string chassis_number,
	string engine_number,
	string owner,
	Date first_registration,
	Date registration_in_country)
{
	this->setRegistrationNumber(registration_number);
	this->setWeight(weight);
	this->setNumberOfSeats(number_of_seats);
	this->setChassisNumber(chassis_number);
	this->setEngineNumber(engine_number);
	this->setOwner(owner);
	this->setDateOfFirstRegistration(first_registration);
	this->setDateOfRegistrationInCountry(registration_in_country);
}

//destructor
Vehicle::~Vehicle()
{
#ifdef DEBUG
	cout << "Object from class Vehicle is destroyed!" << endl;
#endif // DEBUG
}


//setters
void Vehicle::setRegistrationNumber(string registration_number)
{
	this->_registrationNumber = registration_number;
}

void Vehicle::setWeight(float weight)
{
	this->_weightInTones = weight;
}

void Vehicle::setNumberOfSeats(unsigned short int number_of_seats)
{
	this->_numberOfSeats = number_of_seats;
}

void Vehicle::setChassisNumber(string chassis_number)
{
	this->_chassisNumber = chassis_number;
}

void Vehicle::setEngineNumber(string engine_number)
{
	this->_engineNumber = engine_number;
}

void Vehicle::setOwner(string owner)
{
	this->_owner = owner;
}

void Vehicle::setDateOfFirstRegistration(Date first_registration)
{
	this->_firstRegistration = first_registration;
}

void Vehicle::setDateOfRegistrationInCountry(Date registration_in_country)
{
	this->_registrationInCountry = registration_in_country;
}


//getters
string Vehicle::getRegistrationNumber()
{
	return this->_registrationNumber;
}

float Vehicle::getWeight()
{
	return this->_weightInTones;
}

unsigned short int Vehicle::getNumberOfSeats()
{
	return this->_numberOfSeats;
}

string Vehicle::getChassisNumber()
{
	return this->_chassisNumber;
}

string Vehicle::getEngineNumber()
{
	return this->_engineNumber;
}

string Vehicle::getOwner()
{
	return this->_owner;
}

Date Vehicle::getDateOfFirstregistration()
{
	return this->_firstRegistration;
}

Date Vehicle::getDateOfRegistrationInCountry()
{
	return this->_registrationInCountry;
}