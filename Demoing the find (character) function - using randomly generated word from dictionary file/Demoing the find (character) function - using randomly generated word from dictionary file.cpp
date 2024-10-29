// Demoing the find (character) function - using randomly generated word from dictionary file.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<fstream> 
#include<string>

using std::cout; 
using std::string; 
using std::getline; 
using std::ifstream; 

//string obfusc

//void cheatAndDisplayTheAnswer(string correctAnswer)
//{
//	cout << "Answer is: " << correctAnswer << " (with length = " << correctAnswer.length() << ")\n";
//}

int main()
{
	ifstream dictionaryFile{"C:/Users/Work/Downloads.popular.txt"}; //HERE!

	if (!dictionaryFile.is_open())
	{
		cout << "FNFE\n";
		return 1; 
	}

	
	srand(time(0)); 
	int randomNumber = rand() % 25'000; //pretty much every word in the dictionary file above

	string currentWord;
	for (int i = 0; i < randomNumber; ++i)
	{
		getline(dictionaryFile, currentWord); //better to use vector<string> 
	}
	string correctAnswer = currentWord; 

	cout << "Word to be guessed (in the style of \"Hangman\": " << correctAnswer << "\n";


 
}
