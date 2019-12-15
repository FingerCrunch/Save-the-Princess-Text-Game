/*********************************************************************
** Program name: Final Project Text-Based Game
** Author: Eric Riemer
** Date: 11/24/2017
** Description: Barracks Class Header File
*********************************************************************/

#ifndef barracksClass_HPP
#define barracksClass_HPP
#include "spaceClass.hpp"

class Barracks: public Space
{		
	public:
	
	//Constructor
	Barracks();
	
	//Destructor
	~Barracks();
	
	//interact with the room
	int interact(Player*);
	
};
#endif