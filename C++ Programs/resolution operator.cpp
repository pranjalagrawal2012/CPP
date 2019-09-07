#include<iostream>
using namespace std;
int m=10;
int main()
{
	int m = 20;
	int k=m;
	m=30;
	std::cout<<"k="<<k<<"\n";
	std::cout<<"::m="<<::m<<"\n";
	std::cout<<"m="<<m<<"\n";
}
