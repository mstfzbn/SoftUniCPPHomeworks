#include "Date.hpp"


//default constructor
Date::Date()
{
	this->setDay(0);
	this->setMonth(0);
	this->setYear(0);
}

//full range custom constructor
Date::Date(unsigned short int day, unsigned short int month, unsigned short int year)
{
	this->setDay(day);
	this->setMonth(month);
	this->setYear(year);
}

//copy constructor
Date::Date(const Date & rhs)
{
	this->_day = rhs._day;
	this->_month = rhs._month;
	this->_year = rhs._year;
}

//destructor
Date::~Date()
{
#ifdef DEBUG
	cout << "Object from class Date is destroyed!" << endl;
#endif // DEBUG
}


//overloaded operator=
Date & Date::operator=(const Date & rhs)
{
	this->_day = rhs._day;
	this->_month = rhs._month;
	this->_year = rhs._year;

	return *this;
}


//setters
void Date::setDay(unsigned short int day)
{
	this->_day = day;
}

void Date::setMonth(unsigned short int month)
{
	this->_month = month;
}

void Date::setYear(unsigned short int year)
{
	this->_year = year;
}


//getters
unsigned short int Date::getDay()
{
	return this->_day;
}

unsigned short int Date::getMonth()
{
	return this->_month;
}

unsigned short int Date::getYear()
{
	return this->_year;
}


//custom function
void Date::showDate()
{
	cout << "day:" << this->getDay() << " month:" << this->getMonth() << " year:" << this->getYear();
}