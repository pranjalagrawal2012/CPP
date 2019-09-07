#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	std::cout<<"Enter a five digit number ";
	int n;
	std::cin>>n;
	int a,b,c,d;
	a=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	c=n%10;
	n=n/10;
	d=n%10;
	n=n/10;
	int reverse;
	reverse=10000*a+1000*b+100*c+10*d+n;
	std::cout<<"Reverse of entered number is : "<<reverse ;
	return 0;
	
}
