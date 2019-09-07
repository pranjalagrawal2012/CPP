#include<iostream>
class person
{
	int age;
 	char name[50];
 	
	public :
		void getdata(void);
		void display(void);
		
	
};
void person::getdata(void)
{
	std::cout<<"enter the name ";
	std::cin>>name;
	std::cout<<"enter the age ";
	std::cin>>age;
}
void person::display(void)
{
	std::cout<<"name = "<<name<<"\n";
	std::cout<<"age = "<<age<<"\n";
	
}

main()
{
	
	person p;
	p.getdata();
	p.display();
}
