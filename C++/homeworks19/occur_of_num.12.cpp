#include <iostream>
#include <fstream>
#include <string>
					//      Input numbers in range 1-10 (as much as the user would like to, till -1 is entered).
                                        //      Calculate and print how many times each of the numbers have been entered

int mas[11];                            					// declear global arrey for kepping result

int inport(int num)
{
	try
	{
		if (num ==-1) 
			return 0;
		if (num < 0 || num > 10)		 			// checking input validation
			throw "Entered number is out of range 1 to 10";
		else 
			mas[num]++;
	}
	catch (const char* exception)
	{
		std::cout << "Error 400: " << exception << std::endl;
	}
	return 0;
}

void print_result()
{
	for (int i = 1; i <= 10; i++)					        // printing result arrey for checking final result
		std::cout << i << ":" << mas[i] << std::endl;
}

void read_from_file()								// read from file integers one by one
{
        std::string path = ("for_include.txt");
	std::ifstream fin;
        try
        {
                fin.open(path);
		int num;
		while (!fin.eof())
		{	
			fin >> num;
			std::cout << num << std::endl;
			inport(num);						// readed number give to function for checking
		}
	}
        catch (const std::exception& ex)
        {
		std::cout << ex.what() << std::endl;
                std::cout << "Can`t open the file" << std::endl;
        }
	fin.close();
}
void user_input()								// input from user mode
{
	int num = 0;
        std::cout << "Enter number in 1 to 10 scope and enter -1 if you whant stop the program. " << std::endl;
	while (num != -1)
	{
		std::cin >> num;
		inport(num);
	}
}

void write_to_file() 								// creating new file and adding arrey as a result
{
	std::ofstream fout;
	fout.open("Result.txt");
	for (int i = 1;i <= 10;i++)                                        
                fout << i << ":" << mas[i] << std::endl;	
	fout.close(); 
}

int main(int argc, char* argv[])
{
	if (argc == 1)
        	read_from_file();
	else if (argc > 3 || std::string (argv[1]) != "-t")
	{
		std::cout << "Entered false argument" << std::endl;
		std::cout << "You can give argument ' -t ' for entering read from file mode. " << std::endl;
		return 1;
	}
	else if (argc == 2 && std::string(argv[1]) == "-t")
		user_input();
	//print_result();
        write_to_file();
	//std::cout << std::endl;
	return 0;
}
