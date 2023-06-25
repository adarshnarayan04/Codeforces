#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	int x,t,a;
	cin>>x>>t;
	while(t--)
	{
		a=x%10;
		if (a==0)
		{
			x=x/10;
		}
		else
			x=x-1;
	}
	cout<<x;
	return 0;
}