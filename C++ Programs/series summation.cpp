  #include<iostream>
#include<math.h>
using namespace std;
int sum(int,int);
main()

{

int n,x;

std::cout<<" series : 1+x+x^2+..........+x^n " <<"\n";
std::cout<<"\n";


std::cout<<"Enter the value of x and n:"<<"\n";
std::cin>>x>>n;
std::cout<<" Sum= "<<sum(x,n)<<"\n";
return 0;
}
int sum(int a,int b)
{
	int sum=1,i;
	for(i=1;i<=b;i++)
	{
		sum+=pow(a,i);
	}
	return sum;
}
