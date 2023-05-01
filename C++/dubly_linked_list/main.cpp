#include "doubly_linked_list.hpp"

int main()
{
	List l;
	l.push_front(100);
	l.print();
	std::cout <<"Adding members from back " << std::endl;
	l.push_back(5);
	l.push_back(10);
	l.push_back(15);
	l.print();
	std::cout << "Size is " << l.get_size() << std::endl;
	std::cout <<"Adding member from front " << std::endl;
	l.push_front(1);
	l.print();
	std::cout <<"First member: ";
	std::cout<<l.front()<< std::endl;
	std::cout <<"Last member: ";
	std::cout<<l.back()<< std::endl;
	l.pop_front();
	l.pop_back();
	l.insert(1,44);
	l.print();
	l.reverce();
	std::cout <<"Reverced list:  " << std::endl;
	l.print();
	std::cout <<"First member: ";
	std::cout<<l.front()<< std::endl;
	std::cout <<"Last member: ";
	std::cout<<l.back()<< std::endl;
	return 0;
}
