//#include<iostream>
//using namespace std;
//main()
//{
//	int i ,j;
//	float b[3][3];
//	std::cout<<"enter the elements of array = "<<"\n";
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			std::cin>>b[i][j];
//		}
		
//	}
	
//	int sum=0,avg;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			sum=sum+b[i][j];
//		}
//		std::cout<<"\n";
		
//	}
//	avg=sum/9;
//	std::cout<<"average ="<<avg;
	
	

//}
#include<iostream>
using namespace std;
main()
{
	int i ,n;
	float a[30];
	std::cout<<"enter the size of array";
	std::cin>>n;
	std::cout<<"enter the elements of array";	for(i=0;i<n;i++)
{
		std::cin>>a[i];
	
}
	
int sum=0;
	for(i=0;i<n;i++)
	{
	sum=sum + a[i];
	}
	float avg ;
	avg=sum/n;
	std::cout<<"average of array ="<<avg<<"\n"  ;
}

