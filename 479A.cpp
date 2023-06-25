#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,y,z,a,b,c,d,s;
	cin>>x>>y>>z;
	if(x,y,z>=1&&x,y,z<=10)
	{
		a=x*y*z;
		b=x+y+z;
		c=x*(y+z);
		d=(x+y)*z;
		cout<<max({a,b,c,d});
	}
	
	return 0;
}