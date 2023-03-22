#include <iostream>

class human{
	public:
		std::string name;
		std::string sname;
		int age;
		void speak(std::string mstr)
		{
			std::cout << mstr + "\n";
		}
};

int main()
{
	human h1;
	h1.name = "John";
	h1.sname = "Smith";
	h1.age = 25;
	h1.speak("Barev");
	std::cout << h1.name<< std::endl;
}
