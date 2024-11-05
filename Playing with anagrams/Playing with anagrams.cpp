// Playing with anagrams.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream> 
#include <string>

#include<algorithm> //needed for std::sort

using std::cout; 
using std::string; 
using std::ifstream; 

int main()
{
	cout << "Enter a word - we'll look for ANAGRAMS of it ...\n";
	string inputWord; 
	std::cin >> inputWord;  //ex:coronavirus 


	//string anAnagramOfInputWord = "carnivorous"; 

	//cout << "Sorted version of input string " << inputWord << "is: ";
	//std::sort(inputWord.begin(), inputWord.end());
	//cout << inputWord << "\n";

	//system("pause"); 

	//cout << "Sorted version of anagram " << anAnagramOfInputWord << "is : ";
	//std::sort(anAnagramOfInputWord.begin(), anAnagramOfInputWord.end()); 
	//cout << anAnagramOfInputWord << "\n";


	//system("pause");

	ifstream dictionaryFile{ "C:/Users/Work/Downloads/popular.txt" }; //HERE!

	if (!dictionaryFile.is_open())
	{
		cout << "FNFE\n";
		return 1;
	}

	std::sort(inputWord.begin(), inputWord.end());

	while (!dictionaryFile.eof())
	{
		string currentWord; 
		getline(dictionaryFile, currentWord); //requires <string> 

		string copyOfCurrentWord = currentWord; 

		std::sort(currentWord.begin(), currentWord.end());

		if (inputWord == currentWord)
		{
			cout << copyOfCurrentWord << "\t" << currentWord << "\n";
		}
		//cout << currentWord << "\n";
	}

}
