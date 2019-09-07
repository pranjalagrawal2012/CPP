 #include<iostream>
class sample
{
	int m;
 	void read(void);
	public :
		void update(void);
		void write(void);
	
};
void sample::update(void)
{
	read();
	m=2*m;
}
void sample::write(void)
{
	std::cout<<"m="<<m;
	
}

void sample::read(void)
{
	std::cout<<"enter number ";
	std::cin>>m;
	
}
main()
{
	
	sample a;
	a.update();
	a.write();
}
