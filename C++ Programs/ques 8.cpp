#include<iostream>
using namespace std;
float const pi=3.14;
int main()
{
	int area(float);
	double area(int);
	int area(int,int);
	float r;
	std::cout<<"enter the raidus";
	std::cin>>r;
	int a;
	std::cout<<"enter the side";
	std::cin>>a;
	int l,b;
	std::cout<<"enter the length and breadth ";
	std::cin>>l>>b;
	
	std::cout<<"area of circle = "<<area( r )<<"\n";
	std::cout<<"area of square = "<<area( a)<<"\n";
	std::cout<<"area of rectangle = "<<area(l,b)<<"\n";
	return 0;
}
	int area(float r)
	
	{
		return(pi*r*r);
	}
	double area(int a )
	{
		return(a*a);
	}
	int area(int l,int b)
	{
		return(l*b);
	}



