//Title:C++ Programming Homework 4
//Author: Mustafa Zaban
//Microsoft Visual Studio 2015
//Date: 27.06.2016

//Custom header file, which holds All other header files
#include "Components.h"





void showMenu();
unsigned short int request();
//major program function
int main()
{

	//creating an array with some items
	Item itemsDataBase[NUMBER_OF_ITEMS_IN_STORE];

	//filling the array's items with some values
	for (size_t i = 0; i < NUMBER_OF_ITEMS_IN_STORE; i++)
	{
		stringstream ss;
		
		//that fills an array items code with 10 same digits, example "7777777777"
		ss << i << i << i << i << i << i << i << i << i << i;
		
		string tempst = ss.str(); //converting stringstream to string
		itemsDataBase[i].setCode(tempst);
		
		//that sets some value to array items 
		itemsDataBase[i].setValue(i * 10 + 5);
	}

	//default variables
	string tempString = "";
	float tempValue = 0;
	Customer defaultCustomer;

	//copy constructor example
	Customer tempCustomer(defaultCustomer);
	bool foundet = true;


	//state variable
	unsigned short int state = 0;
	state = request();

	//operator= example
	tempCustomer = defaultCustomer;

	while (state != EXIT)
	{
				tempString = "";
				foundet = false;

		switch (state)
		{
		
			case(SEARCH_FOR_ITEM):
			{
				cout << "Enter the 10-digit item's code:";
				cin >> tempString;

				while (tempString.size() != 10)
				{
					cout << "Enter the 10-digit item's code:";
					cin >> tempString;
				}

				//searching in database for an item by code
				for (size_t i = 0; i < NUMBER_OF_ITEMS_IN_STORE; i++)
				{
					if (itemsDataBase[i].getCode() == tempString)
					{
						//operator+ between diferent classes example[add items value to customers total]
						tempCustomer + itemsDataBase[i];
						foundet = true;
					}
				}

				if (!foundet)
				{
					cout << "Item cannot be found!" << endl;
				}



			}
			break;

			case(CLEAR_TOTAL_VALUE):
			{
				cout << "Input \"C\" to clear total value:";
				cin >> tempString;
				while (tempString != "C")
				{
					cout << "Input \"C\" to clear total value:";
					cin >> tempString;
				}

				tempCustomer.clearTotalValue();
			}
			break;

			case(SHOW_TOTAL_VALUE):
			{
				cout << "Input \"T\" to show total value:";
				cin >> tempString;
				while (tempString != "T")
				{
					cout << "Input \"T\" to show total value:";
					cin >> tempString;
				}

				tempCustomer.showTotalValue();
			}
			break;

			case(INPUT_MONEY_AND_CALCULATE_PURCHASE):
			{
				tempCustomer.calculateAndShowChange();
			}
			break;

			case(CHANGE_ITEMS_PRICE):
			{
				cout << "Enter the 10-digit item's code:";
				cin >> tempString;

				while (tempString.size() != 10)
				{
					cout << "Enter the 10-digit item's code:";
					cin >> tempString;
				}

				//searching in database for an item by code
				for (size_t i = 0; i < NUMBER_OF_ITEMS_IN_STORE; i++)
				{
					if (itemsDataBase[i].getCode() == tempString)
					{
						cout << "Enter new value for item:";
						cin >> tempValue;
						itemsDataBase[i].setValue(tempValue);
						foundet = true;
					}
				}

				if (!foundet)
				{
					cout << "Item cannot be found!" << endl;
				}
			}
			break;

			case(SHOW_CUSTOMERS_PURCHASE):
			{
				tempCustomer.showPurchase();
			}
			break;

			case(ADD_NEW_CUSTOMER):
			{
				tempCustomer = defaultCustomer;
			}
			break;

			case(EXIT):
			{
				cout << "Program exits!!" << endl;
			}
			break;

		}

		state = request();
	}

	
	
	cout << endl;
	return 0;
}

void showMenu()
{
	cout << "\n\nProgram functions:" << endl;	
	cout << "1. Search for an item and add it's value to customers shopping cart." << endl;
	cout << "2. Clear total value." << endl;
	cout << "3. Display total value." << endl;
	cout << "4. Enter money and calculate the change." << endl;
	cout << "5. Change the price of an item." << endl;
	cout << "6. Show customer information about the purchase." << endl;
	cout << "7. Complete the customer and add a new one." << endl;
	cout << "8. Exit" << endl;
}


unsigned short int request()
{
	showMenu();
	unsigned short int tempChoice;
	cout << "Enter a number for a wanted function: ";
	cin >> tempChoice;
	while (tempChoice < SEARCH_FOR_ITEM || tempChoice > EXIT)
	{
		showMenu();
		cout << "Enter a number for a wanted function: ";
		cin >> tempChoice;
	}

	return tempChoice;

}