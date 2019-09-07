#include<iostream>
using namespace std;
int Short(int [10],int );
main()
{
	int i ,m;
	std::cout<<"To arrange the elements of array in ascending order ( SHORTING OF ARRAY ) : "<<"\n" ;
	std::cout<<"\n";
	int a[10];
	std::cout<<"enter the size of Matrix : "<<"\n";
	std::cin>>m;
	std::cout<<"enter the elements of Matrix A "<<"\n";
	for(i=0;i<m;i++)
		{
			std::cin>>a[i];
		}
	std::cout<<"\n";	
	std::cout<<" Matrix A before Shorting: "<<"\n";
	for(i=0;i<m;i++)
		{
			std::cout<<a[i]<<"\t";
		}	
		std::cout<<"\n";
				
	Short(a,m);
	return 0;
}

int Short(int x[10],int p)
{
	int i,j,temp;
	for(i=1;i<p;i++)
		{
			for(j=0;j<p-i;j++)
			{	
				if(x[j] > x[j+1])
            {
                temp     = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
			}
		
		}
		std::cout<<" Matrix A after Shorting : "<<"\n";
		for(i=0;i<p;i++)
		{
				
				std::cout<<x[i]<<"\t";
			
		}
}
	




