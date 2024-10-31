// Demoing replace function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cassert>
#include<string> 

using std::string; 
using std::cout; 

void ourOwnReplaceFunction(string& inputString, int indexAtWhichToReplace, char theCharacterToPutIn)
{
	//string newString; 
	assert(indexAtWhichToReplace < inputString.length()); //prevents going out of bounds
	assert(indexAtWhichToReplace >= 0); 

	inputString[indexAtWhichToReplace] = theCharacterToPutIn; 

	//return newString;

}

/*READ THIS documentation so that you don't misuse this function...*/
void ourOwnReplaceFunction(string& inputString, int startPosition, int endPosition, char theCharacterToPutIn)
{
	for (int i = startPosition; i <= endPosition; i++) {
		ourOwnReplaceFunction(inputString, i - 1, theCharacterToPutIn); //credit: Mr. Ball (jummy_juce) 
	}
}

int main()
{

	string someWord = "Alice";

	//ourOwnReplaceFunction(someWord, 0, 'a');

	//cout << "Have we replaced A with a? " << "\n";
	//cout << someWord << "\n";

	//replace the text "Alice" with "A****"? 
	//ourOwnReplaceFunction(someWord, 1, someWord.length(), '*');

	//someWord.replace(0, 2, "Bob"); //Ali -> Bobce

	cout << someWord << "\n";
	//someWord.replace( //Soundex algorithm 
	//someWord.replace()
	//string lowerCaseSomeWord = someWord.replace('A', 'a') //...to be continued 
	
	
}
