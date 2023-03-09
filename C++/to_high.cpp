#include <iostream>
#include <ctime>
int dif_10(int random_variable);
int get_scope(int count);

int main() 
{	int count = 0;
	//get_scope(count);
	std::srand(std::time(nullptr));
	int random_variable = std::rand()%get_scope(count);

	while (dif_10(random_variable) < 2)
	{
		std::srand(std::time(nullptr));
        	int random_variable = std::rand()%get_scope(count);
		dif_10(random_variable);
		get_scope(count);
	}

	return 0;
}
int get_scope(int count)
{
        int scope;
        if (count == 0)
                scope = 100;
        else if (count ==1)
                scope = 1000;
        else if (count == 2)
	 	scope = 10000;
	return scope;
}

int dif_10(int random_variable)
{
	int num;
	int score = 0;
	int count;
	std::cout << "Gues the number..."<< std::endl;
	std::cin  >> num;
	while (num != random_variable)
	{ 
		if (num > random_variable + 10) 
		{	std::cout << "High more then 10" << std::endl;
			score++;
		}
		else if (num > random_variable)
		{
			std::cout << "High.." << std::endl;
			score++;
		}
		if (num < random_variable -10)
		{
			std::cout << "Low more then 10" << std::endl;
			score++;
		}
		else if (num < random_variable)
		{
			std::cout << "Low.." << std::endl;
			score++;
		}
		
		std::cin >> num;

	}
	count++;
	std::cout << "True answer: "<< random_variable << " Score is: " << score << " Yor level is: " << count <<std::endl;

	return count;
}
