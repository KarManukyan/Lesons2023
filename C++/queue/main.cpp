#include "queue.hpp"

int main()
{
	Queue l;
	l.push(5);
	l.push(10);
	l.push(15);
	l.print();
	std::cout << "Size is " << l.get_size() << std::endl;
	std::cout << "Deleting first added member " << std::endl;
	l.pop();
	std::cout << "Adding member from front" << std::endl;
	l.push(62);
	l.print();
	std::cout << "Deleting first added member " << std::endl;
	l.pop();
	l.print();
	std::cout << "Size is " << l.get_size() << std::endl;
	return 0;
}
