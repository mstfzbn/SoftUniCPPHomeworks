#pragma once
#include "Includes.h"
#include "Defines.h"

class Bill
{
public:
	float _purchases;
	float _given;
	float _change;
public:

	//default constructor
	Bill();

	//default destructor
	~Bill();

	//setters
	void setPurchases(float);
	void setGiven(float);
	void setChange(float);

	//getters
	float getPurchases();
	float getGiven();
	float getChange();




};

