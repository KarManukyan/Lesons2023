#include <iostream>
#include <cassert>

class Node					// Declearing class Node
{
public:
	int m_data;
	Node* m_next_ptr;
	Node(int data);
};

class Queue					// Declearing class Queue
{	
private:
	int size;
	Node *first;
public:
	Queue();				// Default constructer.Creating newempty queue.

	void push(int data);			// Adding member from beck with gived value.
		
	void pop();				// Deleting first added member.

	int get_size();				// Showing the size of queue.

	bool is_empty();			// Checking state and return False if the queue is empty.

	void print();				// Printing elements of queue.
	
	~Queue();				//Destructer wich is deleted the queue.

};
