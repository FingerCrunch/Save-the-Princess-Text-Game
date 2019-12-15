/*********************************************************************
** Program name: Final Project Text-Based Game
** Author: Eric Riemer
** Date: 11/24/2017
** Description: MainHall Class Header File
*********************************************************************/

#ifndef mainHallClass_HPP
#define mainHallClass_HPP
#include "spaceClass.hpp"

class MainHall: public Space
{		
	public:
	
	//Constructor
	MainHall();
	
	//Destructor
	~MainHall();
	
	//interact with the room
	int interact(Player*);
	
};
#endif