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
void List::pop_front()								// deleting first member.
{
	assert(size > 0 && "The list is empty.");
	std::cout<< front()<<std::endl;
	if (size > 1)
	{
		Node* n = first;
		first = first->m_next_ptr;
		first->m_prev_ptr = nullptr;
		delete n;
	}
	else if (size == 1)
	{
		delete first;
		first = nullptr;
		last = first;
	}
	size--;
}
void List::pop_back()								// deleting last member.
{
	assert(size > 0 && "The list is empty.");
	std::cout<< back()<<std::endl;
	if (size > 1)
        {
                Node*n = last;
		last = last->m_prev_ptr;
		last->m_next_ptr = nullptr;
		delete n;
        }
        else
        {
                delete last;
                last = nullptr;
        	last = first;
        }
        size--;
}
void List::insert(int index, int data)						// inserting new member with given index and given value.
{
	assert(index >= 0 && index <= size && "Inputed index is out of range.");
	if (index == 0)
	{
		push_front(data);
	}
	else if (index == size)
	{
		push_back(data);
	}
	else
	{
		Node*n = nullptr;
		if (index <= size/2)
		{
			n = first;
			for (int i = 1; i < index; i++)
			{	
				n = n->m_next_ptr;
			}
		}
		else
		{
			n = last;
			for (int i = size-1; i >= index; i--)
			{
				n = n->m_prev_ptr;
			}
		}
		Node *inserted = new Node(data);
		inserted->m_prev_ptr = n;
		inserted->m_next_ptr = n->m_next_ptr;
		n->m_next_ptr->m_prev_ptr= inserted;
		n->m_next_ptr = inserted;
		size++;
	}
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
void List::reverce()								// Reversing a list members
{
	Node *n = first;
	Node *tmp = nullptr;
	last = first;
	while (n != nullptr)
	{
		tmp = n->m_prev_ptr;
		n->m_prev_ptr = n->m_next_ptr;
		n->m_next_ptr = tmp;
		n = n->m_prev_ptr;

	}	
	if (tmp != nullptr)
	{
		first = tmp->m_prev_ptr;
	}
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

