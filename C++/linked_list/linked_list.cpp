#include "linked_list.hpp"

Node::Node(int data)								
{
	m_data = data;
	m_next_ptr = nullptr;
}

List::List()
{	
	size = 0;
	first = nullptr;
}

void List::pop_front()								// Deleting first member from list. If the list is empty giving infromation about it
{
	assert(size > 0 && "There is no element to remove.The list is empty.");
	Node *n = first->m_next_ptr;
	delete first;
	first = n;
	size--;
}
	
void List::push_back(int data)							// Adding member from back
{
	if (first== nullptr)
	{
		first = new Node(data);
	}
	else
	{
		Node* n = first;
		while(n->m_next_ptr != nullptr)
		{
			n = n->m_next_ptr;
		}
		n->m_next_ptr = new Node(data);
	}	
	size++;
}	
void List::insert(int index, int data)						// Adding member in the given position with given value
{										// CHecking given position-is it out of range or not
	assert(index >= 0 && index < size && "Inputed index is out of range.");
	Node *prev = new Node(data);
	if (index ==0)
	{
		prev->m_next_ptr = first;
		first = prev;
	}
	else
	{
		Node *n = first;
                for (int i = 0; i< index - 1; i++)
		{
                        n = n->m_next_ptr;
                }
		prev->m_next_ptr = n->m_next_ptr;
		n->m_next_ptr = prev;
	}
	size++;
}

int List::remove_by_index(int index)						// Rwmoving member of list with given position and return the value.
{										// Checking list is empty or not and is the given position out of range or not
	assert(size > 0 && "There is no element to remove.The list is empty."); // Returning information about empty list or out of range
	assert(index >= 0 && index < size && "Inputed index is out of range.");
	if (index ==0)
        {
        	pop_front();
	}
        else
        {
                Node *prev = first;
		for (int i = 0; i< index - 1; i++)
		{
			prev = prev->m_next_ptr;
		}
		Node *to_delete = prev->m_next_ptr;
		prev->m_next_ptr = to_delete -> m_next_ptr;
		std::cout << to_delete->m_data<< std::endl;
		delete to_delete;
		size--;
	}
}	

int& List::operator[](const int index)						// Overloading [ ]
{
	assert(index >= 0 && index < size && "Inputed index is out of range."); // Checking given position-is it out of range or not
	int count = 0;
	Node* n = first;
	while (count < size)
	{
		if (count == index)
		{
			return n->m_data;
		}
		n = n->m_next_ptr;
		count++;
	}
}

int List::get_size()								// Returning count of list`s members
{
	return size;
}
	
bool List::is_empty()								// Returning False if the list is empty
{										// Returning True if there are some members
	if (first == nullptr)
	{
		return true;
	}
	return false;
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
	while(size)
        {
		Node *n = first->m_next_ptr;
		delete first;
                first = n;
                size--;
        }
	std::cout << "List is deleted with destructer." << std::endl;
}

