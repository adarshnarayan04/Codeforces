#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	char a[n+1][m+1];//so that we get single # in multiple of 2 and 4 so that an easily solve
	for (int i = 0; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			if(i%2!=0)
			{
				a[i][j]='#';
			}
			if(i%2==0)
			{
				a[i][j]='.';
				if (i%4==0)
				{
					a[i][1]='#';
				}
				else
					a[i][m]='#';
			}
			
		}
	}
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			cout<<a[i][j];
		}
		cout<<"\n";
	}
	
	
	return 0;
}