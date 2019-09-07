#include<iostream>
#include<conio.h>
int year(int);
main()
{
	int n ;
	std::cout<<"Enter a year : "<<"\n";
	std::cin>>n;
	year(n);
	return 0 ;
	
}
int year(int m )
{
	if(m%4==0)
	{
		std::cout<<"Year : "<<m<<" is a leap year"<<"\n";
	}
	else if(m%100==0)
	{
		std::cout<<"Year : "<<m<<" is not a leap year"<<"\n";
	}
	else if(m%400==0)
	{
		std::cout<<"Year : "<<m<<" is a leap year"<<"\n";
	}
	else
	{
		std::cout<<"Year  "<<m<<" is not  a leap year"<<"\n";
	}
}
