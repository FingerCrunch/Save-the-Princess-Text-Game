/*********************************************************************
** Program name: Final Project Text-Based Game
** Author: Eric Riemer
** Date: 11/24/2017
** Description: Armory Class Implementation File
*********************************************************************/

#include "armoryClass.hpp"

	//Constructor
	Armory::Armory(){}
	
	//Destructor
	Armory::~Armory(){}
	
	//interact with the room
	int Armory::interact(Player* p1)
	{
		int choice, choice2;
		Menu menu;
		
		cout << endl << "You are in the Armory. How would you like to proceed?" << endl;
		cout << "1. Investigate the rack of spears." << endl;
		cout << "2. Open the sword case and look at the King's sword." << endl;
		cout << "3. Leave the Armory." << endl;
		cout << "4. Quit and Exit Game" << endl;
		
		choice = menu.inputValidationMenu4();
		
		if (choice == 1)
		{
			cout << endl << "You approach the rack of spears and you notice there " << endl;
			cout << "is a piece of paper wrapped around one of them." << endl;
			cout << "You unwrap the piece of paper from around the spear and read it." << endl;
			cout << "By reading the paper, you discover one of the letters for the password." << endl;
			
			p1->addLetter();
			
			cout << endl << "You have now collected the following " << endl;
			p1->printLetters();
			return 1;
		}
		
		else if (choice == 2)
		{
			cout << endl << "You open the sword case and look at the golden writing on the King's sword." << endl;
			cout << "Clue: 'The path to the heavens requires pain and suffering'" << endl;
			return 3;
		}
		
		else if (choice == 3)
		{
			cout << endl << "Where would you like to go?" << endl;
			cout << "1. Courtyard" << endl;
			cout << "2. Kitchen" << endl;
			
			choice2 = menu.inputValidationMenu2();
			
			if (choice2 == 1)
			{
				p1->setLocation(left);
			}
			
			else if (choice2 == 2)
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