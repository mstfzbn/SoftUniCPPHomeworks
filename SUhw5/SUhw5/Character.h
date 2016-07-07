#pragma once
#include "Includes.h"
#include "Defines.h"

class Character
{
private:

public:
	string _name;
	float _mass;      //in kg
	float _jumpSpeed; //in km/h
	unsigned int _identifier;

	//default constructor
	Character();
	
	//full range constructor
	Character(string, float, float, unsigned int);

	//copy constructor
	Character(const Character &);

	//destructor
	~Character();

	
	//operator predefinition
	Character & operator=(const Character &);


	//setters
	void setName(string);
	void setMass(float);
	void setJumpSpeed(float);
	void setIdentifier(unsigned int);

	//getters
	string getName();
	float getMass();
	float getJumpSpeed();
	unsigned int getIdentifier();
	

};

