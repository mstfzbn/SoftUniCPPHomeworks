#pragma once
#include "Includes.h"
#include "Defines.h"

class Environment
{
private:

public:
	string _name;
	double _gravity;   //in m/s^2
	unsigned int _identifier;
	//default constructor
	Environment();
	
	//full range custom constructor
	Environment(string, unsigned short int, unsigned int);

	//destrtuctor
	~Environment();


	//setters
	void setName(string);
	void setGravity(unsigned short int);
	void setIdentifier(unsigned int);


	//getters
	string getName();
	double getGravity();
	unsigned int getIdentifier();
	
};

