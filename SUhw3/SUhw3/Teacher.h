#pragma once
#include "Person.h"
class Teacher :
	public Person
{
private:
	float _monthlySalary;
	unsigned short int _daysPassed;

public:

	//default constructor
	Teacher();
	//custom full range copnstructor
	Teacher(unsigned short int &, string &, string &, float, unsigned short int);
	//destructor
	~Teacher();

	//setters
	void setMonthlySalary(float);
	void setDaysPassed(unsigned short int);

	//getters
	float getMonthlySalary();
	unsigned short int getDaysPassed();

	//testing inherented function
	virtual void getData();


};

