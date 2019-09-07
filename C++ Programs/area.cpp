#include<iostream>
using namespace std;
float const pi = 3.14;
float area1(int);
float area2(int);
float area3(int);

main()
{
	int r;
	std::cout<<"enter the raidus";
	std::cin>>r;
	std::cout<<"area of circle = "<<area1(r)<<"\n";
	std::cout<<"Volume of sphere = "<<area2(r)<<"\n";
	std::cout<<"Surface area of sphere = "<<area3(r)<<"\n";
	return 0;
		
}
float area1(int r)
{
	int AC;
	AC=pi*r*r;
	return AC;
}
float area2(int r )
{
	int VS;
	VS=(pi*r*r*r*4)/3;
	return VS;
}
float area3(int r )
{
	int SS;
	SS=pi*r*r*4;
	return SS;
}
