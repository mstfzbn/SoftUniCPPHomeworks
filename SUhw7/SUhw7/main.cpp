//Title:C++ Programming Homework
//Multithreading
//Microsoft Visual Studio 2015
//Date: 20.07.2016

#include "Components.h"

//Custom functions:

//functions about time managment
void startTimeCatcher();
void showThreadExecutionTime();
void showCalculationExecutionTime();

//mathematical functions
void fibonaccisSequence();
void primeNumberFinder();


//Main function
int main(int argc, const int * argv[])
{

#ifdef DEBUG //in Debug mode that shows program execution time
	clock_t startTime;
	startTime = clock();
#endif // DEBUG

	//container, which holds all threads for easy managment
	vector<thread*> threadsVector;
	
	//thread creation, for every function different thread
	//after this point all functions will start working
	thread fibonacci(fibonaccisSequence);
	thread primeNumber(primeNumberFinder);

	//put all created threads in vector
	threadsVector.push_back(&fibonacci);
	threadsVector.push_back(&primeNumber);
	
	//complete all active threads
	for (size_t i = 0; i < threadsVector.size(); i++)
	{
		threadsVector.at(i)->join();
	}

#ifdef DEBUG  //in Debug mode that shows program execution time
	startTime = clock() - startTime;
	cout << "\nPROGRAM execution time is: " << ((float)startTime) / CLOCKS_PER_SEC << " seconds.\n" << endl;
#endif // DEBUG

	return 0;
}


//All custom functions implementation:

void startTimeCatcher()
{
	//catch the current clock
	startTime = clock();
}


void showThreadExecutionTime()
{
	unique_ptr<clock_t> overallTime(new clock_t);

	//calculate execution time [all humans and animals are safe, we execute only code]
	*overallTime = clock() - startTime;
	cout << "Thread execution time is: " << ((float)*overallTime) / CLOCKS_PER_SEC << " seconds.\n" << endl;
}


void showCalculationExecutionTime()
{
	unique_ptr<clock_t> overallTime(new clock_t);

	//calculate execution time [all humans and animals are safe, we execute only code]
	*overallTime = clock() - startTime;
	cout << (((float)*overallTime) / CLOCKS_PER_SEC) * MILLISECONDS_MULTIPLIER << " ms." << endl;
}

void fibonaccisSequence()
{
#ifdef DEBUG  //in Debug mode that shows function's execution time
	//start the timer for that thread
	startTimeCatcher();
#endif // DEBUG


	//temporary numbers for the Fibonacci's formula
	unsigned long long first = 1;
	unsigned long long second = 1;
	unsigned long long third = 0;

	//used to lock the console output for this thread
	mtx.lock();

	//Fibonacci's algorithm
	while (third != MAX_NUMBER_IN_FIBONACCIS_SEQUENCE_THAT_WORKS)
	{
		startTimeCatcher();
		third = first + second;

		cout << "Fibonacci " << third << ", ";
		
		first = second;
		second = third;
		
		showCalculationExecutionTime();
			
	}

	cout << "That is the C++ long long limit for Fibonacci's sequence!!\n";

	//unlocks console output for another threads
	mtx.unlock();

#ifdef DEBUG //in Debug mode that shows function's execution time
	showThreadExecutionTime();
#endif // DEBUG
}

void primeNumberFinder()
{
#ifdef DEBUG //in Debug mode that shows function's execution time
	startTimeCatcher();
#endif // DEBUG
	
	//used to lock the console output for this thread
	mtx.lock();

	//Prime numbers finder algorithm
	for (int i = 2; i < PRIME_NUMBERS_MAX_RANGE; i++)
	{
		startTimeCatcher();
		bool prime = true;
		for (int j = 2; j*j <= i; j++)
		{
			if (i % j == 0)
			{
				prime = false;
				break;
			}
		}
		if (prime) 
		{
		  	cout << "Prime " << i << ", ";
		    showCalculationExecutionTime();
	    }
	}

	//unlocks console output for another threads
	mtx.unlock();

#ifdef DEBUG //in Debug mode that shows function's execution time
	showThreadExecutionTime();
#endif // DEBUG
}