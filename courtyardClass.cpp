/*********************************************************************
** Program name: Final Project Text-Based Game
** Author: Eric Riemer
** Date: 11/24/2017
** Description: Courtyard Class Implementation File
*********************************************************************/

#include "courtyardClass.hpp"

	//Constructor
	Courtyard::Courtyard(){}
	
	//Destructor
	Courtyard::~Courtyard(){}
	
	//interact with the room
	int Courtyard::interact(Player* p1)
	{
		int choice, choice2;
		Menu menu;
		
		cout << endl << "You are in the Courtyard. How would you like to proceed?" << endl;
		cout << "1. Explore the fountain in the middle of the courtyard." << endl;
		cout << "2. Leave the Courtyard." << endl;
		cout << "3. Quit and Exit Game" << endl;
		
		choice = menu.inputValidationMenu3();
		
		if (choice == 1)
		{
			cout << endl << "You approach the fountain and look at the surface of the water." << endl;
			cout << "You see no clues helping you on your quest." << endl;
			return 3;
		}
		
		else if (choice == 2)
		{
			cout << endl << "Where would you like to go?" << endl;
			cout << "1. Main Hall" << endl;
			cout << "2. Stables" << endl;
			cout << "3. Armory" << endl;
			
			choice2 = menu.inputValidationMenu3();
			
			if (choice2 == 1)
			{
				p1->setLocation(bottom);
			}
			
			else if (choice2 == 2)
			{
				p1->setLocation(left);
			}
			
			else if (choice2 == 3)
			{
				p1->setLocation(right);
			}
			
			return 2;
		}
		
		else if (choice == 3)
		{
			return 5;
		}
		
		else 
		{
			return 0;
		}
	}