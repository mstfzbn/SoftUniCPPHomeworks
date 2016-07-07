#include "Environment.h"



Environment::Environment()
{
	this->setName("");
	this->setGravity(0);
	this->setIdentifier(0);
}

Environment::Environment(string newName, unsigned short int newPlanet, unsigned int newIdentifier)
{
	this->setName(newName);
	this->setGravity(newPlanet);
	this->setIdentifier(newIdentifier);
}

Environment::~Environment()
{
#ifdef DEBUG
	cout << "Object from class Environment is destroyed!" << endl;
#endif // DEBUG
}


void Environment::setName(string newName)
{
	this->_name = newName;
}

void Environment::setGravity(unsigned short int newPlanet)
{
	if (newPlanet == EARTH)
	{
		this->_gravity = EARTH_GRAVITY;
	}
	else if (newPlanet == MOON)
	{
		this->_gravity = MOON_GRAVITY;
	}
	else
	{
		this->_gravity = 0;
	}
}

void Environment::setIdentifier(unsigned int newIdentifier)
{
	this->_identifier = newIdentifier;
}


string Environment::getName()
{
	return this->_name;
}

double Environment::getGravity()
{
	return this->_gravity;
}

unsigned int Environment::getIdentifier()
{
	return this->_identifier;
}




