#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	string x;
	cin>>x;
	int a=0,b=0;
	for (int i = 0; i < x.size(); ++i)
	{
		if (x[i]<97)
		{
			a++;	
		}
		else
			b++;
	}
	if (a>b)
	{
		for (int j = 0; j < x.size(); ++j)
		{
			if (x[j]>96)
		   {
			x[j]-=32;	
		   }
		}
	}
	else
	{
		for (int k= 0;k < x.size(); ++k)
		{
			if (x[k]<97)
		   {
			x[k]+=32;	
		   }
		}
		
	}
	cout<<x;
	return 0;
}