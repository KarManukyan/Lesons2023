#include <iostream>
#include <cmath>
int main()
{
	int num=0;
	int res = 0;
	int temp=0;
	int i = 0;
	std::cout << "Enter any binary number for converting to decimal: ";
	std::cin >> num;
	while (num > 0)
        {
                temp = num % 10;
                res += pow(2, i) * temp;
		num = num /10;
		i++;
	}
	std::cout << res << std::endl;
	return 0;
}
