//Title:C++ Programming Homework 6
//Brexit
//Microsoft Visual Studio 2015
//Date: 13.07.2016


//Saddly the program isNOT finished, only basic functionality showed
//I'm sorry about that!!!
//The next time more, I promise!!



#include "Components.h"


Voter createVoter();
unsigned short int ageFinderAndCollectorsActivator();
int main(int argc, const char * argv[])
{
	//containers
	vector<Voter*> votersContainer;
	unsigned short int programState = 0;

	
	programState = ageFinderAndCollectorsActivator();




	struct voteHold {
		int positive;
		int negative;
		int count;
	};
	

	while (programState != EXIT)
	{
		switch (programState)
		{
		case(VOTER_TERMINAL):
		{
			
			votersContainer.push_back(&createVoter());
			
			programState = ageFinderAndCollectorsActivator();
		}
		break;
		case(COLLECTORS_TERMINAL):
		{
			unique_ptr<voteHold> tempHolder(new voteHold);
			tempHolder->count = votersContainer.size();
			tempHolder->positive = 0;
			tempHolder->negative = 0;

			for (size_t i = 0; i < votersContainer.size(); i++)
			{
				if (votersContainer.at(i)->getVote() == POSITIVE)
				{
					tempHolder->positive++;
				}
				else
				{
					tempHolder->negative++;
				}
			}

			cout << "Positive vote: " << tempHolder->positive << endl;
			cout << "Negative vote: " << tempHolder->negative << endl;
			
			programState = ageFinderAndCollectorsActivator();
		}
		break;
		default:
			break;
		}
	}

	return 0;
}




Voter createVoter()
{
	unique_ptr<Voter> tempVoter(new Voter);

	int tempAge = 0;

	cout << "Please, input your age again: ";
	cin >> tempAge;
	while (tempAge < 18)
	{
		cout << "You must be over 18 to vote, the next!!" << endl;
		cout << "Input your age: ";
		cin >> tempAge;
	}

	tempVoter->_age = tempAge;

	cout << "Input your name:";
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //used when getline skips [discard characters until newline is found]

	getline(cin, tempVoter->_name);

	cout << "Input your gender 0 for woman or 1 for man:";
	cin >> tempVoter->_gender;

	cout << "Input your living place:";
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //used when getline skips [discard characters until newline is found]

	getline(cin, tempVoter->_livingPlace);
	cout << "Input your ethnos:";
	getline(cin, tempVoter->_ethnos);

	cout << "Input your vote [0 for Negative vote], [1 for Positive vote]:";
	cin >> tempVoter->_vote;


	return *tempVoter;
}

unsigned short int ageFinderAndCollectorsActivator()
{
	unsigned short int state;



	int tempAge = 0;

	cout << "Input your age: ";
	cin >> tempAge;
	while (tempAge < 18)
	{
		cout << "You must be over 18 to vote, the next!!" << endl;
		cout << "Input your age: ";
		cin >> tempAge;
	}

	if (tempAge != COLLECTORS_PASSWORD)
	{
		state = VOTER_TERMINAL;
	}
	else
	{
		state = COLLECTORS_TERMINAL;
	}

	return state;
}