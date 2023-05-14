#include <iostream>
#include <vector>

class Ram
{
	public:
	
	int size;
	short ram[];

	Ram (int size)
	{
		this -> size = size ;
		size = 0;
	}

	void write (int address, short data)
	{
		if ((address > 0) || (address < size))
		{
			ram[address] = data;
		}
	}
	
	short read (int address)
	{
		if ((address > 0)  || (address < size))
		{
			return ram[address];
		}
	}
};

class Registr
{
	public:
	int registr[10]{};
	
	int read(int address)
	{
		return registr[address];
	}		
	
	void write(int address, int data)
	{
		registr[address] = data;
	}
};

class CU
{
	public:
	short fetch()
	{
		int cnt = 0;
		short instruction = r.ram[cnt];
		cnt++;
		return instruction;
	}


	short decode(short instruction)
	{
		short b = 0b1111;
		short op_code = (instruction >> 12) & b;
		short r1 = (instruction >> 8) & b;
		short r2 = (instruction >> 4) & b;
		short r3 = (instruction & b);
		return r1;
	}
	
	void execute()
	{
		reg.write(r.read(read());
	}
};

int main()
{
	Ram r(100);
	Registr reg;
	CU Cu;
	decode(instruction);

	return 0;
}
