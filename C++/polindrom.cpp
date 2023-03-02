#include <iostream>
int main()
{
	int num;
	std::cout << "Enter three digit number: " << std::endl;
	std::cin >> num;
	if (num/100 == num%10)
	{
		std::cout << num << " is polindrome"<< std::endl;
	}
	return 0;

}
