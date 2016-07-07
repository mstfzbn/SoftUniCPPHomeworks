#pragma once
//Header file, which holds all program defines, global constants and enumerators
#define DEBUG

//custom program constants
#define EARTH_GRAVITY 9.8  //in m/s^2
#define MOON_GRAVITY 1.63  //in m/s^2



//enumerator for enivornments, used when gravity is setted
enum planet
{
	EARTH,
	MOON,
	COUNT_OF_PLANETS
};