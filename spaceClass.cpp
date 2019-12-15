/*********************************************************************
** Program name: Final Project Text-Based Game
** Author: Eric Riemer
** Date: 11/24/2017
** Description: Space Class Implementation File
*********************************************************************/

#include "spaceClass.hpp"

	//Destructor
	Space::~Space(){}
			
	//Sets the top pointer
	void Space::setTop(Space* topRoom)
	{
		top = topRoom;
	}

	//Sets the bottom pointer
	void Space::setBottom(Space* bottomRoom)
	{
		bottom = bottomRoom;
	}

	//Sets the right pointer
	void Space::setRight(Space* rightRoom)
	{
		right = rightRoom;
	}

	//Sets the left pointer
	void Space::setLeft(Space* leftRoom)
	{
		left = leftRoom;
	}
	
	
	
	
		