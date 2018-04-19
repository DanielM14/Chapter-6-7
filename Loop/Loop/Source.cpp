// Program: loop
// Date: 4-19-2018
// Author: Daniel McGlasson

#include <iostream>
#include <string>
using namespace::std;

int main()
{
	for (int i = 1; i < 10; i++)
	{
		std::cout << "Count up in " << i << std::endl;
	}
	for (int x = 10; x > 1; x--)
	{
		std::cout << "Count down in " << x << std::endl;
	}
	system("pause");
	return 0;
}