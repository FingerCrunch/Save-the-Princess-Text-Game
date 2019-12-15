/*********************************************************************
** Program name: Final Project Text-Based Game
** Author: Eric Riemer
** Date: 11/24/2017
** Description: KingChamber Class Header File
*********************************************************************/

#ifndef kingChamberClass_HPP
#define kingChamberClass_HPP
#include "spaceClass.hpp"

class KingChamber: public Space
{		
	public:
	
	//Constructor
	KingChamber();
	
	//Destructor
	~KingChamber();
	
	//interact with the room
	int interact(Player* p1);
	
};
#endif