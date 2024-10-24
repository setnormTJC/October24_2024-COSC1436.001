// October24_2024-COSC1436.001.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout; 
using std::string; 


auto insertCharacterAtGivenPosition(string inputString, int desiredPosition)
{
	//we'll continue this function definition in a minute ...

	//return ""; 
}

int main()
{
	string someWord = "alpha";

	//what about "size_t" -> what does it mean? 
	//size_t -> an ALIAS for a big, positive integer !

	cout << "someWord's length " << someWord.length() << "\n";
	cout << "someWord's SIZE " << someWord.size() << "\n";
	
	for (int i = 0; i < someWord.length(); ++i)
	{
		//cout << someWord.at(i) << "\t"; //at index means "position" 
		cout << someWord[i] << "\n"; //the [] is called the "subscript" operator (or the INDEX operator)

		//a
		//l
		//p
		//h
		//a
	}
	
	//we'll talk about arrays later!
	//char letterArray[10] = "012345678";
	//cout << someWord.insert()

}
