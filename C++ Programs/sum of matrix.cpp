#include<iostream>
using namespace std;
main()
{
	int m,n,c,d, first[10][10], second [10][10],sum[10][10];
	cout<<"enter the num of rows and columns of matrix : \n";	cin>>m>>n;
	cout<<"enter the elment of first matrix : \n";
	for (c=0;c<m;c++)
	for(d=0;d<n;d++)
	cin>>first[c][d];
	cout<<"enter the element of second matrix : \n";
	for(c=0;c<m;c++)
	for(d=0;d<n;d++)
	cin>>second[c][d];
	for(c=0;c<m;c++)
	for(d=0;d<n;d++)
	sum[c][d]=first[c][d]+second[c][d];
	cout<<"sum of entered mtrices : \n";
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++)
		{
		cout<<sum[c][d]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}
