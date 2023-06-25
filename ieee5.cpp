#include<bits/stdc++.h>
#include<iomanip>
#include<ios>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	int n,l;
	float d=0;
	cin>>n>>l;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for (int i = 1; i < n; ++i)
	{
		int x=a[i]-a[i-1];
		if(x>d)
			d=x;
	}
	d=d/2;
	int x=l-a[n-1];
	int y=a[0]-0;
	float z=max(x,y);
	if(z>d)
	{
		d=z;
		cout<<fixed<<setprecision(10)<<z;
	}
	else cout<<fixed<<setprecision(10)<<d;
		
	return 0;
}