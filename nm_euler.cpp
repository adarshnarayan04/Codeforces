#include<bits/stdc++.h>
using namespace std;

double f(double x,double y)
{
	return (x-y)/2.0;
}

int main()
{
	double x0,y0;
	cin>>x0>>y0;
	
	double h;
	cin>>h;
	
	double x;//at which to be find
	cin>>x;
	
	//can use n-1 loop for(1,n-1)  as n-1 will calculate value for f(n)
	while(x0<x)//use when (x0 <x) means step height is (h) is positive 
	{
		y0=y0+h*f(x0,y0);
		x0+=h;
	}
	
	cout<<"ans:"<<y0;
	
	return 0;
}