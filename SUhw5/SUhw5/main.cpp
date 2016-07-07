//Title:C++ Programming Homework 5
//Cohezion and encapsulation
//Author: Mustafa Zaban
//Microsoft Visual Studio 2015
//Date: 06.07.2016




#include "Components.h"


int main()
{
	Character unit("Child", 65, 90, 1);
	Environment world("Earth", EARTH, 5);
	JumpCalculator jumpCalculator;

	


	jumpCalculator.setCharacter(unit);
	jumpCalculator.setEnvironment(world);


	jumpCalculator.showCalculations();





	return 0;
}