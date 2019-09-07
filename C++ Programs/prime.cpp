#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int n,i,count=0;
	std::cout<<"Enter a Number :\n";
	std::cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;   
		}
	}
	if(n!=0)
	{
	if(count==2)
	{
		std::cout<<""<<n<<" is a prime number \n";
		
	}
	else
	{
		std::cout<<""<<n<<" is not a prime number \n";
	}
	}
	else
	{
		std::cout<<""<<n<<" is not a prime number \n";
	}
		
}
