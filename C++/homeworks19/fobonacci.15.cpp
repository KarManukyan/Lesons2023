#include <iostream>

int main()
{
	int num1 = 0,num2 = 1,num3 = 1;
	int n;
	std::cout << "Enter nummber to print the number of fibonacci: ";
	std::cin >> n;
	std::cout << num1 <<" "<< num2 <<" " << num3;
	while (n > 3)
	{
		num1 = num2;
		num2 = num3;
		num3 = num2+num1;
		n--;
		std::cout << " " << num3;
	}
	std::cout << std::endl;;

	std::cout << "Member is "<< num3<<std::endl;
	
}
