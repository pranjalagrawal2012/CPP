#include<iostream>
main()
{
	int year;
	std::cout<<"enter a year to check if it is a leap year\n";
	std::cin>>year;
	if(year%400 == 0)
		std::cout<<year<<"is a leap year.\n";
	else if(year%100 == 0)
		std::cout<<year<<"is not leap year.\n";
	else if(year%4 == 0)
		std::cout<<year<<"is a leap year.\n";
	else
		std::cout<<year<<"is not a leap year.\n";
	

}
