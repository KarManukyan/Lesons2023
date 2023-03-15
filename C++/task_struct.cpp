#include <iostream>
#include <string>


struct human
{
	std::string name;
	int age;
};

int main()
{
	std::string max_name;
	int max = 0;
	human human1,human2;
	human1.name = "Jhon";
	human1.age = 25;
	human2.name = "Jannet";
	human2.age = 28;
	human arr[2]{};
	arr[0] = human1;
	arr[1] = human2;
	for (int i = 0;i<2;i++)
	{	
		if (arr[i].age> max)
		{
			max = arr[i].age;
			max_name=arr[i].name;
		}
	}
	std::cout << max_name << " is older, "<< "he/she is " << max <<" years old." <<std::endl;

}
