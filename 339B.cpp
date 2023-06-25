#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	unsigned long long int m,n,t=0;
	cin>>n>>m;
	int a[m];
	for (int i = 0; i < m; ++i)
	{
		cin>>a[i];
	}
	for (int j = 0; j < m; ++j)
	{
		if(j==0)
		{
			t=t+a[j]-1;
		}
		else
		{
			if(a[j]<a[j-1])
			{
				t+=n-a[j-1]+a[j];
			}
			else
			{
				t+=a[j]-a[j-1];
			}
		}
	}
	cout<<t;
	return 0;
}