#include <iostream>
#include <cassert>

class List
{	
	private:
	class Node
	{
		public:
		int m_data;
		Node* m_next_ptr;

		Node(int data =0, Node* next_ptr = nullptr)
		{
			m_data = data;
			m_next_ptr = next_ptr;
		}
	
	};
	int size;
	Node *first;
	
	public:
	List()
	{
		size = 0;
		first = nullptr;
	}
	
	~List()
	{
		while(size)
		{
			Node *n = first->m_next_ptr;
                	delete first;
                	first = n;
                	size--;
		}
	}
	
	void insert(int data)
	{
		Node *prev = new Node(data);
		if (size ==0)
		{
			prev->m_next_ptr = first;
			first = prev;
		}
		else
		{
			Node *n = first;
			while (data >= n->m_data)
			{
                                n = n->m_next_ptr;
                        }
			prev->m_next_ptr = n->m_next_ptr;
			n->m_next_ptr = prev;
		}
		size++;
	}

	void print()
	{
		Node* n = first;
		while (n != nullptr)
		{
			std::cout << n-> m_data << " ";
			n = n->m_next_ptr;
		}
		std::cout << std::endl;
	}
};

int main()
{
	List l;
	l.insert(55);

	l.insert(6);
	l.insert(7);
	l.insert(12);
	l.insert(1);
	l.print();
	return 0;
}
