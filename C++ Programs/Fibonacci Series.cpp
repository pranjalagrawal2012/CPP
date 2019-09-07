#include<iostream>
#include<conio.h>
main()
{
	int temp,a=0,b=1,n,i;
	std::cout<<"enter the value of n :"<<"\n";
	std::cin>>n;
	std::cout<<" Fibonacci Series  :"<<"\n";
	std::cout<<a<<"\t";
	std::cout<<b<<"\t";
	for(i=0;i<n;i++)
	{
		temp=a+b;
		std::cout<<temp<<"\t";
		a=b;
		b=temp;
		
		
		
	}
}
