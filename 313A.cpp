#include<bits/stdc++.h>
using namespace std;
int a[10];
int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	int b=0;
	long long x,y;
	
	cin>>x;
	if (x>=0)
	{
		cout<<x;
	}
	if (x<0)
	{
		y=-x;
		int i;
		for (i = 0; y!=0;++i)
		{
			a[i]=y%10;
			// cout<<a[i]<<endl;
			y=y/10;
			
		}
		int y=max(abs(a[0]),abs(a[1]));
		if(y==abs(a[0]))
			b=0;
		else
			b=1;
		int z=1;
		for (int k = i-1; k >b; --k)
		{
			
			if (z==1)
			{
				cout<<-a[k];
				z++;
			}
			else
				cout<<a[k];
			
		}
		for (int l = b-1; l>=0; --l)
		{
			if(z==1)
			{
			cout<<-a[l];
			z++;
		    }
		    else
		    	cout<<a[l];
		}
	}
	return 0;
}