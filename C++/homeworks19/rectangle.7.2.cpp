#include <iostream>

int main()
{
	int n = 2;
	int m = 2;
	char smb;
	std::cout << "Input size of side 1: ";
	std::cin >> n;
	std::cout << "Input size of side 2: ";
	std::cin >> m;
	std::cout << "Input any character: ";
	std::cin >> smb;
	for (int i = 1; i <= m; i++)
	{
		for (int j =1; j <= n; j++)
		{
			if (i ==1 || i == m)
			{
				std::cout << smb;
			}
			else
			{
				if (j ==1 || j == n)
					std::cout << smb;
				else
					std::cout << " ";
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
