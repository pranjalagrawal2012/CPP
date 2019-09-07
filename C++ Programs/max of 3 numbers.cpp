#include<iostream>
#include<conio.h>
main()
{
	std::cout<<"enter three integers.\n";
	int n1,n2,n3;
	std::cin>>n1;
	std::cin>>n2;
	std::cin>>n3;
	if(n1>>n2&&n1>>n3)
	{
		std::cout<<n1<<" is greatest.\n";
	}
	else if(n2>>n1&&n2>>n3)
	{
		std::cout<<n2<<" is greatest.\n";
	}
	else
	{
		std::cout<<n3<<" is greatest.\n";
	}
}
