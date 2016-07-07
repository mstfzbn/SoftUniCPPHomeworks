#include "JumpCalculator.h"



JumpCalculator::JumpCalculator()
{
	this->_tempObject._s_gravity = 0;
	this->_tempObject._s_jumpSpeed = 0;
	this->_tempObject._s_mass = 0;
}


JumpCalculator::~JumpCalculator()
{
#ifdef DEBUG
	cout << "Object from class JumpCalculator is destroyed!" << endl;
#endif // DEBUG
}


void JumpCalculator::setCharacter(Character & rhs)
{
	this->_tempObject._s_jumpSpeed = rhs._jumpSpeed;
	this->_tempObject._s_mass = rhs._mass;
}

void JumpCalculator::setEnvironment(Environment & rhs)
{
	this->_tempObject._s_gravity = rhs._gravity;
}


void JumpCalculator::resetTempObject()
{
	this->_tempObject._s_gravity = 0;
	this->_tempObject._s_jumpSpeed = 0;
	this->_tempObject._s_mass = 0;
}


float JumpCalculator::getMaximumJump()
{
	//that calculation is illustrative
	return (_tempObject._s_gravity*this->getTimeOfJump())/1000;
}


float JumpCalculator::getTimeOfJump()
{
	//that calculation is illustrative
	return ((_tempObject._s_mass*_tempObject._s_gravity) / 2)/100;
}




bool JumpCalculator::doubleJumpCapability()
{
	//that balance is illustrative
	if (this->_tempObject._s_mass < this->_tempObject._s_jumpSpeed)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void JumpCalculator::showCalculations()
{

	cout << "Character's maximum jump height is: " << this->getMaximumJump() << " meters."<<endl;
	cout << "Character's time of jump is: " << this->getTimeOfJump() << " seconds."<< endl;

    //that balance is illustrative
	if (this->doubleJumpCapability())
	{
		cout << "Character can jump to second stair." << endl;
	}
	else
	{
		cout << "Character cant't jump to second stair." << endl;
	}
}