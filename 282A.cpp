#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x=0,s=0;
	string y;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>y;
		if (y=="++X"||y=="X++")
		{
			++x;
		}
		else
			--x;
	}
	cout<<x;
	return 0;
}