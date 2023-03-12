#include <iostream>

int main()
{
	int n = 2;
	int m = 2;
	std::cout << "Input size of side 1: ";
	std::cin >> n;
	std::cout << "Input size of side 2: ";
	std::cin >> m;
	for (int i = 1; i <= m; i++)
	{
		for (int j =1; j <= n; j++)
		{
			if (i ==1 || i == m)
			{
				std::cout << "*";
			}
			else
			{
				if (j ==1 || j == n)
					std::cout << "*";
				else
					std::cout << " ";
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
