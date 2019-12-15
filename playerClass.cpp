/*********************************************************************
** Program name: Final Project Text-Based Game
** Author: Eric Riemer
** Date: 11/24/2017
** Description: Player Class Implementation File
*********************************************************************/

#include "playerClass.hpp"

	//Constructor
	Player::Player()
	{
		currentLocation = NULL;
	}
	
	//Destructor
	Player::~Player(){}
	
	//sets the current location of the player
	void Player::setLocation(Space* location)
	{
		currentLocation = location;
	}
	
	//returns the current location of the player
	Space* Player::getLocation()
	{
		return currentLocation;
	}
	
	//moves the player to a new location
	void Player::move(Space* newLocation)
	{
		setLocation(newLocation);
	}
	
	//prints all the letters stored in the vector of characters
	void Player::printLetters()
	{
		cout << "letters: ";
		
		for (unsigned int i = 0; i < letters.size(); i++)
		{
			cout << letters[i] << ", ";
		}
	}
	
	//randomly generates and adds a letter to the vector
	void Player::addLetter()
	{
		std::srand(time(NULL));//seeds the rand function
		bool valid = true;//while loop conditional
		int num;//holds random number
		
		while (valid)
		{
			num = std::rand() % 6 + 1;//generates a random number from 1-7
			
			switch(num)
			{
				case 1:
					//if the letter is found in the vector, do nothing
					if (std::find(letters.begin(), letters.end(), 'B') != letters.end())
					{
						//do nothing
					}
					//if the letter is not found, add it to the vector
					else
					{
						letters.push_back('B');
						valid = false;
						break;
					}
				
				case 2:
					//if the letter is found in the vector, do nothing
					if (std::find(letters.begin(), letters.end(), 'I') != letters.end())
					{
						//do nothing
					}
					//if the letter is not found, add it to the vector
					else
					{
						letters.push_back('I');
						valid = false;
						break;
					}
				
				case 3:
					//if the letter is found in the vector, do nothing
					if (std::find(letters.begin(), letters.end(), 'N') != letters.end())
					{
						//do nothing
					}
					//if the letter is not found, add it to the vector
					else
					{
						letters.push_back('N');
						valid = false;
						break;
					}
				
				case 4:
					//if the letter is found in the vector, do nothing
					if (std::find(letters.begin(), letters.end(), 'A') != letters.end())
					{
						//do nothing
					}
					//if the letter is not found, add it to the vector
					else
					{
						letters.push_back('A');
						valid = false;
						break;
					}
				
				case 5:
					//if the letter is found in the vector, do nothing
					if (std::find(letters.begin(), letters.end(), 'R') != letters.end())
					{
						//do nothing
					}
					//if the letter is not found, add it to the vector
					else
					{
						letters.push_back('R');
						valid = false;
						break;
					}
				
				case 6:
					//if the letter is found in the vector, do nothing
					if (std::find(letters.begin(), letters.end(), 'Y') != letters.end())
					{
						//do nothing
					}
					//if the letter is not found, add it to the vector
					else
					{
						letters.push_back('Y');
						valid = false;
						break;
					}
					
				default:
				break;
			}
		}
		
	}