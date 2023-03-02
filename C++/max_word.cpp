#include <iostream>

int main()
{
	std::string str;
	std::getline(std::cin, str);
	std::string lword;
	std::string shword;
	std::string tmp;
	int cnt = 0;
	int max = 0;
	int min = 0;
	for (int i = 0; i < str.size()+1;i++)
	{
		if (str[i] != ' ')
		{
			tmp += str[i];
		}
		else if (tmp !="")
		{
			if (tmp.size() > max)
			{	
				lword = tmp;
				max = tmp.size();
				if (min == 0)
				{
					shword = tmp;
				}
			}
			else if (tmp.size() < shword.size())
			{
				shword = tmp;
			}
			tmp = "";
		}
	}
	std::cout << "Long word is: " << lword << " Short word is: "<< shword << std::endl;
		
		for (int i = 0; i < shword.size(); i++)
		{
			for (int j = 0; j < lword.size(); j++)
			{
				if (shword[i] == lword[j])
				{
					std::cout << lword[i] << " ";
				}
			}
		}
		
		return 0;
}
