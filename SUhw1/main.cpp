//Title:C++ Programming Homework 1
//contain First and Second task
//Author: Mustafa Zaban
//Microsoft Visual Studio 2015
//Date: 01.06.2016




#include <iostream> //std::cout, std::cin         Standart input/output
#include <string>   //std::string                 String container library
#include <locale>   //std::islower, std::isupper  Character cheking functions
#include <iomanip>  //std::setprecision           Output formating functions

//standart std
using namespace std;

//used constant
#define phrasesCount 10

//custom functions
int allCharactersSum(int, int, int);
void resultMessage(string, int, string, int, string, int, string);

int main() {

	cout << "FIRST TASK\n\n"; //first part of homework

	//used variables
	char tempChar = ' ';
	unsigned short int lowerSymbols = 0;
	unsigned short int upperSymbols = 0;
	unsigned short int otherSymbols = 0;

	string myString = " ";
	string totalMessage = " ";
	string lowerCharsMessage = " ";
	string upperCharsMessage = " ";
	string otherCharsMessage = " ";
	
	string phrases[phrasesCount] = { "The string is from " ,
		                             " lower characters, " ,
		                             " lower character, ", 
		                             " upper characters and ",
		                             " upper character and ", 
		                             " other characters." ,
		                             " other character." ,
		                             "All characters in your string are ",
		                             "Your string contains only one character." , 
		                             "Your string is empty." };
	
	
	//program start point
	cout << "Input your stirng:";
	getline(cin, myString);


	//inputed string analyzing
	for (size_t i = 0; i < myString.size(); i++)
	{
		tempChar = myString[i];
		if (islower(tempChar))
		{
			lowerSymbols++;
		}
		else if(isupper(tempChar))
		{
			upperSymbols++;
		}
		else
		{
			otherSymbols++;
		}
	}


	//characters count calculating
	unsigned short int charactersSum = allCharactersSum(lowerSymbols, upperSymbols, otherSymbols);


	//otput phrases formating
	if (lowerSymbols != 1)
	{
		lowerCharsMessage = phrases[1];
	}
	else
	{
		lowerCharsMessage = phrases[2];
	}

	if (upperSymbols != 1)
	{
		upperCharsMessage = phrases[3];
	}
	else
	{
		upperCharsMessage = phrases[4];
	}

	if (otherSymbols != 1)
	{
		otherCharsMessage = phrases[5];
	}
	else
	{
		otherCharsMessage = phrases[6];
	}



	//major block
	if (charactersSum == 0 || charactersSum == 1)
	{
		if (charactersSum == 0)
		{
			totalMessage = phrases[9];

			cout << totalMessage << endl;
		}
		else
		{
			totalMessage = phrases[8];

			cout << totalMessage << endl;

			resultMessage(phrases[0], lowerSymbols, lowerCharsMessage, upperSymbols, upperCharsMessage, otherSymbols, otherCharsMessage);
		}
	}
	else
	{
		totalMessage = phrases[7];

		cout << totalMessage << charactersSum << "." << endl;

		resultMessage(phrases[0], lowerSymbols, lowerCharsMessage, upperSymbols, upperCharsMessage, otherSymbols, otherCharsMessage);

	}



	cout << "\n\nSECOND TASK\n";  //second part of homerwork
	
	//loops demonstrating 
	unsigned short int number = 0;

	do
	{
	    cout << "\nEnter a number between 0 and 10:";
		cin >> number;

	} while (number < 0 || number > 10);

	while (number <= 10)
	{
		cout << number << endl;
		number--;
	}

	//basic casting
	double PI = 3.14159265359;
	unsigned short int roundedPI = (int)PI;

	//output formating
	cout << setprecision(13) << "\nHere is the PI = " << PI;
	cout << " and here is rounded PI = " << roundedPI << endl;

	
	return 0;
}

int allCharactersSum(int lowers, int uppers, int others)
{
	return lowers + uppers + others;
}

void resultMessage(string firstPhrase, int lowers, string lowersPhrase, int uppers, string uppersPhrase, int others, string othersPhrase)
{
	cout << firstPhrase << lowers << lowersPhrase << uppers << uppersPhrase << others << othersPhrase << endl;
}