#include<iostream>
#include<conio.h>
#include<math.h>
float const pi=3.14;
using namespace std;
main()
{
	int i;
	std::cout<<"To find the area of circle , the area of the large square enclosed with that circle and the ratio of their areas \n " ;
	std::cout<<"\n";
	

	
	
	float r , area_circle ;
	
	
	
	std::cout<<"Enter the radius : " ;
	std::cin>>r;
	area_circle=pi*r*r;
	std::cout<<"Area of Circle  : "<<area_circle<<"\n";
	float a;
	a=r*sqrt(2);
	float area_square;
	area_square = a*a;
	std::cout<<"Area of Square enclosed within a circle : "<<area_square <<"\n";
	float ratio;
	ratio=(area_circle/area_square );
	std::cout<<"Ratio : "<<ratio;
	std::cout<<"\n";
	std::cout<<"\n";
	

		
	
	return 0;
}

