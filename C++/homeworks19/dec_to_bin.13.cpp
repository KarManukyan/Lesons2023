#include <iostream>

int main() 
{
	int num;
	int i = 0;
	int arr[32]{};
	std::cout << "Enter number to convert in binary: ";
	std::cin >> num;
	while (num >0)
	{
		arr[i] = num % 2;
		num = num / 2;
		i++;
	}
	for (int j = i;j>=0;j--)	
		std::cout << arr[j];

	std::cout << std::endl;
	return 0;
}
