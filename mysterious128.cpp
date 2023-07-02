#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int x=n;
		string s;
		cin>>s;
		if(n<=7)
		{
			cout<<-1<<endl;
			continue;
		}
		else if (n>7)
		{
			int sum=0,c=0;
			for (int i = n-1; i>=0; --i)
			{
				if (s[i]=='0')
				{
					sum++;	
				}
				else
				{
					c++;
					x--;
				}
				if (sum>=7)
				{
					break;
				}
					
			}
			if (x>7)
			{
				cout<<c<<endl;
			}
			else
				cout<<-1<<endl;
		}
		
	}
	
	return 0;
}