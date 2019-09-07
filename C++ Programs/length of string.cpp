#include<iostream>
#include <string.h>
 
main()
{
	std::cout<<"To find the length of a string : "<<"\n" ;
	std::cout<<"\n";
	char a[100];
  	int length;
  	std::cout<<"Enter a string to calculate it's length \n";
  	std::cin>>a;
 	length = strlen(a);
  	std::cout<<"Length of the string = "<<length;
  	std::cout<<"\n";
  	
  	return 0;
}
