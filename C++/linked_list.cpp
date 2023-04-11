#include <iostream>

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
	}
	
	void push_back(int data)
	{
		if (first== nullptr)
		{
			first = new Node(data);
		}
		else
		{
			Node* n = first;
			while(n->m_next_ptr != nullptr)
			{
				n = n->m_next_ptr;
			}
			n->m_next_ptr = new Node(data);
		}	
	}	

	void get_size()
	{
		int size = 0;
		Node* n = first;
		while (n != nullptr)
		{
			n = n->m_next_ptr;
			size++;
		}
		std::cout << size << std::endl;
	}
};

int main()
{
	List l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.get_size();
	return 0;}
