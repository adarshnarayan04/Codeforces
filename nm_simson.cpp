#include<bits/stdc++.h>
using namespace std;

double f(double x)
{
	return 1.0/(1+x);
}
int main()
{
	double a,b;
	cin>>a>>b;
	
	int n;//numeber of interevals
	cin>>n;
	
	double h=(a-b)/n;
	cout<<h<<endl;
	
	double ans=f(a)+f(b);//y0 yn
	
	double k=b;
	
	for (int i = 1; i <n; ++i)//x 0 x1 x2 (2 interval but x exsist in between) so n-1
	{
		
		
		k=b+i*h;
		//i means y(i)
		// y0 and yn already added ,so go upto y1 to yn-1
		if(i%2==0)
		{
			ans+=2*f(k);
		}
		else
		{
			ans+=4*f(k);
		}
		
		
		
	}
	cout<<ans<<endl;
	// while(k>a)/give oroblem when h on neg
	// {
	// 	cout<<k<<endl;
	// 	ans+=(2*f(k));
	// 	k+=h;
	// }
	ans*=(h/3.0);
	cout<<"ans:"<<ans;
	
	return 0;
}