#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	double x[n],y[n];
	
	for (int i = 0; i < n; ++i)
	{
		cin>>x[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>y[i];
	}
	double z;//at which to find
	cin>>z;
	double ans=0;
	
	for (int i = 0; i < n; ++i)
	{
		double num=y[i];
		double den=1;
		
		for (int j = 0; j < n; ++j)
		{
			if(j==i) continue;
			
			num*=(z-x[j]);
			den*=(x[i]-x[j]);

		}
		ans+=(num/den);
	}
	cout<<"ans:"<<ans;
	return 0;
	
}