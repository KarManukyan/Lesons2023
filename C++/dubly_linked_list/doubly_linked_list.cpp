#include "doubly_linked_list.hpp"

Node::Node(int data)								
{
	m_data = data;
	m_next_ptr = nullptr;
	m_prev_ptr = nullptr;
}

List::List()
{	
	size = 0;
	first = 0;
	last = 0;
}
void List::push_back(int data)							// Adding member from back
{
	Node* n = new Node(data);
	if (first == 0)
	{
		first = n;
	}
	else
	{
		last->m_next_ptr = n;
		n->m_prev_ptr = last;
	}
	last = n;	
	size++;
}
void List::push_front(int data)							// Adding member from front
{
        Node *n = new Node(data);
        if (last == 0)
        {
		last = n;
	}
	else
	{
		n->m_next_ptr = first;
		first->m_prev_ptr = n;
		first = n;
	}
	first = n;
	size++;
}

int List::front()								// SHowing the value of first member
{
	assert(size > 0 && "The list is empty.");
	return first->m_data;
}

int List::back()								// Showing the value of last member
{
	assert(size > 0 && "The list is empty.");
	return last->m_data;
}

int List::get_size()								// Returning count of list`s members
{
	return size;
}
	
void List::print()								// Printing list members
{
	Node* n = first;
	while (n != nullptr)
	{
		std::cout << n-> m_data << " ";
		n = n->m_next_ptr;
	}
	std::cout << std::endl;
}

List::~List()									// Destructer wich is deleting list members one by one from memory
{
	assert(size > 0 && "The list is empty.");
	while(size)
        {
		Node *n = first->m_next_ptr;
		delete first;
                first = n;
                size--;
        }
}

