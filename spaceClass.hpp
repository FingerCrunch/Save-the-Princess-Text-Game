/*********************************************************************
** Program name: Final Project Text-Based Game
** Author: Eric Riemer
** Date: 11/24/2017
** Description: Space Class Header File
** References: https://stackoverflow.com/questions/571394/how-to-find-out-if-an-item-is-present-in-a-stdvector
*********************************************************************/

#ifndef spaceClass_HPP
#define spaceClass_HPP
#include <iostream>
#include <ctime>
#include <algorithm>
#include "menuClass.hpp"
#include "playerClass.hpp"
using std::string;
using std::cout;
using std::cin;
using std::endl;

class Player;

class Space
{
	protected:
	
		Space* top;//pointer to room above
		Space* bottom;//pointer to room below
		Space* right;//pointer to room to the right
		Space* left;//pointer to room to the left
		
		string password = "BINARY";
		
	
	public:
	
		//Pure Virtual Destructor
		virtual ~Space()=0;
		
		//Sets the top pointer
		void setTop(Space*);
		
		//Sets the bottom pointer
		void setBottom(Space*);
		
		//Sets the right pointer
		void setRight(Space*);
		
		//Sets the left pointer
		void setLeft(Space*);
		
		//interact with the room
		virtual int interact(Player*) = 0;

};
#endif