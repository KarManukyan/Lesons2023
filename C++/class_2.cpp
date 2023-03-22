#include <iostream>
#include <string>

class human
{
	std::string name;
	int age;
	public:
		human(std::string nam,int ag)
		{
			name =nam;
			age = ag;
		}
		std::string get_name()
		{
			return name;
		}
		int get_age()
		{
			return age;
		}
};
void sorting(human arr[],int n);
int main()
{
	human h1 ("John",25);
	human h2("Sam",19);
	human h3 ("Josh",30);
	human h4("Herbert",29);
	human h5("Ann",22);
	human arr[5] = {h1,h2,h3,h4,h5};
	sorting(arr,5);
	return 0;
}

void sorting(human arr[],int n)
{
	human tmp("",0);
	for (int i = 0;i<n;i++)
	{
		for (int j = 0;j<n-1;j++)
		{
			if (arr[j].get_age() > arr[j+1].get_age())
			{
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}		
	for (int i = 0;i < n;i++)
		std::cout << arr[i].get_name()<< " ";
	std::cout<<std::endl;
}

