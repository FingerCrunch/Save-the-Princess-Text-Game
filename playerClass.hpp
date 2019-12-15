/*********************************************************************
** Program name: Final Project Text-Based Game
** Author: Eric Riemer
** Date: 11/24/2017
** Description: Player Class Header File
*********************************************************************/

#ifndef playerClass_HPP
#define playerClass_HPP
#include <iostream>
#include <vector>
#include "spaceClass.hpp"
using std::string;
using std::vector;
using std::cout;
using std::endl;

class Space;

class Player
{
	private:
	
		vector<char> letters;//holds the letters the player collects
		
		Space* currentLocation;//holds the current location of the player
	
	public:
	
		//Constructor
		Player();
		
		//Destructor
		~Player();
		
		//sets the current location of the player
		void setLocation(Space*);
		
		//returns the current location of the player
		Space* getLocation();
		
		//moves the player to a new location
		void move(Space*);
		
		//prints all the letters stored in the vector of characters
		void printLetters();
		
		//adds a random letter to the vector
		void addLetter();

};
#endif