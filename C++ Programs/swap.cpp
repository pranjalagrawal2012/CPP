#include<iostream>
#include<conio.h>
using namespace std;
int swap(int*,int*);
main()
{
	int a , b ,x;
	std::cout<<"To Swap 2 numbers   "<<"\n";
	std::cout<<"Enter two Numbers : " ;
	std::cin>>a;
	std::cin>>b;
	std::cout<<"Numbers before swapping : "<<"\n";
	std::cout<<a<<"\t";
	std::cout<<b<<"\n";
	std::cout<<"Numbers after swapping"<<"\n";
	swap(a,b);
	std::cout<<a<<"\t";
	std::cout<<b;
	std::cout<<"\n";
	return 0;
}
int swap(int *x,int *y )
{
	int temp ;
	temp=*x;
	*x=*y;
	*y=temp;
	return *x,*y;
}
