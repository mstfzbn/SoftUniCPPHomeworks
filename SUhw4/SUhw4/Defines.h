#pragma once
//Header file, which includs all constants, defines, enumerators of the program

//DEFINES
#define DEBUG //program constant, that activate or deactivate debug mode
#define NUMBER_OF_ITEMS_IN_STORE 10



//ENUMERATORS
enum program_states
{
	OTHER,
	SEARCH_FOR_ITEM,
	CLEAR_TOTAL_VALUE,
	SHOW_TOTAL_VALUE,
	INPUT_MONEY_AND_CALCULATE_PURCHASE,
	CHANGE_ITEMS_PRICE,
	SHOW_CUSTOMERS_PURCHASE,
	ADD_NEW_CUSTOMER,
	EXIT
};
