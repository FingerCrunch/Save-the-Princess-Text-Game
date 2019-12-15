/*********************************************************************
** Program name: Final Project Text-Based Game
** Author: Eric Riemer
** Date: 11/24/2017
** Description: Menu Class Implementation File
*********************************************************************/	

#include "menuClass.hpp"	
	
	//Constructor
	Menu::Menu(){}
	
	//Destructor
	Menu::~Menu(){}
	
	//validates the input for a menu with 2 options
	int Menu::inputValidationMenu2()
	{
		int outputInteger = 0; //the integer outputted after validating the input
	 
		//while loop continues to loop in the input from the user
		while (true)
		{
			string choice; //hold the user's input
			getline(cin, choice); //accepts the user's input
	 
			bool valid = true; //boolean variable that holds either true or false
			
			//for loop for each character in the string array
			for (unsigned int count = 0; count < choice.length(); count++)
				//tests each character in the string array to see if it is not a digit
				if (!isdigit(choice[count]))
				{
					valid = false;//flips valid to false if a character in the string is not a digit
					cout << "Invalid Input. Please enter either a 1 or a 2 into the menu: ";
					break;//used to break out of the for loop
				}
				
			//if the valid does not equal true, skips the rest of the while loop
			if (!valid)
				continue;//everything beyond this point in the while loop will be skipped if valid = false
	 
			//This converts the string "choice" to an integer "outputInteger"
			stringstream strStream; //creates a stringstream object
			strStream << choice; //transfers choice to strStream
			strStream >> outputInteger; //transfers strStream to outputInteger
			
			//checks the value of outputInteger to see if it is either a one, two or three
			if (outputInteger != 1 && outputInteger != 2)
			{			
				valid = false;//flips valid to false if outputInteger doesn't equal a 1 or 2
				cout << "Invalid Input. Please enter either a 1 or a 2 into the menu: ";
			}
			
			//if the valid does not equal true, skips the rest of the while loop
			if (!valid)
				continue;//everything beyond this point in the while loop will be skipped if valid = false
			
			break;//used to break out of the while loop
		}
	 
		return outputInteger; //returns outputInteger from the function
	}
	
	
	//validates the input for a menu with 3 options
	int Menu::inputValidationMenu3()
	{
		int outputInteger = 0; //the integer outputted after validating the input
	 
		//while loop continues to loop in the input from the user
		while (true)
		{
			string choice; //hold the user's input
			getline(cin, choice); //accepts the user's input
	 
			bool valid = true; //boolean variable that holds either true or false
			
			//for loop for each character in the string array
			for (unsigned int count = 0; count < choice.length(); count++)
				//tests each character in the string array to see if it is not a digit
				if (!isdigit(choice[count]))
				{
					valid = false;//flips valid to false if a character in the string is not a digit
					cout << "Invalid Input. Please enter either a 1, 2 or 3 into the menu: ";
					break;//used to break out of the for loop
				}
				
			//if the valid does not equal true, skips the rest of the while loop
			if (!valid)
				continue;//everything beyond this point in the while loop will be skipped if valid = false
	 
			//This converts the string "choice" to an integer "outputInteger"
			stringstream strStream; //creates a stringstream object
			strStream << choice; //transfers choice to strStream
			strStream >> outputInteger; //transfers strStream to outputInteger
			
			//checks the value of outputInteger to see if it is either a one, two or three
			if (outputInteger != 1 && outputInteger != 2 && outputInteger != 3)
			{			
				valid = false;//flips valid to false if outputInteger doesn't equal a 1 or 2
				cout << "Invalid Input. Please enter either a 1, 2 or 3  into the menu: ";
			}
			
			//if the valid does not equal true, skips the rest of the while loop
			if (!valid)
				continue;//everything beyond this point in the while loop will be skipped if valid = false
			
			break;//used to break out of the while loop
		}
	 
		return outputInteger; //returns outputInteger from the function
	}
	
	//validates the input for a menu with 4 options
	int Menu::inputValidationMenu4()
	{
		int outputInteger = 0; //the integer outputted after validating the input
	 
		//while loop continues to loop in the input from the user
		while (true)
		{
			string choice; //hold the user's input
			getline(cin, choice); //accepts the user's input
	 
			bool valid = true; //boolean variable that holds either true or false
			
			//for loop for each character in the string array
			for (unsigned int count = 0; count < choice.length(); count++)
				//tests each character in the string array to see if it is not a digit
				if (!isdigit(choice[count]))
				{
					valid = false;//flips valid to false if a character in the string is not a digit
					cout << "Invalid Input. Please enter either a 1, 2, 3 or 4  into the menu: ";
					break;//used to break out of the for loop
				}
				
			//if the valid does not equal true, skips the rest of the while loop
			if (!valid)
				continue;//everything beyond this point in the while loop will be skipped if valid = false
	 
			//This converts the string "choice" to an integer "outputInteger"
			stringstream strStream; //creates a stringstream object
			strStream << choice; //transfers choice to strStream
			strStream >> outputInteger; //transfers strStream to outputInteger
			
			//checks the value of outputInteger to see if it is either a one, two or three
			if (outputInteger != 1 && outputInteger != 2 && outputInteger != 3 && outputInteger != 4)
			{			
				valid = false;//flips valid to false if outputInteger doesn't equal a 1 or 2
				cout << "Invalid Input. Please enter either a 1, 2, 3 or 4  into the menu: ";
			}
			
			//if the valid does not equal true, skips the rest of the while loop
			if (!valid)
				continue;//everything beyond this point in the while loop will be skipped if valid = false
			
			break;//used to break out of the while loop
		}
	 
		return outputInteger; //returns outputInteger from the function
	}