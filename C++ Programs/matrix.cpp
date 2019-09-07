#include<iostream>
using namespace std;
main()
{
	int i ,j;
	float b[3][3];
	std::cout<<"enter the elements of array = "<<"\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			std::cin>>b[i][j];
		}
		
	}
	std::cout<<" array = "<<"\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			std::cout<<b[i][j]<<"\t";
		}
		std::cout<<"\n";
		
	}
	
	

}


