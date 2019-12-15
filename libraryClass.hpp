/*********************************************************************
** Program name: Final Project Text-Based Game
** Author: Eric Riemer
** Date: 11/24/2017
** Description: Library Class Header File
*********************************************************************/

#ifndef libraryClass_HPP
#define libraryClass_HPP
#include "spaceClass.hpp"

class Library: public Space
{		
	public:
	
	//Constructor
	Library();
	
	//Destructor
	~Library();
	
	//interact with the room
	int interact(Player*);
	
};
#endif