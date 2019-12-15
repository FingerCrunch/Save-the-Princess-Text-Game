/*********************************************************************
** Program name: Final Project Text-Based Game
** Author: Eric Riemer
** Date: 11/24/2017
** Description: Barracks Class Implementation File
*********************************************************************/

#include "barracksClass.hpp"

	//Constructor
	Barracks::Barracks(){}
	
	//Destructor
	Barracks::~Barracks(){}
	
	//interact with the room
	int Barracks::interact(Player* p1)
	{
		int choice, choice2;
		Menu menu;
		
		cout << endl << "You are in the Barracks. How would you like to proceed?" << endl;
		cout << "1. Look under the soldiers' beds." << endl;
		cout << "2. Look through the soldier's chests at the foot of the beds." << endl;
		cout << "3. Leave the Barracks." << endl;
		cout << "4. Quit and Exit Game" << endl;
		
		choice = menu.inputValidationMenu4();
		
		if (choice == 1)
		{
			cout << endl << "You find nothing after looking under each bed." << endl;
			return 3;
		}
		
		else if (choice == 2)
		{
			cout << endl << "All you find in the chests are soldiers' uniforms." << endl;
			return 3;
		}
		
		else if (choice == 3)
		{
			cout << endl << "Where would you like to go?" << endl;
			cout << "1. Kitchen" << endl;
			cout << "2. Dungeon" << endl;
			
			choice2 = menu.inputValidationMenu2();
			
			if (choice2 == 1)
			{
				p1->setLocation(top);
			}
			
			else if (choice2 == 2)
			{
				p1->setLocation(left);
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