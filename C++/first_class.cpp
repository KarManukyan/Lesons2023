#include <iostream>
#include <string>

class human
{
	public:
		std::string name;
		int age;
};
void sorting(human arr[],int n);
int main()
{
	human h1;
	human h2;
	human h3;
	human h4;
	human h5;
	h1.name ="John";
	h1.age = 25;
	h2.name = "Sam";
	h2.age = 19;
	h3.name = "Josh";
	h3.age = 30;
	h4.name = "Herbert";
	h4.age = 29;
	h5.name = "Ann";
	h5.age = 22;
	human arr[5] = {h1,h2,h3,h4,h5};
	sorting(arr,5);
	return 0;
}

void sorting(human arr[],int n)
{
	human tmp;
	for (int i = 0;i<n;i++)
	{
		for (int j = 0;j<n-1;j++)
		{
			if (arr[j].age > arr[j+1].age)
			{
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}		
	for (int i = 0;i < n;i++)
		std::cout << arr[i].name<< " ";
	std::cout<<std::endl;
}

