#pragma once
#include "Includes.h"
#include "Defines.h"
#include "Character.h"
#include "Environment.h"


class JumpCalculator
{
private:
	struct tempObject
	{
		double _s_gravity;
		float _s_mass;
		float _s_jumpSpeed;
	};

	tempObject _tempObject;
public:

	//constructor
	JumpCalculator();
	
	//destructor
	~JumpCalculator();


	//custom functions
	void setCharacter(Character &);
	void setEnvironment(Environment &);

	void resetTempObject();
		
	
	float getMaximumJump();

	float getTimeOfJump();
	
	bool doubleJumpCapability();

	void showCalculations();




};

