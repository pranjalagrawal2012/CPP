#include<iostream>
using namespace std;
int sum(int [10][10],int [10][10],int p,int q);
main()
{
	int i ,j,m,n;
	std::cout<<"To add 2 matrices using   function \n " ;
	
	int a[10][10],b[10][10];
	std::cout<<"enter the size of Matrix : "<< "\n";
	std::cin>>m>>n;
	
	std::cout<<"enter the elements of Matrix A "<<"\n";
	
	
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{		
				std::cin>>a[i][j];
			}
		
		}
	std::cout<<"\n";	
	std::cout<<"enter the elements of Matrix B "<<"\n";
	
	
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{		
				std::cin>>b[i][j];
			}
		
		}	

		std::cout<<" Matrix A : "<<"\n";
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{	
				std::cout<<a[i][j]<<"\t";
			}
		std::cout<<"\n";
		
		}	
		std::cout<<"\n";
		std::cout<<" Matrix B : "<<"\n";
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{	
				std::cout<<b[i][j]<<"\t";
			}
		std::cout<<"\n";
		
		}	
		std::cout<<"\n";		
	sum(a,b,m,n);
	
	return 0;
}

int sum(int x[10][10],int y[10][10],int p, int q)
{
	int z[20][20],i,j;
	for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{	
				z[i][j]=x[i][j]+y[i][j];
			}
		
		}
		std::cout<<" sum : "<<"\n";
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{	
				std::cout<<z[i][j]<<"\t";
			}
		std::cout<<"\n";	
		}
}
	




