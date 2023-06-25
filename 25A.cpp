#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,c=0,d=0,e=0,f=0;
	cin>>n;
	int a[n+1];
	for (int i = 1; i <=n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 1; i <=n; ++i)
	{
		if (a[i]%2==0)
		{
			c++;
			e=i;
		}
		else
		{
			d++;
			f=i;
		}
	}
	if(c==1)
	{
		cout<<e;
	}
	if(d==1)
	{
		cout<<f;
	}
	
	return 0;
}