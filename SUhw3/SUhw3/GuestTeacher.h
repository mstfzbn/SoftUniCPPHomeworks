
#include "Person.h"
class GuestTeacher :
	public Person
{
private:
	unsigned short int _coursesCounter;
	float _salaryForCourse;

	struct courses {
	string _s_currentCourse;
	float _s_salaryOfCourse;
	};
	courses _currentCourses[GUEST_TEACHER_COURSES_COUNT];
	

public:
	//default constructor
	GuestTeacher();
	//custom full range constructor
	GuestTeacher(unsigned short int&, string &, string &);
	//destructor
	~GuestTeacher();


	//setter
	void setSalaryForCourse(float);

	//getter
	float getSalaryForCourse();


	//function, who input all courses of guest teacher
	void coursesBuilder();
	//shows all courses of the guest teacher
	void coursesShow();

	//inhereted function from parent class
	virtual void getData();


};
