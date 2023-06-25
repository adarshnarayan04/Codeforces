#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k,n,w,a,s=0;
	cin>>k>>n>>w;
	a=w;
	for (int i = 1; i <= w; ++i)
	{
		a=i*k;
		s=s+a;
		
		
	}
	if (n<s)
		{
			cout<<s-n;
		}
	else
		cout<<0;
	return 0;
}