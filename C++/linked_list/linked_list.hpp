#include <iostream>
#include <cassert>

class Node					// Declearing class Node
{
public:
	int m_data;
	Node* m_next_ptr;
	Node(int data);
};

class List					// Declearing class List
{	
private:
	int size;
	Node *first;
public:
	List();					// Default constructer.Creating newempty list.

	void pop_front();			// Deleted first member of list.
	
	void push_back(int data);		// Adding member from beck with gived value.
		
	void insert(int index, int data);	// Adding member of list with given value in the given postition.

	int remove_by_index(int index);		// Remove a member of list from given postition.

	int& operator[](const int index);	// Overloading  [ ]

	int get_size();				// Showing the size of list

	bool is_empty();			// Checking state and return False if the list is empty
	
	void print();				// Printing elements of list
	
	~List();				//Destructer wich is deleted the list

};
