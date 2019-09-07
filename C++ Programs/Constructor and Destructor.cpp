#include<iostream>
#include<conio.h>
int count=0;
class al
{
	public:
		al()
		{
			count++;
			std::cout<<"\n"<<" matter created "<<count;
		}
		~al()
		{
			std::cout<<"\n"<<" matter destroyed "<<count;
			count--;
		}
};
main()
{
	std::cout<<"Enter main";
	al A1;
}
