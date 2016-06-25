#include "GuestTeacher.h"



GuestTeacher::GuestTeacher()
{
	this->setID(0);
	this->setName("");
	this->setCurrentCourse("");
	this->_coursesCounter = 0;
}

GuestTeacher::GuestTeacher(unsigned short int &ID, string &Name, string &CurrentCourse):Person(ID,Name,CurrentCourse)
{
}

GuestTeacher::~GuestTeacher()
{
#ifdef DEBUG_MODE
	cout << "Object from class GuestTeacher is destroyed!" << endl;
#endif // DEBUG_MODE
}


void GuestTeacher::setSalaryForCourse(float salary)
{
	this->_salaryForCourse = salary;
}

float GuestTeacher::getSalaryForCourse()
{
	return this->_salaryForCourse;
}



void GuestTeacher::coursesBuilder()
{
	cout << "Enter the guest teachers with ID:" << this->getID() << " count of other courses: ";
	
	cin >> _coursesCounter;
	courses tempCoursesObject;
	
	
	for (size_t i = 0; i < _coursesCounter; i++)
	{
		cout << "Enter the course - " << i << " - name: ";
		
		
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //used when getline skips [discard characters until newline is found]
		
		getline(cin, tempCoursesObject._s_currentCourse);

		
		cout << "Enter the course - " << i << " - salary: ";
		cin >> tempCoursesObject._s_salaryOfCourse;
		_currentCourses[i] = tempCoursesObject;
	}
}

void GuestTeacher::coursesShow()
{
	if (this->_coursesCounter > 0) 
	{
		cout << "All courses of guest teacher " << this->getName() << endl;
		for (size_t i = 0; i < _coursesCounter; i++)
		{
			cout << "Course " << _currentCourses[i]._s_currentCourse << " with salary for him - " << _currentCourses[i]._s_salaryOfCourse << endl;
		}
	}
	else
	{
		//do nothing
	}
}


void GuestTeacher::getData()
{
	cout << "Information about guest teacher with ID: " << this->getID() << endl;
	cout << "Name: " << this->getName() << endl;
	cout << "Current course: " << this->getCurrentCourse() << endl;
	cout << "Salary for course: " << this->getSalaryForCourse() << endl;
	this->coursesShow();
}