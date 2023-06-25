#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	int t;
	cin>>t;
	while(t--)
	{
		unsigned long long b=0;
		int n,m,h;
		cin>>n>>m>>h;
		int cap[n];
		int power[m];
		for (int i = 0; i < n; ++i)
		{
			cin>>cap[i];
		}
		for (int i = 0; i < m; ++i)
		{
			cin>>power[i];
		}
		sort(cap,cap+n,greater<int>());
		sort(power,power+m,greater<int>());
		int a=min(n,m);
		for (int i = 0; i < a; ++i)
		{
			int y=power[i]*h;
			// cout<<y<<endl;
			if(cap[i]>=y)
				b+=y;
			else
				b+=cap[i];
		}
		cout<<b<<"\n";
		
	}
	return 0;
}