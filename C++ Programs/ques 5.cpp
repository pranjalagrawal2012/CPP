#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int a , b ;
	std::cout<<"Enter two Numbers : " ;
	std::cin>>a;
	std::cin>>b;
	std::cout<<"Numbers before swapping : "<<"\n";
	std::cout<<a<<"\t";
	std::cout<<b<<"\n";
	std::cout<<"Numbers after swapping"<<"\n";
	int temp ;
	temp=a;
	a=b;
	b=temp;
	std::cout<<a<<"\t";
	std::cout<<b;
	
	return 0;
}



	

