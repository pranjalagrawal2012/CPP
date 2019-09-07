
#include<iostream>

class calculation
{
	float x,y,a,b;
	public :
		void getdata(void);
		void display(void);
};
void calculation::getdata(void)
{
	std::cout<<"enter the 1st complex number ";
	std::cin>>a>>b;
	std::cout<<"enter the 2nd complex number ";
	std::cin>>x>>y;
	
	
}
void calculation::display(void)
{
	

	std::cout<<"1st complex number = "<<a<<" + ("<<b<<")i"<<"\n";
	std::cout<<"2nd complex number = "<<x<<" + ("<<y<<")i"<<"\n";
	int add,iadd,sub,isub,mult,imult;
	float div,idiv;
	add=a+x;
	iadd=b+y;
	sub=a-x;
	isub=b-y;
	mult=a*x-b*y;
	imult=a*y+b*x;
	div=((a*x+b*y)/(x*x-y*y));
	idiv=((b*x-a*y)/(x*x-y*y));
	int i;
	std::cout<<"Enter your choice: \n"<<"1.Addition \n"<<"2.Substraction \n"<<"3.Multiplication \n"<<"4.Division \n";
	std::cin>>i;
	if(i==1)
	{
		std::cout<<"Addition : "<<add<<" + ("<<iadd<<")i"<<"\n";
	}
	else if(i==2)
	{
		std::cout<<"Substraction : "<<sub<<" + ("<<isub<<")i"<<"\n";
	}
	else if(i==3)
	{
		std::cout<<"Multiplication : "<<mult<<" + ("<<imult<<")i"<<"\n";
	}
	else if(i==4)
	{
		std::cout<<"Division : "<<div<<" + ("<<idiv<<")i"<<"\n";
	}
	else
	{
		std::cout <<"wrong choice"<<"\n";
	}
 
}
main()
{
	calculation m;
	m.getdata();
	m.display();
}


