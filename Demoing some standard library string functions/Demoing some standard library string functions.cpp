// Demoing some standard library string functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::string; 
using std::cout; 


int main()
{
	string someSentence = "I like turtles.";  //12'345

	//DEMOING insert:
	//someSentence.insert(2, "DO NOT ");


	//cout << someSentence << "\n";

	cout << "the substring of " << someSentence
		<< " given the inputs 1 and 7 is:" <<  
		someSentence.substr(7777, 1) << "\n";
}
