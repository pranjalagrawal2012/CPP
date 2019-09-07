#include<iostream>
#include<conio.h>
int fact(int);
main()
{
	int n ;
	std::cout<<"Enter a number : "<<"\n";
	std::cin>>n;
	std::cout<<"Fact : "<<fact(n)<<"\n";
	return 0 ;
	
}
int fact(int m )
{
	int i, f=1;
	for(i=1;i<=m;i++)
	{
		f=f*i;
	}
return f;
}
