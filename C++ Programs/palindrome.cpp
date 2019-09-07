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
        reversedNumber = reversedNumber*10 + remainder;
        m /= 10;
    }

    std::cout << "Reversed Number : " << reversedNumber<<"\n";
    if(reversedNumber==n)
	std::cout<<"Number is Plaindrome \n";
    else
    std::cout<<"Number is not Plaindrome \n";

    return 0;
}
