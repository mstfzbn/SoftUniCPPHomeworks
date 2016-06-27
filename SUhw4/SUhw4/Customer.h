#pragma once
#include "Item.h"
#include "Bill.h"

class Customer
{
private:
	Bill _bill;
	
public:

	//default constructor
	Customer();

	//copy constructor
	Customer(Customer &);

	//destructor
	~Customer();

	//operator+ for different classes 
	//[in this programm, that will be add the item's value to the customers purchase]
	Customer & operator+(Item &);

	//operator= for same class
	Customer & operator=(Customer &);

	//custom functions
	void clearTotalValue();

	void showTotalValue();

	void calculateAndShowChange();

	void showPurchase();





};

