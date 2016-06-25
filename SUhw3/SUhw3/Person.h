#pragma once
#include "Includes.h"


//A base parent abstract class, wich will be inherited 

class Person
{
	//class members
private:
	unsigned short int _id;
	string _name;
	string _currentCourse;


	//class methods
public:
	
	//default constructor
	Person();

	//custom full range constructor
	Person(unsigned short int, string, string);

	//destructor
	~Person();


	//setters
	void setID(unsigned short int);
	void setName(string);
	void setCurrentCourse(string);

	//getters
	unsigned short int getID();
	string getName();
	string getCurrentCourse();
	
	//virtual function, which will be implemented in child classes
	virtual void getData() = 0;
	
};

