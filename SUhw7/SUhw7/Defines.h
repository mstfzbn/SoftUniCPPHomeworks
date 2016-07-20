#pragma once
//Program constants
#define DEBUG
#define PRIME_NUMBERS_MAX_RANGE 500
#define MAX_NUMBER_IN_FIBONACCIS_SEQUENCE_THAT_WORKS 12200160415121876738
#define MILLISECONDS_MULTIPLIER 100
// _UI64_MAX

//Mutex object creation, used in functions for threads to lock shared components, like console output 
mutex mtx;

//Clock object, used to hold time and calculating the execution time of something
static clock_t startTime;
