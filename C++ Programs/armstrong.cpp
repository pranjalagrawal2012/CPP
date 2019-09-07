#include <iostream>
using namespace std;

int main()
{
    int n, reversedNumber = 0, remainder;
	
    std::cout << "Enter an integer: ";
    std::cin >> n;
	int m=n;
    while(m != 0)
    {
        remainder = m%10;
        reversedNumber = reversedNumber + remainder*remainder*remainder;
        m /= 10;
    }

    std::cout << "Cubic Sum of numbers of the entered integer = " << reversedNumber<<"\n";
    if(reversedNumber==n)
	std::cout<<"Number is Armstrong \n";
    else
    std::cout<<"Number is not Armstrong \n";

    return 0;
}
