#include<iostream>
using namespace std;
float const pi = 3.14;
float area1(int,int);
float area2(int);


main()
{
	int r,l;
	std::cout<<"To find the surface area and cross sectional area of a solid cylinder using function  \n " ;
	std::cout<<"\n";
	

	std::cout<<"enter the raidus :"<<"\n";
	std::cin>>r;
	std::cout<<"enter the length :"<<"\n";
	std::cin>>l;
	std::cout<<"Surface area of cylinder : "<<area1(r,l)<<"\n";
	std::cout<<"Cross sectional area  of cylinder : "<<area2(r)<<"\n";
	return 0;
}
float area1(int r,int l)
{
	int SA;
	SA=2*pi*r*l+2*pi*r*2;
	return SA;
}
float area2(int r )
{
	int CA;
	CA=pi*r*r;
	return CA;
}

