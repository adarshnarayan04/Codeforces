#include<bits/stdc++.h>
using namespace std;

double f(double x)
{
	return 1.0/(16+x*x);
}
int main()
{
	double a,b;
	cin>>a>>b;
	
	int n;//numeber of interevals
	cin>>n;
	
	double h=(a-b)/n;
	cout<<h<<endl;
	
	double ans=f(a)+f(b);
	
	double k=b;
	
	for (int i = 1; i <n; ++i)//x 0 x1 x2 (2 interval but x exsist in between) so n-1
	{
		
		
		k=b+i*h;
		cout<<k<<endl;
		ans+=2*f(k);
		
		
	}
	cout<<ans<<endl;
	// while(k>a)/give oroblem when h on neg
	// {
	// 	cout<<k<<endl;
	// 	ans+=(2*f(k));
	// 	k+=h;
	// }
	ans*=(h/2.0);
	cout<<"ans:"<<ans;
	
	return 0;
}