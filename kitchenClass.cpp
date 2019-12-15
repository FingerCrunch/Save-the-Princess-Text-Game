/*********************************************************************
** Program name: Final Project Text-Based Game
** Author: Eric Riemer
** Date: 11/24/2017
** Description: Kitchen Class Implementation File
*********************************************************************/

#include "kitchenClass.hpp"

	//Constructor
	Kitchen::Kitchen(){}
	
	//Destructor
	Kitchen::~Kitchen(){}
	
	//interact with the room
	int Kitchen::interact(Player* p1)
	{
		int choice, choice2;
		Menu menu;
		
		cout << endl << "You are in Kitchen. What would you like to do?" << endl;
		cout << "1. Look in the Pantry." << endl;
		cout << "2. Talk to the chef." << endl;
		cout << "3. Leave the Kitchen." << endl;
		cout << "4. Quit and Exit Game" << endl;
		
		choice = menu.inputValidationMenu4();
		
		if (choice == 1)
		{
			cout << endl << "You don't find anything." << endl;
			return 3;
		}
		
		else if (choice == 2)
		{
			cout << endl << "You walk over to the chef and ask him, " << endl;
			cout << "'Do you know how to get to the tower?'" << endl;
			cout << "The chef responds, 'I'm sorry, only the King knows that." << endl;
			cout << " I did, however, hear some of the royals talking the other day...'" << endl;
			cout << "The chef says something leading you to think of another letter in the password." << endl;
			
			p1->addLetter();
			
			cout << endl << "You have now collected the following " << endl;
			p1->printLetters();
			return 1;
		}
		
		else if (choice == 3)
		{
			cout << endl << "Where would you like to go?" << endl;
			cout << "1. Armory" << endl;
			cout << "2. Main Hall" << endl;
			cout << "3. Barracks" << endl;
			
			choice2 = menu.inputValidationMenu3();
			
			if (choice2 == 1)
			{
				p1->setLocation(top);
			}
			
			else if (choice2 == 2)
			{
				p1->setLocation(left);
			}
			
			else if (choice2 == 3)
			{
				p1->setLocation(bottom);
			}
			
			return 2;
		}
		
		else if (choice == 4)
		{
			return 5;
		}
		
		else 
		{
			return 0;
		}
	}