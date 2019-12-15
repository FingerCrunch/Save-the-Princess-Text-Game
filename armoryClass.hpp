/*********************************************************************
** Program name: Final Project Text-Based Game
** Author: Eric Riemer
** Date: 11/24/2017
** Description: Armory Class Header File
*********************************************************************/

#ifndef armoryClass_HPP
#define armoryClass_HPP
#include "spaceClass.hpp"

class Armory: public Space
{		
	public:
	
	//Constructor
	Armory();
	
	//Destructor
	~Armory();
	
	//interact with the room
	int interact(Player*);
	
};
#endif