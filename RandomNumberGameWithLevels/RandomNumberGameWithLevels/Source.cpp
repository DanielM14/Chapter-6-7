// Program: Switch Statments
// Date: 4-19-2018
// Author: Daniel McGlasson

#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int level1(int count)
{
	int numberChoice;
	int secret;
	int r;
	srand(time(NULL));

	secret = rand() % 10 + 1;
	do{
		std::cout << "Please pick a number between 1 - 10" << std::endl;
		std::cin >> numberChoice;
		if (numberChoice > secret)
		{
			std::cout << "The number you chose is to high!, guess agian loser" << std::endl;
			count = count + 1;
			//count++//
		}
		else if (numberChoice < secret)
		{
			std::cout << "The number you have chose is to low!, guess again loser" << std::endl;
			count = count + 1;
		}
	} while (numberChoice != secret);
	std::cout << "Congrats! " << std::endl;

	r = count;
	return r;
}
int level2(int count)
{
	int numberChoice;
	int secret;
	int r;
	srand(time(NULL));

	secret = rand() % 10 + 1;
	do{
		std::cout << "Please pick a number between 1 - 50" << std::endl;
		std::cin >> numberChoice;
		if (numberChoice > secret)
		{
			std::cout << "The number you chose is to high!, guess agian loser" << std::endl;
			count = count + 1;
			//count++//
		}
		else if (numberChoice < secret)
		{
			std::cout << "The number you have chose is to low!, guess again loser" << std::endl;
			count = count + 1;
		}
	} while (numberChoice != secret);
	r = count;
	return r;
}
int level3(int count)
{
	int numberChoice;
	int secret;
	int r;

	srand(time(NULL));

	secret = rand() % 10 + 1;
	do{
		std::cout << "Please pick a number between 1 - 100" << std::endl;
		std::cin >> numberChoice;
		if (numberChoice > secret)
		{
			std::cout << "The number you chose is to high!, guess agian loser" << std::endl;
			count = count + 1;
			//count++//
		}
		else if (numberChoice < secret)
		{
			std::cout << "The number you have chose is to low!, guess again loser" << std::endl;
			count = count + 1;
		}
	} while (numberChoice != secret);
	r = count;
	return r;
}

int main()
{
	int level1Count = 0, level2Count = 0, level3Count = 0, totalLevelCount;
	int levelChoice;

	std::cout << "Please pick a level you want to play 1 for Easy, 2 for Medium, 3 for Hard >>>" << std::endl;
	std::cin >> levelChoice;

	switch (levelChoice)
	{
	case 1:
		level1(level1Count);
		break; 
	case 2:
		level2(level2Count);
		break;
	case 3:
		level3(level3Count);
		break;
	}
	totalLevelCount = level1Count + level2Count + level3Count;
	std::cout << "Congrats" << std::endl;
	std::cout << "It took you " << totalLevelCount << " tries to get it correct." << std::endl;
	system("pause");
	return 0;
}