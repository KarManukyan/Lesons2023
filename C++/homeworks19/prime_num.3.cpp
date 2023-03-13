#include <iostream>

int parz_tiv(int num);

int main()
{
        int number;
	int num;
        std:: cout << "Enter number for checking: ";
        std::cin >> number;
	parz_tiv(number);
}
int parz_tiv(int num)
{
	int i = 1;
        int count = 0;
        int res = 0;
        while (i < num)
        {
                res = num % i;
                if (res == 0)
                        count++;
                i++;
        }
        if (count > 1)
        {
                std::cout << "The number " << num << " is not parz tiv." << std::endl;
                return num;
        }
        else
        {

                std::cout << "The number " << num << " is parz tiv." << std::endl;
                return num;
        }
	
}


