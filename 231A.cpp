#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,b,c,d,e,f,x,y,z;
	cin>>n;
	int count=0;
	if (n>=1&&n<=1000)
	{
		for (int i = 0; i < n; ++i)
		{
			cin>>a>>b>>c;
			if(a+b+c>=2)
				count++;
		}
	}
	cout<<count;
	
	return 0;
}