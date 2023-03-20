#include <iostream>

void inport()
{	
	int num;
	int mas[11]={0};
	std::cout << "Enter number in 1 to 10 scope"<< std::endl;
	std::cin >> num;
	while (num != -1)
	{
		if (num < 0 && num >= 10)
			std::cout << "Enter number in 1 to 10 scope" << std::endl;
		else 
			mas[num]++;
		std::cin >> num;
	}
	for (int i =1;i<=10;i++)
		std::cout << i << ":" << mas[i]<< std::endl;

}
int main()
{
	inport();
	return 0;
}
