/*********************************************************************
** Program name: Final Project Text-Based Game
** Author: Eric Riemer
** Date: 11/24/2017
** Description: Courtyard Class Header File
*********************************************************************/

#ifndef courtyardClass_HPP
#define courtyardClass_HPP
#include "spaceClass.hpp"

class Courtyard: public Space
{		
	public:
	
	//Constructor
	Courtyard();
	
	//Destructor
	~Courtyard();
	
	//interact with the room
	int interact(Player*);
	
};
#endif