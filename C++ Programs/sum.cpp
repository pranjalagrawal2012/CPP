#include<iostream>
using namespace std;
main()

{

int n,sum=0,i;
std::cout<<"enter a number :\n";
std::cin>>n;
std::cout<<"Sum of first "<<n <<" Natural Number :\n";
for(i=0;i<=n;i++)
sum+=i;
std::cout<<sum;
return (0);
}
