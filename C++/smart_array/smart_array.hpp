#include <iostream>
#include <cassert>

class smart_array
{
	private:
		int m_size;
		int m_capacity;
		int* m_array;

	public:	
		smart_array();
		smart_array(int size);
		int get_size();					// get lenght of array
		int get_el(int index);				// returning element from the given position 
		void change_capacity();				// increase working area / capacity / 
		void push_back(int num);			// adding element from back
		void pop();					// deleting last element in the array
		void insert(int index, int num );		// inserting element / num / at the selected position / index /
		~smart_array();					// destructer
};

void print_array(smart_array &array);				// printing content of array
