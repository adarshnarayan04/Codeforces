#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	string x;
	cin>>x;
	int c,a=0;
	for (int i = 0; i < x.size();i++)
	{
		c=1;
		for (int j = i+1; j < x.size(); ++j)
		{
		
			if (x[i]==x[j])
			{
				c++;
			}
			else
			{
				break;
			}
		}
		if (c>=7)
		{
			cout<<"YES";
			a=1;
			break;
		}

	}
	if (a==0)
	{
		cout<<"NO";
	}
	
	return 0;
}