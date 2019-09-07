#include<iostream>
using namespace std;
float const pi=3.14;
int main()
{
	int volume(int);
	double volume(double,int);
	int volume(int,int,int);
	std::cout<<"volume of sphere = "<<volume( 10 )<<"\n";
	std::cout<<"volume of cylinder = "<<volume(2.5,8)<<"\n";
	std::cout<<"volume of box = "<<volume(10,7,2)<<"\n";
	return 0;
}
	int volume(int c)
	
	{
		return(4*c*c*c/3);
	}
	double volume(double r, int h )
	{
		return(pi*r*r*h);
	}
	int volume(int l,int b,int h)
	{
		return(l*b*h);
	}



