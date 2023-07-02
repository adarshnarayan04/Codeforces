#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	int t;
	cin>>t;
	while(t--)
	{
		
		int n,m,k,c=0;
		cin>>n>>m>>k;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 0; i < n; ++i)
		{
			if(a[i]+k-1>m)
			{
				cout<<"NO"<<"\n";
				c++;
				
				break;
			}
			
		}
		
		if(c==0)
		cout<<"YES"<<"\n";
		
	}
	return 0;
}