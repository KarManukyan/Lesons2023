#include <iostream>
#include <string>

class Human
{
	public:
		std::string name;
		std::string surname;
		int age;
		Human ()
		{
			name = "";
			surname = "";
		}
		Human(std::string name,std::string surname,int age)
		{
			this-> name = name;
			this-> surname = surname;
			this-> age = age;
		}
};
class Employee : public Human
{
	public:
		int salery;
		int experience;
		Employee()
		{
			salery = 0;
			experience = 0;
		}
		Employee(std::string name, std::string surname, int age, int salery, int experience) : Human(name,surname,age)
		{
			this-> salery = salery;
			this-> experience = experience;
		}

	

};
class Staff : public Employee
{
	public:
		

		int level;
		std::string profession;
		Staff()
		{
			level = 0;
			profession = "";
		}
		Staff(std::string name, std::string surname, int age, int salery, int experience, int level,std::string profession):Employee (name,surname,age,salery,experience)
		{
			this->level = level;
			this->profession = profession;
		}

};

class Manager : public Employee
{
	public:	
		Staff arr[5];
		Manager(std::string name, std::string surname,int age, int experience, int level):Employee(name,surname,age,experience,level){}
		
		void hire(Staff x)
		{
			for (int i = 0;i<5;i++)
			{
				if((arr[i].name != x.name ) && (arr[i].name == ""))
				{
					arr[i] = x;
					break;
				} 
			}	
		}
		void fire(Staff x)
		{
			for (int i = 0;i<5;i++)
			{
				if(arr[i].name==x.name)
				{
					arr[i] = {};
					break;
				}
			}
		}

		void to_print()
		{
			for (int i = 0;i<5;i++)
			{
			//	if (arr[i].name
				std::cout<< arr[i].name <<std::endl;
			}
		}

};

int main()
{
	Staff Jhon("Jhon","Smith",25,30000,10,7,"ASD");
	Staff Rob("Rob","Mith",22,20000,7,6,"Doc");
	Staff Ann("Ann","Judy",20,15000,5,8,"Programmer");
	Staff Jasmin("Jasmin","Hooly",29,30000,6,12,"Teacher");
	Staff Sam("Sam","Ordy",22,17000,3,7,"Slesar");
	Manager chxk("Shxk","Var",30,15,10);
	chxk.hire(Jhon);
	chxk.hire(Ann);
	chxk.hire(Rob);
	chxk.hire(Jasmin);
	chxk.hire(Sam);
	chxk.fire(Rob);
	chxk.fire(Jhon);
	chxk.to_print();
	return 0;
}
