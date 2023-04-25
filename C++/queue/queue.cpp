#include "queue.hpp"

Node::Node(int data)								
{
	m_data = data;
	m_next_ptr = nullptr;
}

Queue::Queue()
{	
	first = nullptr;
	size = 0;
}
	
void Queue::push(int data)							// Adding member from back
{
	if (first== nullptr)
	{
		first = new Node(data);
	}
	else
	{
		Node* n = new Node(data);
		n->m_next_ptr = first;
		first = n;
	}	
	size++;
}

void Queue::pop()								// Deleting first added member
{
	assert(size > 0 && "The list is empty.");
	if (size == 1)
	{
		delete first;
		first = nullptr;
	}
	else
	{	
		Node* n = first;
		Node* prev;
		while(n->m_next_ptr != nullptr)
		{
			prev = n;
			n = n->m_next_ptr;
		}
		delete n;
                prev->m_next_ptr = nullptr;
	}	
	size--;	
}

int Queue::get_size()								// Returning count of queue`s members
{
	return size;
}
	
bool Queue::is_empty()								// Returning True if the queue is empty
{										// Returning False if there are some members
	if (first == nullptr)
	{
		return true;
	}
	return false;
}

void Queue::print()								// Printing queue members
{
	Node* n = first;
	while (n != nullptr)
	{
		std::cout << n-> m_data << " ";
		n = n->m_next_ptr;
	}
	std::cout << std::endl;
}
Queue::~Queue()									// Destructer wich is deleting queue members one by one from memory
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

