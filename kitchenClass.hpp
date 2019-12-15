/*********************************************************************
** Program name: Final Project Text-Based Game
** Author: Eric Riemer
** Date: 11/24/2017
** Description: Kitchen Class Header File
*********************************************************************/

#ifndef kitchenClass_HPP
#define kitchenClass_HPP
#include "spaceClass.hpp"

class Kitchen: public Space
{		
	public:
	
	//Constructor
	Kitchen();
	
	//Destructor
	~Kitchen();
	
	//interact with the room
	int interact(Player*);
	
};
#endif