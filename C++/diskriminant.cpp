#include <iostream>
#include <math.h>

int main()
{
	int side1;
	int side2;
	int side3;
	double x1 = 0;
	double x2 = 0;
	double d = 0;
	std::cin >> side1 >> side2 >> side3;
	d = side2*side2-4*side1*side3;
	if (d > 0)
	{
		x1 = (-side2-(sqrt(d)))/2*side1;
		x2 = (-side2+(sqrt(d)))/2*side1;
		std::cout << "x1 = " << x1 << "x2= " << x2 << std::endl;
	}
	else if (d=0)
	{
		x1 = -side2/(2*side1);
		x2 = x1;
		std::cout << "x1 = " << x1 << "x2= " << x2 << std::endl;	
	}
	else
	{
		std::cout << "There is not any answer." << std::endl;
	}
	return 0;
}
