#pragma once

#include "Includes.hpp"
#include "Defines.hpp"
#include "Date.hpp"

//custom class, that represent vehicle object
class Vehicle
{

	//class members
private:
	string _registrationNumber;
	float _weightInTones;
	unsigned short int _numberOfSeats;
	string _chassisNumber;
	string _engineNumber;
	string _owner;
	Date _firstRegistration;
	Date _registrationInCountry;

public:
    //default constructor
	Vehicle();

	//full range custom constructor
	Vehicle(string, float, unsigned short int, string, string, string, Date, Date);

	//destructor
	~Vehicle();


	//setters
	void setRegistrationNumber(string);
	void setWeight(float);
	void setNumberOfSeats(unsigned short int);
	void setChassisNumber(string);
	void setEngineNumber(string);
	void setOwner(string);
	void setDateOfFirstRegistration(Date);
	void setDateOfRegistrationInCountry(Date);


	//getters
	string getRegistrationNumber();
	float getWeight();
	unsigned short int getNumberOfSeats();
	string getChassisNumber();
	string getEngineNumber();
	string getOwner();
	Date getDateOfFirstregistration();
	Date getDateOfRegistrationInCountry();
};

