/*********************************************************************
** Program name: Final Project Text-Based Game
** Author: Eric Riemer
** Date: 11/24/2017
** Description: Stable Class Header File
*********************************************************************/

#ifndef stableClass_HPP
#define stableClass_HPP
#include "spaceClass.hpp"

class Stable: public Space
{		
	public:
	
	//Constructor
	Stable();
	
	//Destructor
	~Stable();
	
	//interact with the room
	int interact(Player*);
	
};
#endif