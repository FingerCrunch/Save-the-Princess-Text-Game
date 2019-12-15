/*********************************************************************
** Program name: Final Project Text-Based Game
** Author: Eric Riemer
** Date: 11/24/2017
** Description: Dungeon Class Header File
*********************************************************************/

#ifndef dungeonClass_HPP
#define dungeonClass_HPP
#include "spaceClass.hpp"

class Dungeon: public Space
{		
	public:
	
	//Constructor
	Dungeon();
	
	//Destructor
	~Dungeon();
	
	//interact with the room
	int interact(Player*);
	
};
#endif