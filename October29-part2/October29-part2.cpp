// Demoing the find (character) function - using randomly generated word from dictionary file.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<fstream> 
#include<string>

#include<random> 

//#include<termios.h>

using std::cout;
using std::string;
using std::getline;
using std::ifstream;

/*EX: takes input = "word" and returns "****"*/
string obfuscateWord(string inputWord)
{
	string outputWord; 
	for (int i = 0; i < inputWord.length(); ++i)
	{
		outputWord += '*';
		//outputWord[i] = '*'
		//outputWord.push_back('*');
	}

	return outputWord; 
}

//void cheatAndDisplayTheAnswer(string correctAnswer)
//{
//	cout << "Answer is: " << correctAnswer << " (with length = " << correctAnswer.length() << ")\n";
//}

int main()
{
	//string someWord = "alpha"; 

	//while (true)
	//{
	//	cout << "Enter a character, and we'll see if it is in the word ...\n";
	//	char guessedLetter; 
	//	std::cin >> guessedLetter; 
	//	cout << "The find function returned: " << someWord.find(guessedLetter, 1) << "\n";

	//}


	system("pause"); 
	//

	ifstream dictionaryFile{ "C:/Users/Work/Downloads/popular.txt" }; //HERE!

	if (!dictionaryFile.is_open())
	{
		cout << "FNFE\n";
		return 1;
	}


	//srand(time(0));
	//int randomNumber = rand() % 25'000; //pretty much every word in the dictionary file above
	
	std::mt19937 randomEngine(time(0)); 
	std::uniform_int_distribution<int> randomDistribution(0, 25'000); 

	int randomNumber = randomDistribution(randomEngine);

	cout << "Random number: " << randomNumber << "\n";

	string currentWord;
	for (int i = 0; i < randomNumber; ++i)
	{
		getline(dictionaryFile, currentWord); //better to use vector<string> 
	}
	string correctAnswer = currentWord;

	cout << "Word to be guessed (in the style of \"Hangman\": " << correctAnswer << "\n";

	system("pause"); 
	system("CLS"); 

	string mysteryWord = obfuscateWord(correctAnswer); 

	cout << "In \"MYSTERY\" form, that is: \n" << mysteryWord << "\n";



}
