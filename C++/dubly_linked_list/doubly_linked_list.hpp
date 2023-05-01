#include <iostream>
#include <cassert>

class Node					// Declearing class Node
{
public:
	int m_data;
	Node* m_next_ptr;
	Node* m_prev_ptr;
	Node(int data);
};

class List					// Declearing class List
{	
private:
	int size;
	Node *first;
	Node *last;
public:
	List();					// Default constructer.Creating newempty list.

	
	void push_back(int data);		// Adding member from beck with gived value.

	void push_front(int data);		// Adding member from back with given value.

	void pop_front();			// Deleting first member.
	
	void pop_back();			// Deleting last member.

	void insert(int index, int data);	// Inserting new member with given index and given value.

	int front();				// Showing first member.
	
	int back();				// Showing last member.
	
	int get_size();				// Showing the size of list.

	void reverce();
	
	void print();				// Printing elements of list.
	
	~List();				//Destructer wich is deleted the list.

};
