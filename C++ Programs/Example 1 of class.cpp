#include<iostream>
class item
{
	int n,cost;
 	char name[50];
 	
	public :
		void getdata(void);
		void display(void);
		
	
};
void item::getdata(void)
{
	std::cout<<"enter the item number ";
	std::cin>>n;
	std::cout<<"enter the item name ";
	std::cin>>name;
	std::cout<<"enter the cost ";
	std::cin>>cost;
}
void item::display(void)
{
	std::cout<<"item number = "<<n<<"\n";
	std::cout<<"item name = "<<name<<"\n";
	std::cout<<"item cost = "<<cost<<"\n";
	
}

main()
{
	
	item i;
	i.getdata();
	i.display();
}
