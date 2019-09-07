#include<iostream>
class employee
{
	int emp_no,pay;
 	char emp_name[50];
 	
	public :
		void getdata(void);
		void display(void);
		
	
};
void employee::getdata(void)
{
	std::cout<<"enter the Employee number \n";
	std::cin>>emp_no;
	std::cout<<"enter the Employee name \n";
	std::cin>>emp_name;
	std::cout<<"enter the Basic Pay of Employee \n";
	std::cin>>pay;
}
void employee::display(void)
{
	std::cout<<"Employee number = "<<emp_no<<"\n";
	std::cout<<"Employee name = "<<emp_name<<"\n";
	std::cout<<"Basic Pay  = "<<pay<<"\n";
	int da,hra,cca,gross_sal;
	if(pay<5000)
	{
	
	da=0.81*pay;
	}
	else if(pay>5000&&pay<7000)
	{
	
	da=0.51*pay;
	}
	else
	{
	da=0.41*pay;
	}
	cca = 350 ;
	hra=0.15*pay;
	gross_sal=da +cca+hra+pay;
	std::cout<<"CCA = "<<cca<<"\n";
	std::cout<<"HRA = "<<hra<<"\n";
	std::cout<<"DA = "<<da<<"\n";
	std::cout<<"GROSS SALARY = "<<gross_sal<<"\n";
	
}

main()
{		
	employee a;
	a.getdata();
	a.display();
	
	
}
