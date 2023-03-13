#include <iostream>

int main()
{
        int num = 0;
        int rev = 0;
        int temp = 0;
	std::cout << "Enter number to invers: ";
	std::cin >> num;
        
	// inversing number

	while (num > 0)
        {
                temp = num % 10;
                rev = rev +temp;

                num = num - temp;
                if (temp==0)
                {
                        num = num /10;
			rev = rev*10;
                }
        }
        std::cout << "Inversed number is: " << rev << std::endl;
        return 0;
}
