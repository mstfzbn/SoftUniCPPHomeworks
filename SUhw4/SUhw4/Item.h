#pragma once
#include "Includes.h"
#include "Defines.h"

class Item
{
private:

	string _code;
	float _value;

public:

	//default constructor
	Item();

	//full range custom constructor
	Item(string, float);

	//cpoy constructor
	Item(Item &);

	//destructor
	~Item();

	//operator=
	Item & operator=(Item &);

	//setters
	void setCode(string);
	void setValue(float);

	//getters
	string getCode();
	float getValue();



};

