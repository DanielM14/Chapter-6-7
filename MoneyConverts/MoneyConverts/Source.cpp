// Money Convertion
// 4-25-2018
// Daniel McGlasson

#include <iostream>
#include <string>

int main()
{
	double usDollars, britishPound, southAfricanRand, mexicanPeso, japaneseYen, euro, indianRupee, canadianDollar;
	int userChoice;
	float n = 1.2345;
	int scaled = n * 100;
		n = static_cast<float>(scaled) / 100.0;

	std::cout << "How many U.S. Dollars do you have >>>" << std::endl;
	std::cin >> usDollars;
	std::cout << "What type of Money do you want 1 for Pounds, 2 for Canadian Dollar, 3 for Rands, 4 for Peso, 5 for yen, 6 for euro >>>" << std::endl;
	std::cin >> userChoice; 
	switch (userChoice)
	{
	case 1:
		britishPound = usDollars / 1.3845;
		std::cout << "You have " << britishPound << "." << std::endl;
		break;
	case 2:
		canadianDollar = usDollars / 1.0950;
		std::cout << "You have " << canadianDollar << "." << std::endl;
		break;
	case 3:
		southAfricanRand = usDollars / 0.08018;
		std::cout << "You have " << southAfricanRand << "." << std::endl;
		break;
	case 4:
		mexicanPeso = usDollars / 1.886;
		std::cout << "You have " << mexicanPeso << "." << std::endl;
		break;
	case 5:
		japaneseYen = usDollars / 1.0101;
		std::cout << "You have " << japaneseYen << "." << std::endl;
		break;
	case 6:
		euro = usDollars*0.71;
		std::cout << "You have " << euro << "." << std::endl;
	default:
		break;
	}
	system("pause");
	return 0;
}