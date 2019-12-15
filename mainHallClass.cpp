/*********************************************************************
** Program name: Final Project Text-Based Game
** Author: Eric Riemer
** Date: 11/24/2017
** Description: MainHall Class Implementation File
*********************************************************************/

#include "mainHallClass.hpp"

	//Constructor
	MainHall::MainHall(){}
	
	//Destructor
	MainHall::~MainHall(){}
	
	//interact with the room
	int MainHall::interact(Player* p1)
	{
		int choice, choice2;
		Menu menu;
		
		cout << endl << "You are in the Main Hall. What are you going to do?" << endl;
		cout << "1. Sit in the King's chair at the head of the great table." << endl;
		cout << "2. Look around the great table." << endl;
		cout << "3. Leave the Main Hall." << endl;
		cout << "4. Quit and Exit Game" << endl;
		
		choice = menu.inputValidationMenu4();
		
		if (choice == 1)
		{
			cout << endl << "You see a marking on the edge of the table." << endl;
			cout << "You look closer and find another letter of the password." << endl;
			
			p1->addLetter();
			
			cout << endl << "You have now collected the following " << endl;
			p1->printLetters();
			return 1;

		}
		
		else if (choice == 2)
		{
			cout << endl << "You flip over the carpet under the table and find a hidden passage." << endl;
			cout << "You follow the passage and end up back in the courtyard." << endl;
			p1->setLocation(top);
			return 2;
		}
		
		else if (choice == 3)
		{
			cout << endl << "Where would you like to go?" << endl;
			cout << "1. Courtyard" << endl;
			cout << "2. Kitchen" << endl;
			cout << "3. Dungeon" << endl;
			cout << "4. Library" << endl;
			
			choice2 = menu.inputValidationMenu4();
			
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
			
			else if (choice2 == 4)
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