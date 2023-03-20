#include <iostream>
#include <cmath>

int main()
{
	std::cout << "Chacking and printing armstrong numbers between 10 to 9999..."<< std::endl;

	for (int n = 10; n < 10000; n++)
	{
		if (n < 100)
		{
			if (pow((n / 10), 2) + pow((n % 10), 2) == n) 
				std::cout << n << std::endl;
		}
		else if (n >= 100 && n < 1000)
		{
			if (pow((n / 100), 3) + pow(((n / 10) % 10), 3) + pow((n % 10), 3) == n) 
				std::cout << n <<std::endl;
		}
		else
		{	
			if (pow((n / 1000), 4) + pow(((n / 100) % 10), 4) + pow(((n / 10) % 10), 4) + pow((n % 10), 4) == n) 
				std::cout << n <<std::endl;
		}
	}
	return 0;
}
