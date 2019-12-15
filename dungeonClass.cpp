/*********************************************************************
** Program name: Final Project Text-Based Game
** Author: Eric Riemer
** Date: 11/24/2017
** Description: Dungeon Class Implementation File
*********************************************************************/

#include "dungeonClass.hpp"

	//Constructor
	Dungeon::Dungeon(){}
	
	//Destructor
	Dungeon::~Dungeon(){}
	
	//interact with the room
	int Dungeon::interact(Player* p1)
	{
		int choice, choice2;
		Menu menu;
		string guess;
		
		cout << endl << "You are in the Dungeon. How would you like to proceed?" << endl;
		cout << "1. Talk to the prisoners." << endl;
		cout << "2. Investigate the torture room." << endl;
		cout << "3. Leave the Dungeon." << endl;
		cout << "4. Quit and Exit Game" << endl;
		
		choice = menu.inputValidationMenu4();
		
		if (choice == 1)
		{
			cout << endl << "You hear moaning coming from a cell and you decide to approach it. " << endl;
			cout << "In the cell, you see an old woman rocking back and forth on her bed, muttering and moaning to herself." << endl;
			cout << "You ask the woman, 'I'm on a mission to save the princess.  Do you know where the entrace to the tower is?'" << endl;
			cout << "The old woman stops her moaning and looks over at you and says, " << endl;
			cout << "'My granddaughter? You have come to rescue my granddaughter?'" << endl;
			cout << "You reply, 'Yes, I need to find the secret passage to the tower.'" << endl;
			cout << "The woman stands and creeps towards the bars of her cell." << endl;
			cout << "She whispers, 'The king visits the torture room every night. " << endl;
			cout << "I hear him muttering something before he enters.'" << endl;
			cout << "You gain a letter from the old woman." << endl;
			
			p1->addLetter();
			
			cout << endl << "You have now collected the following " << endl;
			p1->printLetters();
			return 1;
		}
		
		else if (choice == 2)
		{
			cout << endl << "You walk up to the door leading to the torture room " << endl;
			cout << "and see a statue of a demon stationed to the right of the door." << endl;
			cout << "You try and open the door, but find that it is locked." << endl;
			cout << "You think to yourself: 'This must be the secret passage to the tower.'" << endl;
			
			cout << endl << "You look at the letters you've collected" << endl;
			p1->printLetters();
			
			cout << endl << "1. Attempt to open the door by entering in the password" << endl;
			cout << "2. You decided you need to find more letters in the castle" << endl;
			
			choice2 = menu.inputValidationMenu2();
			
			if (choice2 == 1)
			{
				cout << endl << "Enter Password: ";
				
				getline(cin, guess);
				
				if (guess == password)
				{
					cout << endl << "The demon statue eyes glow red and the door to the torture room opens." << endl;
					cout << "You enter the torture room and see that it isn't a torture room at all." << endl;
					cout << "The room contains only a spiral staircase that leads up." << endl;
					cout << "You climb the stairs and find the princess reading by the window." << endl;
					cout << "You exclaim, 'I have come to save you from the evil King.'" << endl;
					cout << "Stunned, the princess asks, 'You've come to save me?'" << endl;
					cout << "You smile and say, 'I will bring you to safety.  Take my hand and follow me.'" << endl;
					return 4;
				}
				
				else
				{
					cout << endl << "Nothing happens. The password was wrong." << endl;
					return 3;
				}
			}
			
			else
			{
				return 3;
			}
			
		}
		
		else if (choice == 3)
		{
			cout << endl << "Where would you like to go?" << endl;
			cout << "1. Barracks" << endl;
			cout << "2. King's Chambers" << endl;
			cout << "3. Main Hall" << endl;
			
			choice2 = menu.inputValidationMenu3();
			
			if (choice2 == 1)
			{
				p1->setLocation(right);
			}
			
			else if (choice2 == 2)
			{
				p1->setLocation(left);
			}
			
			else if (choice2 == 3)
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