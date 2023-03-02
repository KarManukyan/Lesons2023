#include <iostream>

int main()
{
	int a[5]={};
	int step =0;
	for (int i=0;i<5;i++)
	{
		std::cin >> a[i];
	}
	int maxi= a[0];
	int maxv = 0;
	for (int i = 0; i<5;i++)
	{
		if (a[i]>maxv)
		{
			maxv = a[i];
			maxi = i;
		}
	}	
		std::cout << "MAX value is: " << maxv << std::endl;

	std::cout << "New List"<< std::endl;
	for (int i=0;i<5;i++)
	{
		if (a[i]==a[maxi])
		{
			step += 1;
		}
		std::cout << a[i+step]  << std::endl;

	}
	
		
	return 0;
}
