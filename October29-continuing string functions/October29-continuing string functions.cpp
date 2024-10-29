

#include <iostream>

#include<string>

#include<chrono> 

using std::cout; 
using std::string; 

int main()
{
	//simple (brute force) password hack with nested for loops
	string password; 

	cout << "Enter your password (limit 3 characters):\n";
	getline(std::cin, password);

	cout << "Attempting to figure it out via brute force ...\n";

	auto startTime = std::chrono::high_resolution_clock::now(); 

	string guessedPassword = ""; 
	for (char firstLetter = 'a'; firstLetter <= 'z'; firstLetter++)
	{
		for (char secondLetter = 'a'; secondLetter <= 'z'; secondLetter++)
		{
			for (char thirdLetter = 'a'; thirdLetter <= 'z'; thirdLetter++)
			{
				guessedPassword += firstLetter; 
				guessedPassword += secondLetter; 
				guessedPassword += thirdLetter; 

				//cout << guessedPassword << "\n";
				auto stopTime = std::chrono::high_resolution_clock::now();
				if (guessedPassword == password)
				{
					//break;
					cout << "Password found!\n";
					cout << password << " = " << guessedPassword << "\n";
					cout << "It took this many nanoseconds? to crack: "
						<< (stopTime - startTime).count() << "\n";

					system("pause"); 

				}
				//cout << firstLetter;
				//cout << secondLetter;
				//cout << thirdLetter << "\n";
				guessedPassword = ""; 

			}

		}
		cout << "\n";
	}

}

