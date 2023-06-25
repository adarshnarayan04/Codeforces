#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long int n,m,a,x,y;
	cin>>n>>m>>a;
	if(n>0&&m>0)
	{
	if(n%a==0)
		x=n/a;
	else
		x=n/a+1;
	if(m%a==0)
		y=m/a;
	else
		y=m/a+1;
	unsigned long long int z=x*y;
	cout<<z;
	}
	else
		cout<<0;
    return 0;
}