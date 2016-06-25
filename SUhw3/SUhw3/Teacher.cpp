#include "Teacher.h"



Teacher::Teacher()
{
	this->setID(0);
	this->setName("");
	this->setCurrentCourse("");
	setMonthlySalary(0);
	setDaysPassed(0);
}

Teacher::Teacher(unsigned short int &ID, string &Name, string &CurrentCourse, float MonthlySalary, unsigned short int DaysPassed) :
	Person(ID, Name, CurrentCourse)
{
	setMonthlySalary(MonthlySalary);
	setDaysPassed(DaysPassed);
}

Teacher::~Teacher()
{
#ifdef DEBUG_MODE
	cout << "Object from class Teacher is destroyed!" << endl;
#endif // DEBUG_MODE
}


//setters
void Teacher::setMonthlySalary(float MonthlySalary)
{
	this->_monthlySalary = MonthlySalary;
}

void Teacher::setDaysPassed(unsigned short int DaysPassed)
{
	this->_daysPassed = DaysPassed;
}


//getters
float Teacher::getMonthlySalary()
{
	return this->_monthlySalary;
}

unsigned short int Teacher::getDaysPassed()
{
	return this->_daysPassed;
}

void Teacher::getData()
{
	cout << "Information about teacher with ID: " << this->getID() << endl;
	cout << "Name: " << this->getName() << endl;
	cout << "Current course: " << this->getCurrentCourse() << endl;
	cout << "Monthly salary: " << this->getMonthlySalary() << endl;
	cout << "He is joined in SoftUni before " << this->getDaysPassed() << " days." << endl;
}