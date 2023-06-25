#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	string a,b;
	cin>>a>>b;
	int x,y,c=0;
	for (int i = 0; i < a.size(); ++i)
	{
		x=a[i];
		y=b[i];
		if (x<97)
		{
			x+=32;
		}
		if (y<97)
		{
			y+=32;
		}
		if(x>y)
		{
			cout<<1;
			c++;
			break;
		}
		if(x<y)
		{
			cout<<-1;
			c++;
			break;
		}
	}
	if (c==0)
	{
		cout<<0;
	}
	
	
	return 0;
}