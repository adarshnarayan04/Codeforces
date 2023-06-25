#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	int n;
	unsigned long long b=0,c=0;
	cin>>n;
	unsigned long long a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 1; i < n; ++i)
	{
		c=0;
		if(a[i]<a[i-1])
		{
			c=a[i-1]-a[i];
		    b+=c;
		    a[i]+=c;
		}
		
	}
	cout<<b;
	return 0;
}