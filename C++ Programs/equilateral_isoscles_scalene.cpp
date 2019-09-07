#include<iostream>
#include<conio.h>
#include<math.h>
main()
{
	int x1,x2,x3,y1,y2,y3;
	std::cout<<"Enter the Coordinates of A: \n";
	std::cin>>x1>>y1;
	std::cout<<"Enter the Coordinates of B: \n";
	std::cin>>x2>>y2;
	std::cout<<"Enter the Coordinates of C: \n";
	std::cin>>x3>>y3;
	float a,b,c;
	a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	b=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	c=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
	std::cout<<"Length of sides of triangle : \n";
	std::cout<<" a : "<<a<<"\t"<<" b : "<<b<<"\t"<<" c : "<<c<<"\n";
	if(a==b && b==c) 
    std::cout<<"Equilateral triangle.";
    else if(a==b || a==c || b==c) 
    std::cout<<"Isosceles triangle.";
    else
    std::cout<<"Scalene triangle.";
    return 0;
	
}
