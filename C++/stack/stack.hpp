#include <iostream>
#include <cassert>

class Node					// Declearing class Node
{
public:
	int m_data;
	Node* m_next_ptr;
	Node(int data);
};

class Stack					// Declearing class STack
{	
private:
	int size;
	Node *first;
public:
	Stack();				// Default constructer.Creating new empty stack.

	void pop();				// Deleted last added member of stack.
	
	void push(int data);			// Adding member with gived value
		
	int get_size();				// Showing the size of stack

	bool is_empty();			// Checking state and return False if the stack is empty
	
	void print();				// Printing elements of stack
	
	~Stack();				//Destructer wich is deleted the stack

};
