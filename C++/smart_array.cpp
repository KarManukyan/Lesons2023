#include <iostream>
#include <cassert>

class Smartarray
{
	private:
		int m_size;
		int m_capacity;
		int* m_array;

	public:	
		Smartarray()
		{
			m_size = 0;
			m_capacity = 5;
			m_array = new int[m_size];
		}
		Smartarray(int size)
		{
			m_size = size;
			m_capacity = m_size;
			m_array = new int[m_size];
		}
		~Smartarray()
		{
			delete [] m_array;
		}
		int get_size()				// get lenght of array
		{
			return m_size;
		}
		int get_el(int index)
		{
			assert(index >= 0 && m_size > index);
			return m_array[index];
		}
		void change_capacity()
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
		void push_back(int num)
		{
			if (m_size < m_capacity)
			{
				m_size++;
				m_array[m_size-1]=num;
			}
		}
		void pop()
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
		void insert(int index, int num )
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
			//m_size++;
		}
};
void print_array(Smartarray & array)
{
	for (int i =0; i < array.get_size(); i++)
	{
		std::cout<<array.get_el(i)<<std::endl;
	}
}

int main()
{
	Smartarray arr;
//	print_array(arr);
	arr.push_back(5);
	arr.push_back(4);
	arr.push_back(3);
	arr.push_back(2);
	arr.push_back(1);
	arr.push_back(6);
	arr.pop();
	arr.insert(2,15);
	arr.get_el(3);
	print_array(arr);
}
