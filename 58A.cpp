#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	string h="h",e="e",l="l",o="o",x,z;
	cin>>x;
	int c=0,b=0,d=0,y=0;
	for (int i = 0; i < x.size();i++)
	{
		z=x[i];
			if (z==h&&c==0)
			{
				c++;
			}
			else if (z==e&&c>0)
			{
				b++;
			}
			else if (z==l&&c>0&&b>0)
			{
				d++;
			}
			else if (z==o&&c>0&&b>0&&d>1)
			{
				y++;
			}
		
	}
	if (c>=1&&b>=1&&d>=2&&y>=1)
	{
		cout<<"YES";
	
	}
	else
		cout<<"NO";
	return 0;
}