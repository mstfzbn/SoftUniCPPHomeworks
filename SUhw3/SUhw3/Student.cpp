#include "Student.h"


Student::Student()
{
	this->setID(0);
	this->setName("");
	this->setCurrentCourse("");
	setCurrentPoints(0);
	setIsFirstCourse(true);
	setAverageMark(0);
	setCourseCounter(0);
}


Student::Student(unsigned short int &ID, string &Name, string &CurrentCourse, unsigned short int CurrentPoints, bool IsFirstCourse)
	:Person(ID, Name, CurrentCourse)
{
	setCurrentPoints(CurrentPoints);
	setIsFirstCourse(IsFirstCourse);

}



Student::~Student()
{
	//ifdef demonstration
#ifdef DEBUG_MODE
	cout << "Object from class Student is destroyed!" << endl;
#endif // DEBUG_MODE
}



//setters
void Student::setCurrentPoints(unsigned short int CurrentPoints)
{
	this->_currentPoints = CurrentPoints;
}

void Student::setIsFirstCourse(bool IsFirstCourse)
{
	this->_isFirstCourse = IsFirstCourse;
}

void Student::setAverageMark(float AverageMark)
{
	this->_averageMark = AverageMark;
}

void Student::setCourseCounter(unsigned short int CourseCounter)
{
	this->_courseCounter = CourseCounter;
}

//getters
unsigned short int Student::getCurrentPoints()
{
	return this->_currentPoints;
}

bool Student::getIsFirstCourse()
{
	return this->_isFirstCourse;
}

float Student::getAverageMark()
{
	return this->_averageMark;
}

unsigned short int Student::getCourseCounter()
{
	return this->_courseCounter;
}



//custom function implementation
void Student::averageMarkBuilder()
{
	if (this->getIsFirstCourse())
	{
		this->_averageMark = 0;
	}
	else
	{
		cout << "Enter the students with ID:" << this->getID() << " courses count: ";
		cin >> this->_courseCounter;
		this->_averageMark = 0;
		unsigned short int mark = 0;
		unsigned short int sum = 0;
		for (size_t i = 0; i < this->_courseCounter; i++)
		{
			
			cout << "Enter the course - " << i << " - mark: ";
			cin >> mark;
			sum = sum + mark;
			
		}

		this->_averageMark  = (float)sum / (float)this->_courseCounter;
	}
}

void Student::getData()
{
	cout << "Information about student with ID: " << this->getID() << endl;
	cout << "Name: " << this->getName() << endl;
	cout << "Current course: " << this->getCurrentCourse() << endl;
	cout << "Current points for the course: " << this->getCurrentPoints() << endl;
	cout << "Average evaluation mark: " << this->getAverageMark() << endl;
}

