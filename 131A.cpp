#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	string x;
	int c=0;
	cin>>x;
	for (int i = 0; i < x.size(); ++i)
	{
		if ((int)x[i]<97)
		{
			c++;
		}
	}
	if(c==x.size())
	{
		for (int j = 0; j < x.size(); ++j)
		{
			x[j]+=32;
		}
	}
	else if ((int)x[0]>96&&c==x.size()-1)
	{
		for (int a = 0; a < x.size(); ++a)
		{
			if (a==0)
			{
				x[a]-=32;
			}
			else
				x[a]+=32;
		}
	}
	cout<<x;
	return 0;
}