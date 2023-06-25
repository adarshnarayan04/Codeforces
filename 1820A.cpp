#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	int t;
	cin>>t;
	string s,x="^",y="_",a,b,c;
	int count=0;
	for (int i = 0; i < t; ++i)
	{
		cin>>s;
		count=0;
		for (int j = 0; j < s.size(); ++j)
		{
			a=s[j];
			b=s[j+1];
			c=s[j+2];
			
			if (a==x)
			{
				if (b==x)
				{
				
				}
				else
				{
					if (c==x)
					{
						
					}
					else
					{
						s=s+x;
						count++;
					}
				}
			}
			else
			{
				
			}
			
		}
		cout<<count<<"\n";
	}
	
	return 0;
}