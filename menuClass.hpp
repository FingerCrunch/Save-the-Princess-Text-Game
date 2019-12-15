/*********************************************************************
** Program name: Final Project Text-Based Game
** Author: Eric Riemer
** Date: 11/24/2017
** Description: Menu Class Header File
*********************************************************************/


#ifndef menuClass_HPP
#define menuClass_HPP
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string> 
#include <cctype>
#include <sstream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

class Menu
{
		
	public:
		
		//Constructor
		Menu();
		
		//Destructor
		~Menu();
		
		//validates the input for the 2 option menu
		int inputValidationMenu2();
		
		//validates the input for a menu with 3 options
		int inputValidationMenu3();
		
		//validates the input for a menu with 4 options
		int inputValidationMenu4();

};
#endif