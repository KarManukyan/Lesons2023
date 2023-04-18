#include "stack.hpp"

Node::Node(int data)								
{
	m_data = data;
	m_next_ptr = nullptr;
}

Stack::Stack()
{	
	size = 0;
	first = nullptr;
}

void Stack::pop()								// Deleting last added member from stack. If the stack is empty giving infromation about it
{
	assert(size > 0 && "There is no element to remove.The list is empty.");
	Node *n = first->m_next_ptr;
	int tmp = first->m_data;
	delete first;
	first = n;
	size--;
	std::cout<< tmp << std::endl;
}
	
void Stack::push(int data)							// Adding member
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

int Stack::get_size()								// Returning count of stack`s members
{
	return size;
}
	
bool Stack::is_empty()								// Returning True if the stack is empty
{										// Returning False if there are some members
	if (first == nullptr)
	{
		return true;
	}
	return false;
}

void Stack::print()								// Printing stack`s first members
{	assert(size > 0 && "The Stack is empty.");
	Node* n = first;
	std::cout<< n-> m_data << std::endl;
}
Stack::~Stack()									// Destructer wich is deleting stack members one by one from memory
{
	assert(size > 0 && "The Stack is empty.");
	while(size)
        {
		Node *n = first->m_next_ptr;
		delete first;
                first = n;
                size--;
        }
}

