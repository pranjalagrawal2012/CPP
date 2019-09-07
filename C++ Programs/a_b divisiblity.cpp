#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a , b ,i ;
	std::cout<<"To find the divisibility of a by b   "<<"\n" ;

	
	std::cout<<"Enter the value of a  : "<<"\n" ;
	std::cin>>a;
	std::cout<<"Enter the value of b  : " <<"\n";
	std::cin>>b;
	if(a%b==0)
	{
		std::cout<<" "<<a<<" is divisible by"<<" "<<b<<"\n";
		
	}
	else
	{
		std::cout<<" "<< a <<" is not divisible by"<<" "<<b<<"\n";
	}

	return 0;
}
