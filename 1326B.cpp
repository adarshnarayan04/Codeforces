#include<bits/stdc++.h>
using namespace std;
const int x=1e6;
int a[x];
int maxinarray(int b,int n,int c)
{
	
		if(b>c)
			c=b;
	return c;
}
int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	int n,max=0;
	cin>>n;
	int b[n+1],x[n+1];
	for (int i = 1; i <= n; ++i)
	{
		cin>>b[i];
	}
	a[1]=b[1];
	x[1]=0;
	for (int i = 2; i <= n; ++i)
	{
		x[i]=maxinarray(a[i-1],n,max);
		max=x[i];
		a[i]=x[i]+b[i];
	}
	for (int i = 1; i <= n; ++i)
	{
		cout<<a[i]<<" ";
	}
	
	
	return 0;
}