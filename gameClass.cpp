/*********************************************************************
** Program name: Final Project Text-Based Game
** Author: Eric Riemer
** Date: 11/24/2017
** Description: Game Class Implementation File
*********************************************************************/

#include "gameClass.hpp"

	//constructor
	Game::Game()
	{
		//create objects for rooms and player
		armory = new Armory;
		barracks = new Barracks;
		courtyard = new Courtyard;
		dungeon = new Dungeon;
		kingRoom = new KingChamber;
		kitchen = new Kitchen;
		library = new Library;
		mainHall = new MainHall;
		stable = new Stable;
		player = new Player;
		
		//set the direction pointers for the armory
		armory->setTop(NULL);
		armory->setBottom(kitchen);
		armory->setRight(NULL);
		armory->setLeft(courtyard);
		
		//set the direction pointers for the barracks
		barracks->setTop(kitchen);
		barracks->setBottom(NULL);
		barracks->setRight(NULL);
		barracks->setLeft(dungeon);
		
		//set the direction pointers for the courtyard
		courtyard->setTop(NULL);
		courtyard->setBottom(mainHall);
		courtyard->setRight(armory);
		courtyard->setLeft(stable);
		
		//set the direction pointers for the dungeon
		dungeon->setTop(mainHall);
		dungeon->setBottom(NULL);
		dungeon->setRight(barracks);
		dungeon->setLeft(kingRoom);
		
		//set the direction pointers for the king's room
		kingRoom->setTop(library);
		kingRoom->setBottom(NULL);
		kingRoom->setRight(dungeon);
		kingRoom->setLeft(NULL);
		
		//set the direction pointers for the kitchen
		kitchen->setTop(armory);
		kitchen->setBottom(barracks);
		kitchen->setRight(NULL);
		kitchen->setLeft(mainHall);
		
		//set the direction pointers for the library
		library->setTop(stable);
		library->setBottom(kingRoom);
		library->setRight(mainHall);
		library->setLeft(NULL);
		
		//set the direction pointers for the Main Hall
		mainHall->setTop(courtyard);
		mainHall->setBottom(dungeon);
		mainHall->setRight(kitchen);
		mainHall->setLeft(library);
		
		//set the direction pointers for the stables
		stable->setTop(NULL);
		stable->setBottom(library);
		stable->setRight(courtyard);
		stable->setLeft(NULL);
		
		//set the player's starting location
		player->setLocation(courtyard);
		
		//set the number of turns
		turns = 25;
		
		//set the counter for turns
		count = 0;
	}
	
	//destructor
	Game::~Game()
	{
		delete armory;
		delete barracks;
		delete courtyard;
		delete dungeon;
		delete kingRoom;
		delete kitchen;
		delete library;
		delete mainHall;
		delete stable;
		delete player;
	}
	
	//tests whether the player has lost the game
	bool Game::continueGame()
	{
		if (count < turns)
		{
			return true;
		}
		
		else
		{
			cout << endl << "You have run out of turns. You lose." << endl << endl;
			return false;
		}
	}
	
	//plays the game
	void Game::play()
	{
		int result;
		
		cout << endl << "Turns Remaining: " << turns << endl;
		
		while (continueGame())
		{
			result = player->getLocation()->interact(player);
			
			if (result == 1)
			{
				++count;
				cout << endl << "Turns Remaining: " << turns - count << endl;
			}
			
			else if (result == 2)
			{
				++count;
				cout << endl << "Turns Remaining: " << turns - count << endl;
			}
			
			else if (result == 3)
			{
				++count;
				cout << endl << "Turns Remaining: " << turns - count << endl;
			}
			
			else if (result == 4)
			{
				cout << "You have won the game!!!" << endl;
				return;
			}
			
			else if (result == 5)
			{
				break;
			}
		}
	}
	
	//prints game instructions
	void Game::gameInstructions()
	{
		cout << endl << "*************Save The Princess Text-Based Game**************" << endl << endl;
		cout << "The mad king has locked the princess away in the castle tower." << endl;
		cout << "You, the dashing young prince, must find and rescue the princess." << endl;
		cout << "In order to do this, you need to collect 6 letters " << endl;
		cout << "and find the location of the secret passage " << endl;
		cout << "leading to the tower where the princess is being kept." << endl;
		cout << "Explore the castle to find the letters and pick up " << endl;
		cout << "clues about the whereabouts of the secret passage." << endl;
		cout << "Each time you interact with a room, leave a room, " << endl;
		cout << "or attempt to guess the password to the secret passage, " << endl;
		cout << "you will lose a turn.  You only have 25 turns to find " << endl;
		cout << "the princess. Use your turns wisely." << endl;
		cout << endl << "************************************************************" << endl;
	}
	
	
	
	
	
	
	
	
	
	