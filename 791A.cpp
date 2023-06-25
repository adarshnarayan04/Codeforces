#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i = 1;
	int x,y,a,b;
	cin>>x>>y;
	a=x;
	b=y;
	for (i; true; ++i)
	{
		a=a*3;
		b=b*2;
		
		if(a>b)
		{
			cout<<i;
			break;
		}
	}
	return 0;
}