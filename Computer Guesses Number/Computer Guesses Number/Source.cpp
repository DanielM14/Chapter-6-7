//
//
// Daniel McGlasson 

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int userTries = 0;
	int userNumber;
	bool error = false;
	enum statusTypes { NADA, HIGH, LOW, CORRECT };
	int status = NADA;
	int min = 0;
	int max = 105;
	int guess = rand() % 100 + 1;

	std::cout << "Wlecome to my computer guesss game";
	std::cout << "Where the computer guesses the number the human put in!" << std::endl;
	std::cout << "Please enter your number (between 1 & 100): " << std::endl;
	std::cin >> userNumber;

	std::cin.get();

	while (status != CORRECT)
	{
		++userTries;

		std::cout << "Computer's Guess: " << guess << "\n" << std::endl;

		std::cout << "Press ENTER to continue..." << std::endl;
		std::cin.get();

		if (guess < userNumber)
		{
			status = LOW;
		}
		else if (guess > userNumber)
		{
			status = HIGH;
		}
		else if (guess == userNumber)
		{
			status = CORRECT;
		}

		if (status == HIGH)
		{
			max = guess;

			do
			{
				guess = rand() % 100 + 1;

			} while (guess > max || guess < min);

		}
		else if (status == LOW)
		{
			min = guess;

			do
			{
				guess = rand() % 100 + 1;
			} while (guess > max || guess < min);

		}

		else if (status == CORRECT)
		{
			std::cout << "The number was " << guess << "." << std::endl;
			std::cout << "It took the computer " << userTries << " tries!" << std::endl;
			std::cout << "Thanks for playing!" << std::endl;
		}

		else
		{
			error = true;
			std::cout << "Somethings wrong" << std::endl;
		}
	}
	system("pause");
	return 0;
}