// Program: Switch Statments
// Date: 4-19-2018
// Author: Daniel McGlasson

#include <iostream>
#include <string>
int main()
{
	int bookScanID = 0;
	std::string bookOwner;

	std::cout << "Book ID number please enter here >>> " << std::endl;
	std::cin >> bookScanID;

	switch (bookScanID)
	{
	case 277364:
		bookOwner = "Mr.Brosius";
		break;
	case 277343:
		bookOwner = "Aaron";
		break;
	case 277342:
		bookOwner = "Brady";
		break;
	case 277346:
		bookOwner = "Shawn";
		break;
	case 277357:
		bookOwner = "Kane";
		break;
	default:
		bookOwner = "Invalid";
		break;
	}
	if (bookOwner == "Invalid")
	{
		std::cout << "Invalid" << std::endl;
	}
	else
	{
		std::cout << bookOwner << std::endl;
	}
	system("pause");
	return 0;
}