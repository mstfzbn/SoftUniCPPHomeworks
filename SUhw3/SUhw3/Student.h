#pragma once
#include "Person.h"

class Student :
	public Person
{
private:
	unsigned short int _currentPoints;
	bool _isFirstCourse;

	float _averageMark;
	unsigned short int _courseCounter;
public:
	//standart constructor
	Student();
	//full range custom constructor                          
	Student(unsigned short int &, string &, string &, unsigned short int, bool);
	//destructor
	~Student();

	//setters
	void setCurrentPoints(unsigned short int);
	void setIsFirstCourse(bool);

	void setAverageMark(float);
	void setCourseCounter(unsigned short int);

	//getters
	unsigned short int getCurrentPoints();
	bool getIsFirstCourse();

	float getAverageMark();
	unsigned short int getCourseCounter();

	//custom function for average evaluation mark
	void averageMarkBuilder();
	
	//inhereted function
	virtual void getData();

};

