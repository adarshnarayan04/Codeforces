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
		double k1,k2,k3,k4;
		k1=h*f(x0,y0);
		k2=h*f(x0+h/2,y0+k1/2);
		k3=h*f(x0+h/2,y0+k2/2);
		k4=h*f(x0+h,y0+k3);
		
		double k=(k1+2*k2+2*k3+k4)/6.0;
		
		y0=y0+k;//can see k1,k2,k3,k4 are similar to 2nd term if euler (h*f(x0,y0)) --> seo we do y0=y0+k(k is 2nd term of euler by doing average)
		
		x0+=h;
	}
	
	cout<<"ans:"<<y0;
	
	return 0;
}