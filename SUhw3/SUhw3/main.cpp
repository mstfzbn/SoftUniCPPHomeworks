//Title:C++ Programming Homework 3
//Author: Mustafa Zaban
//Microsoft Visual Studio 2015
//Date: 20.06.2016

#include "Components.h" //custom header, which contaions all header files and libraries


//take user request
unsigned short int request();

int main()
{
	//program containers
	Student *studentsDataBase[MAX_STUDENTS];
	Teacher *teachersDataBase[MAX_TEACHERS];
	GuestTeacher *guestTeachersDataBase[MAX_GUEST_TEACHERS];
	
	//counter, which holds the amount of students, teachers and guest teachers
	unsigned short int studentsCounter = 0;
	unsigned short int teachersCounter = 0;
	unsigned short int guestTeachersCounter = 0;


	//temp variables
	int ID = 0;
	string name = "";
	string currentCourse = "";
	int currentPoints = 0;
	int isFirstCourse = 0;
	float monthlySalary = 0;
	int daysPassed = 0;
	float salaryForCourse = 0;
	bool notFaundet = true;

	
	cout << "Programs starts..." << endl;


	//state switcher
	int state = 0;
	//getting the value from user
	state = request();



	//program loop
	while (state != Exit) 
	{
		//reseting
		ID = 0;
		name = "";
		currentCourse = "";
		currentPoints = 0;
		monthlySalary = 0;
		daysPassed = 0;
		salaryForCourse = 0;
		notFaundet = true;


		//program states
		switch (state)
		{
		case(Get_Data_For_Student_With_ID):
		{
			cout << "\nEnter students ID:";
			cin >> ID;
			for (size_t i = 0; i < studentsCounter; i++)
			{
				if (ID == studentsDataBase[i]->getID()) //searching for ID
				{
					studentsDataBase[i]->getData();    //show foundet ID
					notFaundet = false;
				}
			}
			if (notFaundet)
			{
				cout << "No student with that ID. Try another one!" << endl;  //message shown in case of no searched ID in database
			}
		}
			break;

		case(Get_Data_For_Teacher_With_ID):
		{
			cout << "\nEnter teachers ID:";
			cin >> ID;
			for (size_t i = 0; i < teachersCounter; i++)
			{
				if (ID == teachersDataBase[i]->getID())
				{
					teachersDataBase[i]->getData();
					notFaundet = false;
				}
			}
			if (notFaundet)
			{
				cout << "No teacher with that ID. Try another one!" << endl;
			}
		}
			break;

		case(Get_Data_For_Guest_Teacher_With_ID):
		{
			cout << "\nEnter guest teachers ID:";
			cin >> ID;
			for (size_t i = 0; i < guestTeachersCounter; i++)
			{
				if (ID == guestTeachersDataBase[i]->getID())
				{
					guestTeachersDataBase[i]->getData();
					notFaundet = false;
				}
			}
			if (notFaundet)
			{
				cout << "No guest teacher with that ID. Try another one!" << endl;
			}
		}
			break;

		case(Add_Data_For_New_Student):
		{
			studentsCounter++;    //counter for students

			Student *tempStudent = new Student;   //creating a new object

			//input students details
			cout << "\nEnter students ID(0-65535):";
			cin >> ID;
			while (ID < 0 || ID > 65535) //input filtring
			{
				cout << "\nEnter students ID(0-65535):";
				cin >> ID;
			}
			cout << "Enter studnets name:";
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			getline(cin, name);
			cout << "Enter curent course(write only one course):";
			getline(cin, currentCourse);
			cout << "Enter current points for the course(0-100):";
			cin >> currentPoints;
			while (currentPoints < 0 || currentPoints > 100) //input filtring
			{
				cout << "Enter current points for the course(0-100):";
				cin >> currentPoints;
			}
			cout << "Is that the first course of student? Yes - 1, No - 0:";
			cin >> isFirstCourse;
			while (isFirstCourse < 0 || isFirstCourse > 1) //input filtring
			{
				cout << "Is that the first course of student? Yes - 1, No - 0:";
				cin >> isFirstCourse;
			}

			//asign details to the new object
			tempStudent->setID(ID);
			tempStudent->setName(name);
			tempStudent->setCurrentCourse(currentCourse);
			tempStudent->setCurrentPoints(currentPoints);



			if (isFirstCourse == 0)
			{
				tempStudent->setIsFirstCourse(false);
				tempStudent->averageMarkBuilder();
			}


			//puting the new object in the array, whuch holds all students
			studentsDataBase[studentsCounter - 1] = tempStudent;
			
		}
			
			break;

		case(Add_Data_For_New_Teacher):
		{
			teachersCounter++;
			Teacher *tempTeacher = new Teacher;
			cout << "\nEnter teachers ID(0-65535):";
			cin >> ID;
			while (ID < 0 || ID > 65535)
			{
				cout << "\nEnter teachers ID(0-65535):";
				cin >> ID;
			}
			cout << "Enter teachers name:";
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			getline(cin, name);
			cout << "Enter curent course(write only one course):";
			getline(cin, currentCourse);
			cout << "Enter monthly salary:";
			cin >> monthlySalary;
			cout << "Enter how many days have passed since he joined in SoftUni:";
			cin >> daysPassed;

			tempTeacher->setID(ID);
			tempTeacher->setName(name);
			tempTeacher->setCurrentCourse(currentCourse);
			tempTeacher->setMonthlySalary(monthlySalary);
			tempTeacher->setDaysPassed(daysPassed);


			teachersDataBase[teachersCounter - 1] = tempTeacher;
			
		}
			break;

		case(Add_Data_For_New_Guest_Teacher):
		{
			guestTeachersCounter++;
			GuestTeacher *tempGuestTeacher = new GuestTeacher;
			cout << "\nEnter guest teachers ID(0-65535):";
			cin >> ID;
			while (ID < 0 || ID > 65535)
			{
				cout << "\nEnter guest teachers ID(0-65535):";
				cin >> ID;
			}
			cout << "Enter guest teachers name:";
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			getline(cin, name);
			cout << "Enter curent course(write only one course):";
			getline(cin, currentCourse);
			cout << "Enter salary for course:";
			cin >> salaryForCourse;

			tempGuestTeacher->setID(ID);
			tempGuestTeacher->setName(name);
			tempGuestTeacher->setCurrentCourse(currentCourse);
			tempGuestTeacher->setSalaryForCourse(salaryForCourse);

			tempGuestTeacher->coursesBuilder();




			guestTeachersDataBase[guestTeachersCounter - 1] = tempGuestTeacher;
			
		}
			break;

		case(Exit):
		{
			cout << "Programs exits!!" << endl;
			break;
		}
		}
		//asking user to stay in program loop or exit
		state = request();

	}


	return 0;

}

unsigned short int request()
{
	cout << "\n\nProgram functions:" << endl;
	cout << "1. Get data for student with ID" << endl;
	cout << "2. Get data for teacher with ID" << endl;
	cout << "3. Get data for guest teacher with ID" << endl;
	cout << "4. Add data for new student" << endl;
	cout << "5. Add data for new teacher" << endl;
	cout << "6. Add data for new guest teacher" << endl;
	cout << "7. Exit" << endl;
	cout << "Enter a number for a wanted function: ";
	unsigned short int choice;
	cin >> choice;

	//choice loop
	while (choice < Get_Data_For_Student_With_ID || choice > Exit)
	{
		cin >> choice;
	}

	return choice;
}

