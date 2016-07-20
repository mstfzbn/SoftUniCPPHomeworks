#pragma once
#include "Includes.h"
#include "Defines.h"

class Voter
{
public:
	unsigned short int _age;
	string _name;
	unsigned short int _gender;
	string _livingPlace;
	string _ethnos;
	unsigned short int _vote;

public:

	//default constructor
	Voter();

	//full range custom constructor
	Voter(unsigned short int, string, unsigned short int, string, string, unsigned short int);

	//destructor
	~Voter();

	Voter & operator=(const Voter &);

	//setters
	void setAge(unsigned short int);
	void setName(string);
	void setGender(unsigned short int);
	void setLivingPlace(string);
	void setEthnos(string);
	void setVote(unsigned short int);

	//getters
	unsigned short int getAge();
	string getName();
	unsigned short int getGender();
	string getLivingPlace();
	string getEthnos();
	unsigned short int getVote();

};

