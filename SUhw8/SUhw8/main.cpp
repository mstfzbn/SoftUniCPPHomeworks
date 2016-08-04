//Title:C++ Programming Homework
//Microsoft Visual Studio 2015
//Date: 4.08.2016

#include "Components.hpp"

//Custom functions[search engines]:
void searchForACarWithRegistrationNumber(vector<Vehicle> carsContainer, string registration_number);
void searchForATruckWithRegistrationNumber(vector<Vehicle> trucksContainer, string registration_number);
void searchForAMotorcyclesWithRegistrationNumber(vector<Vehicle> motorcyclesContainer, string registration_number);

//Mutex object creation, used in functions for threads to lock shared components, like console output 
mutex mtx;

//Main function
int main(int argc, const int * argv[])
{

#ifdef DEBUG //in Debug mode that shows program execution time
	clock_t startTime;
	startTime = clock();
#endif // DEBUG

	vector<Vehicle> carsContainer;
	vector<Vehicle> trucksContainer;
	vector<Vehicle> motorcyclesContainer;


	Date carFirstReg(12, 06, 1990);
	Date carCountryReg(2, 5, 1994);
	Vehicle car("CM5774MC", 1.4, 4, "123", "456", "Car Driver", carFirstReg, carCountryReg);

	Date truckFirstReg(21, 12, 2001);
	Date truckCountryReg(2, 8, 2012);
	Vehicle truck("C9094MA", 3.4, 2, "789", "101112", "Truck Driver", truckFirstReg, truckCountryReg);

	Date motoFirstReg(25, 9, 2014);
	Date motoCountryReg(2, 4, 2015);
	Vehicle moto("B9006AA", 0.3, 1, "121314", "151617", "Moto Driver", motoFirstReg, motoCountryReg);
	
	
	carsContainer.push_back(car);
	trucksContainer.push_back(truck);
	motorcyclesContainer.push_back(moto);
		
	//container, which holds all threads for easy managment
	vector<thread*> threadsVector;
		
	//thread creation, for every function different thread
	//after this point all functions will start working
	thread carsSearchEngine( searchForACarWithRegistrationNumber, carsContainer, "CM5774MC" );
	thread trucksSearchEngine( searchForATruckWithRegistrationNumber, trucksContainer, "C9094MA" );
	thread motorcyclesSearchEngine( searchForAMotorcyclesWithRegistrationNumber, motorcyclesContainer, "B9006AA" );
	
	//put all created threads in vector
	threadsVector.push_back(&carsSearchEngine);
	threadsVector.push_back(&trucksSearchEngine);
	threadsVector.push_back(&motorcyclesSearchEngine);
	
	//complete all active threads
	for (size_t i = 0; i < threadsVector.size(); i++)
	{
		threadsVector.at(i)->join();
	}
	
	cout << "\nSorry for simple user interface..\n\n";

#ifdef DEBUG  //in Debug mode that shows program execution time
	startTime = clock() - startTime;
	cout << "\nPROGRAM execution time is: " << ((float)startTime) / CLOCKS_PER_SEC << " seconds.\n" << endl;
#endif // DEBUG

	return 0;
}


//custom functions [search engines]
void searchForACarWithRegistrationNumber(vector<Vehicle> carsContainer, string registration_number)
{
	for_each(carsContainer.begin(), carsContainer.end(), [=](Vehicle car)
	{
		if (car.getRegistrationNumber() == registration_number)
		{
			mtx.lock();
			cout << "Car owner: " << car.getOwner() << endl;
			mtx.unlock();
		}
	});
}


void searchForATruckWithRegistrationNumber(vector<Vehicle> trucksContainer, string registration_number)
{
	for_each(trucksContainer.begin(), trucksContainer.end(), [=](Vehicle truck)
	{
		if (truck.getRegistrationNumber() == registration_number)
		{
			mtx.lock();
			cout << "Truck owner: " << truck.getOwner() << endl;
			mtx.unlock();
		}
	});
}


void searchForAMotorcyclesWithRegistrationNumber(vector<Vehicle> motorcyclesContainer, string registration_number)
{
	for_each(motorcyclesContainer.begin(), motorcyclesContainer.end(), [=](Vehicle moto)
	{
		if (moto.getRegistrationNumber() == registration_number)
		{
			mtx.lock();
			cout << "Motorcycle owner: " << moto.getOwner() << endl;
			mtx.unlock();
		}
	});
}