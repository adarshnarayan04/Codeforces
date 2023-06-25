#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	unsigned long long t,n;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		cin>>n;
		cout<<(n*(n+1))/2<<"\n";
	}
	
	return 0;
}