#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	int t;
	cin>>t;
	while(t--)
	{
		int n,count=0;
		string s;
		cin>>n;
		cin>>s;
		for (int i = 0; i < n; ++i)
		{
			if(s[i]=='4'||s[i]=='*')
			{
				for (int j = i+1; j <n; ++j)
				{
					if (s[j]=='0'||s[j]=='*')
					{
						for (int k = j+1; k < n; ++k)
						{
							if (s[k]=='4'||s[k]=='*')
							{
								count++;
								// cout<<s[i]<<s[j]<<s[k]<<endl;
								
							}
						}
					}
				}
			}
		}
		 cout<<count+1<<endl;
	}
	return 0;
}