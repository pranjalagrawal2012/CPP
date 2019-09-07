#include<iostream>
#include <string.h>
int length(char [100]);
main()
{
  char a[100];
  
 
  std::cout<<"Enter a string to calculate it's length\n";
  gets(a);
  length(a);
  
 
  return 0;
}
int length(char a[100])
{
	int count;
  std::cout<<"Length of the string = ";
	count = strlen(a);
	std::cout<<count;
 return 0;
}
