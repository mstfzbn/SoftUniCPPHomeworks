#pragma once

#include "Includes.hpp"
#include "Defines.hpp"

//custom class, that represent date format
class Date
{
	//class members
private:
	unsigned short int _day;
	unsigned short int _month;
	unsigned short int _year;

public:
	//default constructor
	Date();

	//full range custom constructor
	Date(unsigned short int, unsigned short int, unsigned short int);
	
	//copy constructor
	Date(const Date &);
	
	//destructor
	~Date();

	//overloaded operator
	Date & operator=(const Date &);

	//setters
	void setDay(unsigned short int);
	void setMonth(unsigned short int);
	void setYear(unsigned short int);

	//getters
	unsigned short int getDay();
	unsigned short int getMonth();
	unsigned short int getYear();

	//custom function
	void showDate();
};

