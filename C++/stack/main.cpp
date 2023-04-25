#include "stack.hpp"

int main()
{
	Stack l;
	std::cout << "Adding:  ";
	l.push(5);
	l.top();
	std::cout << "Adding:  ";
	l.push(10);
	l.top();
	std::cout << "Adding:  ";
	l.push(15);
	l.top();
	std::cout << "Size is " << l.get_size() << std::endl;
	std::cout <<"Deleting last added member and return the value: ";
	l.pop();
	std::cout << "Size is " << l.get_size() << std::endl;
	return 0;
}
