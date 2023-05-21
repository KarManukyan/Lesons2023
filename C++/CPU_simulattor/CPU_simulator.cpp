#include <iostream>

class Ram
{
	public:
	short Ram[128]{};
  	int instruct_list = 0;
  	int instruct_count = 64;
  	void write(int address, short data)
  	{
    		if (address > 0 && address < 128)
    		{
      			Ram[address] = data;
    		}
  	}

  	short read(int address)
  	{
    		if (address > 0 && address < 128)
    		{
      			return Ram[address];
    		}
  	}
};

Ram ram;

class Registr
{
	public:
  	int registr[16]{};
  	int read(int address)
  	{
    		if (address > 0 && address < 16)
    		{	
      			return registr[address];
    		}
  	}

 	void write(int address, int data)
  	{
    		if (address > 0 && address < 16)
    		{
      			registr[address] = data;
    		}
  	}
};

Registr reg;

class ALU
{
	public:
  	int action(int r1, int r2, int op_code)
  	{
    		switch (op_code)
    		{
      			case 1:
        			return r1 + r2;
      			case 2:
        			return r1 - r2;
    		}
    		return 0;
  	}
};

ALU alu;

class CU
{
  	public:
  	short fetch()
  	{
    		short instruction = ram.read(reg.registr[0]);
    		reg.registr[0]++;
    		return instruction;
  	}

  	void decode(short instruction)
  	{
    		short b = 0b1111;
    		reg.write(1, ((instruction >> 12) & b));
    		reg.write(2, ((instruction >> 8) & b));
    		reg.write(3, ((instruction >> 4) & b));
    		reg.write(4, (instruction & b));

  	}

  	void execute()
  	{
    		reg.write(5, ram.read(reg.read(3)));
    		reg.write(6, ram.read(reg.read(4)));
    		ram.write(reg.read(2), alu.action(reg.read(5), reg.read(6), reg.read(1)));
  	}
};
CU cu;

class CPU
{
	public:
  	void loader(int instruct_list[], int size)
  	{
    		for (int i = 0; i < size && i < 16; i++)
    		{
      			ram.write(i, instruct_list[i]);
      			ram.instruct_count++;
    		}
  	}
  	void exec()
	{  
    		for (int i = 0; i < ram.instruct_count; i++)
    		{
      			cu.decode(cu.fetch());
      			cu.execute();
      		std::cout<<ram.Ram[i]<<std::endl;
    		}
      		std::cout<<ram.Ram[64]<<std::endl;
      		std::cout<<ram.Ram[65]<<std::endl;
      		std::cout<<ram.Ram[66]<<std::endl;

  	}
  
};

CPU cpu;

int main()
{
  	ram.write(64, 8);
  	ram.write(65, 5);
  	int list[] = {0b0001'10010'1000'1001};
  	int size = sizeof(list) / sizeof(list[0]);
  	cpu.loader(list, size);
  	cpu.exec();
  	return 0;
}
