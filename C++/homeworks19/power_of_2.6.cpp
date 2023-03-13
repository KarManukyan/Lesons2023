#include <iostream>

int main()
{
	int num;
	std::cout << "Enter number for checking is it power of 2: ";
	std::cin >>num;
	int temp = 1;
	while (temp < num)
	{
		temp = temp * 2;
	}
	if (temp == num)
		std::cout << "Number "<< num << " is power of 2."<<std::endl;
	else
		std::cout << "Number "<< num << " is NOT power of 2."<<std::endl;
	return 0;
}
