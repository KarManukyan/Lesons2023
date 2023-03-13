#include <iostream>

int main()
{
	int num = 1;
	int tmp = 1;
	std::cout << "Enter number: ";
	std::cin >> num;
	for (int i=1; i <= num; i++)
	{
		for (int j=1; j<=i; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	
	std::cout << std::endl;
	for (int i = 1;i <= num; i++)
	{
		for (int j = num-1;j >= i;j--)
		{
			std::cout << "-";
		}
	std::cout << "*";
		
		std::cout << std::endl;
	}




	return 0;
}
