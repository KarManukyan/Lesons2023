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
	
	void pop_front()
	{
		assert(size > 0 && "There is no element to remove.The list is empty.");
		Node *n = first->m_next_ptr;
		delete first;
		first = n;
		size--;
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
		size++;
	}	
	void insert(int index, int data)
	{
		assert(index >= 0 && index < size && "Inputed index is out of range.");
		Node *prev = new Node(data);
		if (index ==0)
		{
			prev->m_next_ptr = first;
			first = prev;
		}
		else
		{
			Node *n = first;
                        for (int i = 0; i< index - 1; i++)
			{
                                n = n->m_next_ptr;
                        }
			prev->m_next_ptr = n->m_next_ptr;
			n->m_next_ptr = prev;
		}
		size++;
	}

	int remuve_by_index(int index)
	{
		assert(size > 0 && "There is no element to remove.The list is empty.");
		assert(index >= 0 && index < size && "Inputed index is out of range.");
		if (index ==0)
                {
                	pop_front();
		}
                else
                {
                        Node *prev = first;
			for (int i = 0; i< index - 1; i++)
			{
				prev = prev->m_next_ptr;
			}
			Node *to_delete = prev->m_next_ptr;
			prev->m_next_ptr = to_delete -> m_next_ptr;
			std::cout << to_delete->m_data<< std::endl;
			delete to_delete;
			size--;
		}
	}	

	int& operator[](const int index)
	{
		assert(index >= 0 && index < size && "Inputed index is out of range.");
		int count = 0;
		Node* n = first;
		while (count < size)
		{
			if (count == index)
			{
				return n->m_data;
			}
			n = n->m_next_ptr;
			count++;
		}
	}

	int get_size()
	{
		return size;
	}
	
	bool is_empty()
	{
		if (first == nullptr)
		{
			return true;
		}
		return false;
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
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.print();
	std::cout << "Size is " << l.get_size() << std::endl;
	std::cout << l[1] << std::endl;
	l.insert(2,55);
	l.print();
	l.remuve_by_index(2);
	l.pop_front();
	l.print();
//	~List();
	return 0;
}
