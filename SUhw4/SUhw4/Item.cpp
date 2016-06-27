#include "Item.h"



Item::Item()
{
	this->setCode("");
	this->setValue(0);
}

Item::Item(string code, float value)
{
	this->setCode(code);
	this->setValue(value);
}

Item::Item(Item & rhs)
{
	this->_code = rhs._code;
	this->_value = rhs._value;
}

Item::~Item()
{
#ifdef DEBUG //Debug mode, for testing purposes
	cout << "Object from class Item is destroyed!" << endl;
#endif // DEBUG
}

Item & Item::operator=(Item & rhs)
{
	this->_code = rhs._code;
	this->_value = rhs._value;

	return *this;
}

void Item::setCode(string code)
{
	this->_code = code;
}

void Item::setValue(float value)
{
	this->_value = value;
}

string Item::getCode()
{
	return this->_code;
}


float Item::getValue()
{
	return this->_value;
}







