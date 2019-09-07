#include<iostream>
#include<conio.h>
class con
{
	int m,n;
	public:
		con(int,int);//Declaration of constructor
		void display(void)
		{
			std::cout<<"m="<<m;
			std::cout<<"\t"<<"n="<<n;
		}
};
con::con(int x,int y)//Definition of constructor
{
	m=x;
	n=y;
}
main()
{
	con c1(0,100);
	con c2=con(25,75);
	std::cout<<"\n"<<"Object1"<<"\t";
	c1.display();
	std::cout<<"\n"<<"Object2"<<"\t";
	c2.display();
}
