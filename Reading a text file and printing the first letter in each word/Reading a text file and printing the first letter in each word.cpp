// Reading a text file and printing the first letter in each word.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream> 

#include<string>

using std::cout;
using std::string;
using std::ifstream; 


int main()
{
	//another demo of the AT method (subscript operator): 
	string someWord = "beta"; 
	
	cout << "What is the FIRST letter in the word " << someWord << "?\n"; 
	cout << "It is: " << someWord.at(0) << "\n"; //! starting counts at ZERO in "arrays" in computer science 
	cout << "\n\n\n";
	//be wary (not weary) of "off by one" errors when using arrays

	//int nums[10] = {1, 2, 3, 4, etc} //the "elements" of THIS array are INTEGERS (not characters - as in strings)


	//how to print the first letter in each word of the "cinderella pangram" text file? 

	ifstream fin{ "cinderellaPangram.txt" };
	if (!fin.is_open())
	{
		cout << "FNFE\n";
		return 1; 
	}

	string currentWord; 
	while (!fin.eof())
	{
		std::getline(fin, currentWord, ' ');
	
		cout << currentWord[0] << "\n";
	}

	fin.close(); 

}
