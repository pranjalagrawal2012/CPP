#include<iostream>
int compute(int [] ,int );
main()
{
	
	std::cout<<"enter the size of array";
	int n ;
	std::cin>>n;
	std::cout<<"enter the elements of array";
	int a[40];
	for(int i=0;i<n;i++)
	{
		std::cin>>a[i];
		
	}
	compute(a,n);
	return 0 ;
}
int compute(int b[40],int m)
{
	int max=b[0] , min=b[0];
	int j;
	for(int j=0;j<m;j++)
	{
		if(b[j]<min)
		{
			min=b[j];
		}
		if(b[j]>max)
		{
			max=b[j];
		}
	
	}

	
	std::cout<<"max :"<<max<<"\n";
	std::cout<<"min :"<<min<<"\n";
	return 0;
}
