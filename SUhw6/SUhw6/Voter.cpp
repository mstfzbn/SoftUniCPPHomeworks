#include "Voter.h"



Voter::Voter()
{
	this->setAge(0);
	this->setName("");
	this->setGender(0);
	this->setLivingPlace("");
	this->setEthnos("");
	this->setVote(0);
}


Voter::Voter(unsigned short int newAge, string newName, unsigned short int newGender, string newLivingPlace, string newEthnos, unsigned short int newVote)
{
	this->setAge(newAge);
	this->setName(newName);
	this->setGender(newGender);
	this->setLivingPlace(newLivingPlace);
	this->setEthnos(newEthnos);
	this->setVote(newVote);
}

Voter::~Voter()
{
#ifdef DEBUG
	cout << "Object from class Voter is destroyed!" << endl;
#endif // DEBUG
}


void Voter::setAge(unsigned short int newAge)
{
	this->_age = newAge;
}

void Voter::setName(string newName)
{
	this->_name = newName;
}

void Voter::setGender(unsigned short int newGender)
{
	this->_gender = newGender;
}

void Voter::setLivingPlace(string newLivingPlace)
{
	this->_livingPlace = newLivingPlace;
}

void Voter::setEthnos(string newEthnos)
{
	this->_ethnos = newEthnos;
}

void Voter::setVote(unsigned short int newVote)
{
	this->_vote = newVote;
}


unsigned short int Voter::getAge()
{
	return this->_age;
}

string Voter::getName()
{
	return this->_name;
}

unsigned short int Voter::getGender()
{
	return this->_gender;
}

string Voter::getLivingPlace()
{
	return this->_livingPlace;
}

string Voter::getEthnos()
{
	return this->_ethnos;
}

unsigned short int Voter::getVote()
{
	return this->_vote;
}

Voter & Voter::operator=(const Voter & rightHandSide)
{
	this->_age = rightHandSide._age;
	this->_ethnos = rightHandSide._ethnos;
	this->_gender = rightHandSide._gender;
	this->_livingPlace = rightHandSide._livingPlace;
	this->_name = rightHandSide._name;
	this->_vote = rightHandSide._vote;

	return *this;
}









