/*********************************************************************
** Program name: Final Project Text-Based Game
** Author: Eric Riemer
** Date: 11/24/2017
** Description: Game Class Header File
*********************************************************************/

#ifndef gameClass_HPP
#define gameClass_HPP
#include "spaceClass.hpp"
#include "playerClass.hpp"
#include "armoryClass.hpp"
#include "barracksClass.hpp"
#include "courtyardClass.hpp"
#include "dungeonClass.hpp"
#include "kingChamberClass.hpp"
#include "kitchenClass.hpp"
#include "libraryClass.hpp"
#include "mainHallClass.hpp"
#include "stableClass.hpp"

class Space;

class Game
{
	private:
		//space pointers to each kind of space object
		Space* armory;
		Space* barracks;
		Space* courtyard;
		Space* dungeon;
		Space* kingRoom;
		Space* kitchen;
		Space* library;
		Space* mainHall;
		Space* stable;
		Space* tower;
		
		//player pointer to player object
		Player* player;
		
		//holds number of turns allowed for the player
		int turns;
		
		//holds the number of turns taken by the player
		int count;
		
	
	public:
		
		//constructor
		Game();
		
		//destructor
		~Game();
		
		//tests whether the player has lost the game
		bool continueGame();
		
		//plays the game
		void play();
		
		//prints game instructions
		void gameInstructions();
		
		

};
#endif