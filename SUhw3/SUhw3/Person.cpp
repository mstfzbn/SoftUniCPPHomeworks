#include "Person.h"


//default constructor
Person::Person()
{
	this->setID(0);
	this->setName("");
	this->setCurrentCourse("");
}

//custom full range constructor
Person::Person(unsigned short int ID, string Name, string CurrentCourse)
{
	this->setID(ID);
	this->setName(Name);
	this->setCurrentCourse(CurrentCourse);
}

//destructor
Person::~Person()
{
	//program component, which will work only when DEBUG_MODE is activated [testing and deomnstration purposes]
#ifdef DEBUG_MODE
	cout << "Object from class Person is destroyed!" << endl;
#endif // DEBUG_MODE
}




//setters
void Person::setID(unsigned short int ID)
{
	this->_id = ID;
}

void Person::setName(string Name)
{
	this->_name = Name;
}

void Person::setCurrentCourse(string CurrentCourse)
{
	this->_currentCourse = CurrentCourse;
}





//getters
unsigned short int Person::getID()
{
	return _id;
}

string Person::getName()
{
	return _name;
}

string Person::getCurrentCourse()
{
	return _currentCourse;
}



