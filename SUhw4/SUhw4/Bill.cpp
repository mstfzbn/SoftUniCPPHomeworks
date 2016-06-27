#include "Bill.h"



Bill::Bill()
{
	setPurchases(0);
	setGiven(0);
	setChange(0);
}


Bill::~Bill()
{
#ifdef DEBUG
	cout << "Object from class Bill is destroyed!" << endl;
#endif // DEBUG
}

void Bill::setPurchases(float purchases)
{
	this->_purchases = purchases;
}

void Bill::setGiven(float given)
{
	this->_given = given;
}

void Bill::setChange(float change)
{
	this->_change = change;
}

float Bill::getPurchases()
{
	return this->_purchases;
}

float Bill::getGiven()
{
	return this->_given;
}

float Bill::getChange()
{
	return this->_change;
}












