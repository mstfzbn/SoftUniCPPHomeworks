//Title:C++ Programming Homework 2
//contain class building
//Author: Mustafa Zaban
//Microsoft Visual Studio 2015
//Date: 13.06.2016


#include "Building.h" //include for custom class, wich have all other chained libraries

//major function
int main()
{

	//creating custom class objects
	Building FirstBuilding("XYZ industries", 6, 127, 600, 196);
	Building SecondBuilding("Rapid Development Crew", 8, 210, 822, 85);
	Building ThirdBuilding("SoftUni", 11, 106, 200, 60);

	//creating container  with custom class objects
	Building businesspark[NUMBER_OF_BUILDINGS] = { FirstBuilding, SecondBuilding, ThirdBuilding };

	//temporary variables
	string tempCompanyName = "";
	float mostemployes = 0;

	//setting default values to temporary variables
	tempCompanyName = businesspark[0].getCompanyname();
	mostemployes = businesspark[0].getEmployees();

	//investigating the container for searched results
	for (size_t i = 1; i < NUMBER_OF_BUILDINGS; i++)
	{
		if (mostemployes < businesspark[i].getEmployees())
		{
			tempCompanyName = businesspark[i].getCompanyname();
			mostemployes = businesspark[i].getEmployees();
		}

	}

	//printing the reusult
	cout << "The company with most employees is " << tempCompanyName << endl;


	//reseting the temporary variable and creating new one
	tempCompanyName = businesspark[0].getCompanyname();
	float mostfreeplaces = 0;
	mostfreeplaces = businesspark[0].getfreeWorkingSeats();

	//investigating the container for searched results
	for (size_t i = 1; i < NUMBER_OF_BUILDINGS; i++)
	{
		if (mostfreeplaces < businesspark[i].getfreeWorkingSeats())
		{
			tempCompanyName = businesspark[i].getCompanyname();
			mostfreeplaces = businesspark[i].getfreeWorkingSeats();
		}

	}

	//printing the reusult
	cout << "The company with most free places is " << tempCompanyName << endl;
	
	// same story to the end.....


	tempCompanyName = businesspark[0].getCompanyname();
	float highestcoefficient = 0;
	highestcoefficient = businesspark[0].coefficientCalculation();

	for (size_t i = 1; i < NUMBER_OF_BUILDINGS; i++)
	{
		if (highestcoefficient < businesspark[i].peoplePerOffice())
		{
			tempCompanyName = businesspark[i].getCompanyname();
			highestcoefficient = businesspark[i].peoplePerOffice();
		}

	}

	cout << "The company with highest coefficient employess/(employees + free seats) is " << tempCompanyName << endl;


	tempCompanyName = businesspark[0].getCompanyname();
	float peopleperfloor = 0;
	peopleperfloor = businesspark[0].peoplePerFloor();

	for (size_t i = 1; i < NUMBER_OF_BUILDINGS; i++)
	{
		if (peopleperfloor < businesspark[i].peoplePerFloor())
		{
			tempCompanyName = businesspark[i].getCompanyname();
			peopleperfloor = businesspark[i].peoplePerFloor();
		}

	}


	cout << "The company with most people per floor is " << tempCompanyName << endl;


	tempCompanyName = businesspark[0].getCompanyname();
	peopleperfloor = businesspark[0].peoplePerFloor();

	for (size_t i = 1; i < NUMBER_OF_BUILDINGS; i++)
	{
		if (peopleperfloor > businesspark[i].peoplePerFloor())
		{
			tempCompanyName = businesspark[i].getCompanyname();
			peopleperfloor = businesspark[i].peoplePerFloor();
		}

	}


	cout << "The company with least people per floor is " << tempCompanyName << endl;




	tempCompanyName = businesspark[0].getCompanyname();
	float officesperfloor = 0;
	officesperfloor = businesspark[0].officesPerFloor();

	for (size_t i = 1; i < NUMBER_OF_BUILDINGS; i++)
	{
		if (officesperfloor < businesspark[i].officesPerFloor())
		{
			tempCompanyName = businesspark[i].getCompanyname();
			officesperfloor = businesspark[i].officesPerFloor();
		}

	}

	cout << "The company with most offices per floor is " << tempCompanyName << endl;



	tempCompanyName = businesspark[0].getCompanyname();
	officesperfloor = businesspark[0].officesPerFloor();

	for (size_t i = 1; i < NUMBER_OF_BUILDINGS; i++)
	{
		if (officesperfloor > businesspark[i].officesPerFloor())
		{
			tempCompanyName = businesspark[i].getCompanyname();
			officesperfloor = businesspark[i].officesPerFloor();
		}

	}

	cout << "The company with least offices per floor is " << tempCompanyName << endl;

	tempCompanyName = businesspark[0].getCompanyname();
	float peopleperoffice = 0;
	peopleperoffice = businesspark[0].peoplePerOffice();

	for (size_t i = 1; i < NUMBER_OF_BUILDINGS; i++)
	{
		if (peopleperoffice < businesspark[i].peoplePerOffice())
		{
			tempCompanyName = businesspark[i].getCompanyname();
			peopleperoffice = businesspark[i].peoplePerOffice();
		}

	}


	cout << "The company with most people per office is " << tempCompanyName << endl;

	tempCompanyName = businesspark[0].getCompanyname();
	peopleperoffice = businesspark[0].peoplePerOffice();

	for (size_t i = 1; i < NUMBER_OF_BUILDINGS; i++)
	{
		if (peopleperoffice > businesspark[i].peoplePerOffice())
		{
			tempCompanyName = businesspark[i].getCompanyname();
			peopleperoffice = businesspark[i].peoplePerOffice();
		}

	}

	cout << "The company with least people per office is " << tempCompanyName << endl;

	
	

	cout << "\n\nThe Destructors will be called.. \n\n";
	//destructor message showing
	//sorry for missing methods, wich representing investigating the container for searched results
	return 0;
}


