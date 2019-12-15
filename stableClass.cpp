/*********************************************************************
** Program name: Final Project Text-Based Game
** Author: Eric Riemer
** Date: 11/24/2017
** Description: Stable Class Implementation File
*********************************************************************/

#include "stableClass.hpp"

	//Constructor
	Stable::Stable(){}
	
	//Destructor
	Stable::~Stable(){}
	
	//interact with the room
	int Stable::interact(Player* p1)
	{
		int choice, choice2;
		Menu menu;
		
		cout << endl << "You are in the Stables. What would you like to do?" << endl;
		cout << "1. Brush the black stallion." << endl;
		cout << "2. Talk to the stable master." << endl;
		cout << "3. Leave the Stables." << endl;
		cout << "4. Quit and Exit Game" << endl;
		
		choice = menu.inputValidationMenu4();
		
		if (choice == 1)
		{
			cout << endl << "You find a letter branded on the horse's backside." << endl;
			
			p1->addLetter();
			cout << endl << "You have now collected the following letters:" << endl;
			p1->printLetters();
			return 1;

		}
		
		else if (choice == 2)
		{
			cout << endl << "You ask, 'Have you seen the princess?'" << endl;
			cout << "Stable Master: 'I haven't seen her since she was a little girl. " << endl;
			cout << "She used to love riding her pony.  I've heard that she's been kept locked up in the tower. " << endl;
			cout << "The king is very protective of her. I'd be careful if I were you.'" << endl;
			cout << "You ask, 'Do you know how to get to the tower?'" << endl;
			cout << "Stable Master: 'Heck if I know. All I know is that the king is the only one allowed to visit her.'" << endl;
		
			return 3;
		}
		
		else if (choice == 3)
		{
			cout << endl << "Where would you like to go?" << endl;
			cout << "1. Courtyard" << endl;
			cout << "2. Library" << endl;
			
			choice2 = menu.inputValidationMenu2();
			
			if (choice2 == 1)
			{
				p1->setLocation(right);
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