// Writing some of OUR OWN string functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout; 
using std::string; 


string insertDoNot(int desiredInsertionPosition, string originalString)
{
	string newString; 

	for (int i = 0; i < desiredInsertionPosition; ++i)
	{
		newString.at(i) = originalString.at(i); 
	}

	newString.at(desiredInsertionPosition) = 'D';


	for (int i = desiredInsertionPosition; i < originalString.length() + 1; ++i)
	{
		newString.at(i) = o
			/*TO BE CONTINUED ... */
	}
}
int main()
{
	string someWord = "innocent"; //innocence? 
	//(NOTE: this word was generated with: https://randomwordgenerator.com/ )

	someWord = someWord + 's'; 

	//how to insert the letter 's' and the end? 
	// 
	//someWord.insert()

	cout << someWord + 's' << "\n"; //string concatenation! HOORAY!
	//the line of code above "appends" an 's' to the END of the string "innocent" 
	
	//"prepend" -> 
	cout << 'z' + someWord << "\n";

	//cout << someWord + 123 << "\n"; //NOPE -> can't add a number to characters

	string someSentence = "I like turtles."; 

	string negationOfThatSentence;// = "I DO NOT like turtles.";
	//someSentence.inser
	//how to write code that inserts "DO NOT"? 
	int insertionPosition = 2; 

	string negationOfThatSentence = insertIDoNot(insertionPosition, someSentence);


}
