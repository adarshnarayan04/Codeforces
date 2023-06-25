#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	int t,n,q,x=0,y=0,z=0,l,r;
	
	cin>>t;
	
	for (int i = 0; i < t; ++i)
	{
		cin>>n>>q;
		int a[n+1];
		for (int i = 1; i <= n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 1; i <= q; ++i)
	   {
		x=0;y=0;z=0;
		cin>>l>>r;
		for (int j = l; j <=r; ++j)
		{
			if(a[j]==1)
			x++;
		    if(a[j]==2)
			y++;
		    if(a[j]==3)
			z++;
		}
		cout<<x<<" "<<y<<" "<<z<<"\n";
		
	    }
	 }
	
	return 0;
}