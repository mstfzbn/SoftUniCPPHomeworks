#include "Customer.h"



Customer::Customer()
{
	this->_bill.setPurchases(0);
	this->_bill.setGiven(0);
	this->_bill.setChange(0);
}



Customer::Customer(Customer & rhs)
{
	this->_bill._purchases = rhs._bill._purchases;
	this->_bill._given = rhs._bill._given;
	this->_bill._change = rhs._bill._change;
}

Customer::~Customer()
{
#ifdef DEBUG
	cout << "Object from class Customer is destroyed!" << endl;
#endif // DEBUG
}

Customer & Customer::operator+(Item & rhs)
{
	this->_bill._purchases = this->_bill._purchases + rhs.getValue();
	return *this;
}

Customer & Customer::operator=(Customer & rhs)
{
	this->_bill._purchases = rhs._bill._purchases;
	this->_bill._given = rhs._bill._given;
	this->_bill._change = rhs._bill._change;

	return *this;
}

void Customer::clearTotalValue()
{
	this->_bill.setPurchases(0);
}

void Customer::showTotalValue()
{
	cout << "\nCustomers total value:" << this->_bill.getPurchases() << endl;
}

void Customer::calculateAndShowChange()
{
	float amountOfmoney = 0;
	
	cout << "Please enter the amount of money:";
	cin >> amountOfmoney;
	
	while (amountOfmoney < 0)
	{
		cout << "The value must be a positive number!" << endl;
		cin >> amountOfmoney;
	}

	this->_bill.setGiven(this->_bill.getGiven() + amountOfmoney);

	if (this->_bill.getPurchases() == 0)
	{
		cout << "The change is 0 leva. You dont have any itmes on your shopping cart and your money is safe!" << endl;
	}
	else
	{
		while (this->_bill.getGiven() < this->_bill.getPurchases())
		{
			cout << "Go deeper in your pocket and grab more cash!" << endl;
			cout << "You need more " << abs(this->_bill.getGiven() - this->_bill.getPurchases()) << " leva." << endl;
			cout << "Enter the value of money:";
			cin >> amountOfmoney;

			while (amountOfmoney < 0)
			{
				cout << "The value must be a positive number!" << endl;
				cin >> amountOfmoney;
			}
			this->_bill.setGiven(this->_bill.getGiven() + amountOfmoney);
		}

		this->_bill.setChange(this->_bill.getGiven() - this->_bill.getPurchases());
		cout << "The change is " << this->_bill.getChange() << endl;
	}
}

void Customer::showPurchase()
{
	cout << "\nCandyShop\nBIC:12345678\nAddress:Somewhere in the middle of nowhere\nPurchases:" << this->_bill.getPurchases()
		<< " leva\nGiven:" << this->_bill.getGiven() << "\nChange:" << this->_bill.getChange() << endl;
}

