#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	int t,n,l=0,r=0,count=0;
	cin>>t;
	while(t--)
	{
		cin>>n>>l>>r;
		int a[n];
		count=0;
		for (int i = 0; i < n; ++i)
		{
			
			cin>>a[i];
			if(a[i]>=l&&a[i]<=r)
				count++;
		}
		cout<<count<<"\n";
	}
	
	return 0;
}