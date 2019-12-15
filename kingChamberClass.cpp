/*********************************************************************
** Program name: Final Project Text-Based Game
** Author: Eric Riemer
** Date: 11/24/2017
** Description: KingChamber Class Implementation File
*********************************************************************/

#include "kingChamberClass.hpp"

	//Constructor
	KingChamber::KingChamber(){}
	
	//Destructor
	KingChamber::~KingChamber(){}
	
	//interact with the room
	int KingChamber::interact(Player* p1)
	{
		int choice, choice2;
		Menu menu;
		
		cout << endl << "You are in the King's Chambers. The King is out at the moment." << endl;
		cout << "1. Rifle through the King's desk drawers." << endl;
		cout << "2. Look through the King's Closet." << endl;
		cout << "3. Leave the King's Chambers." << endl;
		cout << "4. Quit and Exit Game" << endl;
		
		choice = menu.inputValidationMenu4();
		
		if (choice == 1)
		{
			cout << endl << "You find a half burned piece of paper that says 'password' on it." << endl;
			cout << "You are able to make out one of the letters of the password." << endl;
			
			p1->addLetter();
			
			cout << endl << "You have now collected the following " << endl;
			p1->printLetters();
			return 1;
		}
		
		else if (choice == 2)
		{
			cout << endl << "You search the closet and find a note in one of the jacket pockets." << endl;
			cout << "The note reads: 'I'll meet you in the dungeon. -K'" << endl;
			
			return 3;
		}
		
		else if (choice == 3)
		{
			cout << endl << "Where would you like to go?" << endl;
			cout << "1. Dungeon" << endl;
			cout << "2. Library" << endl;
			
			choice2 = menu.inputValidationMenu2();
			
			if (choice2 == 1)
			{
				p1->setLocation(right);
			}
			
			else if (choice2 == 2)
			{
				p1->setLocation(top);
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