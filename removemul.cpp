#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	int t;
	cin>>t;
	while(t--)
	{
		unsigned long long n,m;
		unsigned long long s=0,x=0;
		cin>>n>>m;
		int a[n+1];
		int b[m];
		s=(n*(n+1))/2;
		for (int i = 0; i < m; ++i)
		{
			cin>>b[i];
			x+=b[i];
		}
		cout<<s-x<<"\n";
	}
	
	return 0;
}