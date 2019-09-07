
#include<iostream>
int swap(int&,int&);
int swap (char&,char&);
int swap (float&,float&);

class swapping
{
	int x,y;
	char a,b;
	float p,q;
	public :
		void getdata(void);
		void display(void);
};
void swapping::getdata(void)
{
	std::cout<<"enter 2 integers :\n";
	std::cin>>x>>y;
	std::cout<<"enter 2 characters :\n";
	std::cin>>a>>b;
	std::cout<<"enter 2 float values :\n";
	std::cin>>p>>q;	
	std::cout<<"\n";
	
}
void swapping::display(void)
{
	

	std::cout<<"Before Swapping = \n";
	std::cout<<" Integers :\n"<<x<<"\t"<<y<<"\n";
	std::cout<<" Characters :\n"<<a<<"\t"<<b<<"\n";
	std::cout<<" float values  :\n"<<p<<"\t"<<q<<"\n";
	std::cout<<"\n";
	std::cout<<"After Swapping = \n";
	std::cout<<"\n";
	swap(x,y);
	std::cout<<" Integers :\n"<<x<<"\t"<<y<<"\n";
	swap(a,b);
	std::cout<<" Characters :\n"<<a<<"\t"<<b<<"\n";
	swap(p,q);
	std::cout<<" float values  :\n"<<p<<"\t"<<q<<"\n";
	

}

main()
{
	swapping s;
	s.getdata();
	s.display();
	return 0;
}
int swap(int &x ,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	return x,y;
}
int swap(float &e ,float &f)
{
	float temp;
	temp=e;
	e=f;
	f=temp;
	return e,f;
}
int swap(char &g ,char &h)
{
	int temp;
	temp=g;
	g=h;
	h=temp;
	return g,h;
}



