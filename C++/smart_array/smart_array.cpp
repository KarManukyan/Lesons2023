#include "smart_array.hpp"

smart_array::smart_array()
{
	m_size = 0;
	m_capacity = 5;
	m_array = new int[m_size];
}
smart_array::smart_array(int size)
{
	m_size = size;
	m_capacity = m_size;
	m_array = new int[m_size];
}
smart_array::~smart_array()
{
	delete [] m_array;
}

int smart_array::get_size()						// get lenght of array
{
	return m_size;
}

int smart_array::get_el(int index)					// returning element from the given position 
{
	assert(index >= 0 && m_size > index);
	return m_array[index];
}

void smart_array:: change_capacity()					// increase working area / capacity / 
{	
	if (m_capacity == 0)
	{
		m_capacity = 1;
	}
	else if (m_capacity == m_size)
	{
		m_capacity = 2 * m_capacity;
		int* tmp_arr= new int[m_capacity];
		for (int i = 0; i < m_size; i++)
		{
			tmp_arr[i] = m_array[i];
		}
		delete[] m_array;
		m_array = tmp_arr;
	}
}

void smart_array:: push_back(int num)					// adding element from back
{
	if (m_size < m_capacity)
	{
		m_size++;
		m_array[m_size-1]=num;
	}
}

void smart_array:: pop()							// deleting last element in the array
{
	if (m_size ==0)
	{
		std::cout<<"Array g is 0."<<std::endl;
	}
	else
	{
		m_size--;
	}
}

void smart_array::insert(int index, int num )				// inserting element / num / at the selected position / index /
{
	m_size++;
	if (m_size >= m_capacity)
	{
		change_capacity();
	}
	for (int i = m_size - 1; i > index; i-- )
	{
		m_array[i]=m_array[i-1];
	}
		m_array[index] = num;
}

void print_array(smart_array &array)					// printing content of array
{
	for (int i =0; i < array.get_size(); i++)
	{
		std::cout<<array.get_el(i)<<std::endl;
	}
}
