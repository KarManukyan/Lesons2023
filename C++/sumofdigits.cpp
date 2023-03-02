#include <iostream>
int main() 
{
	int num = 0;
	int sum = 0;
	int temp = 0;
	std::cout << "Enter any number: "<< std::endl;
	std::cin >> num;
	while (num > 0)
	{
		temp = num % 10;
		sum = sum +temp;
		num = num - temp;
		if (temp==0)
		{
			num = num /10;
		}
	}
	std::cout << "Sum is " << sum << std::endl;
	return 0;

}
