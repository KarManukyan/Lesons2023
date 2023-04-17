#include "linked_list.hpp"

int main()
{
	List l;
	l.push_back(5);
	l.push_back(10);
	l.push_back(15);
	l.print();
	std::cout << "Size is " << l.get_size() << std::endl;
	std::cout <<"Element in the index 1: " << l[1] << std::endl;
	std::cout <<"Adding member in the index 2 " << std::endl;
	l.insert(2,55);
	l.print();
	std::cout <<"Deleting member in the index 3 " << std::endl;
	l.remove_by_index(3);
	std::cout <<"Deleting first member ." << std::endl;
	l.pop_front();
	l.print();
	List list(l);
	list.insert(1,100);
	list.print();
	return 0;
}
