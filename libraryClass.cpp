/*********************************************************************
** Program name: Final Project Text-Based Game
** Author: Eric Riemer
** Date: 11/24/2017
** Description: Library Class Implementation File
*********************************************************************/

#include "libraryClass.hpp"

	//Constructor
	Library::Library(){}
	
	//Destructor
	Library::~Library(){}
	
	//interact with the room
	int Library::interact(Player* p1)
	{
		int choice, choice2;
		Menu menu;
		
		cout << endl << "You are in the Library. What would you like to do?" << endl;
		cout << "1. Read the large book that was left open at the reading desk." << endl;
		cout << "2. Peruse the books in the library." << endl;
		cout << "3. Leave the Library." << endl;
		cout << "4. Quit and Exit Game" << endl;
		
		choice = menu.inputValidationMenu4();
		
		if (choice == 1)
		{
			cout << endl << "You find a note in the book with small writing on it." << endl;
			cout << "Clue: The writing reads: 'Meet me in the dungeon if you want to see the princess' -K" << endl;
			
			return 3;

		}
		
		else if (choice == 2)
		{
			cout << endl << "You come across a book with weird writing on its spine." << endl;
			cout << "You open the book and start reading." << endl;
			cout << "You find a riddle and solve it, giving you another letter for the password." << endl;
			
			p1->addLetter();
			
			cout << endl << "You have now collected the following " << endl;
			p1->printLetters();
			return 1;
		}
		
		else if (choice == 3)
		{
			cout << endl << "Where would you like to go?" << endl;
			cout << "1. Stables" << endl;
			cout << "2. Main Hall" << endl;
			cout << "3. King's Chambers" << endl;
			
			choice2 = menu.inputValidationMenu3();
			
			if (choice2 == 1)
			{
				p1->setLocation(top);
			}
			
			else if (choice2 == 2)
			{
				p1->setLocation(right);
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