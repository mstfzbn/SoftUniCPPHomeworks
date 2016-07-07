#include "Character.h"



Character::Character()
{
	this->setName("");
	this->setMass(0);
	this->setJumpSpeed(0);
	this->setIdentifier(0);
}

Character::Character(string newName, float newMass, float newJumpSpeed, unsigned int newIdentifier)
{
	this->setName(newName);
	this->setMass(newMass);
	this->setJumpSpeed(newJumpSpeed);
	this->setIdentifier(newIdentifier);
}

Character::Character(const Character & rhs)
{
	this->_name = rhs._name;
	this->_mass = rhs._mass;
	this->_jumpSpeed = rhs._jumpSpeed;
	this->_identifier = rhs._identifier;
}

Character::~Character()
{
#ifdef DEBUG
	cout << "Object from class Character is destroyed!" << endl;
#endif // DEBUG
}


Character & Character::operator=(const Character & rhs)
{
	this->_name = rhs._name;
	this->_mass = rhs._mass;
	this->_jumpSpeed = rhs._jumpSpeed;
	this->_identifier = rhs._identifier;
	return *this;
}


void Character::setName(string newName)
{
	this->_name = newName;
}

void Character::setMass(float newMass)
{
	this->_mass = newMass;
}

void Character::setJumpSpeed(float newJumpSpeed)
{
	this->_jumpSpeed = newJumpSpeed;
}

void Character::setIdentifier(unsigned int newIdentifier)
{
	this->_identifier = newIdentifier;
}


string Character::getName()
{
	return this->_name;
}

float Character::getMass()
{
	return this->_mass;
}

float Character::getJumpSpeed()
{
	return this->_jumpSpeed;
}

unsigned int Character::getIdentifier()
{
	return this->_identifier;
}













