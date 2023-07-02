#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		int m;
		for (int i = 0; i < n-k; ++i)
		{
			int c=0,min=INT_MAX;
			for (int j = i+k; j < n; ++j)
			{
				if (a[j]<min)
				{
					min=a[j];
					c++;
					m=j;
				}
			}
			if(a[i]>min&&c>0)
			{
				// int temp=a[m];
				// a[m]=a[i];
				// a[i]=a[m];
				swap(a[i],a[m]);
			}
			
		}
		for (int i = 0; i < n; ++i)
		{
			cout<<a[i];
		}
		cout<<endl;
	}
	return 0;
}