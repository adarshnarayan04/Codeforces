#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	int n,c=0;
	cin>>n;
	map<string, int> m;
	for (int i = 0; i < n; ++i)
	{
		string s;
		cin>>s;
		m[s]++;
	}
	for (auto x:m)
	{
		if(x.second==1)
			c++;
	}
	if (c==0)
	{
		cout<<-1;
	}
	else
	{
		for (auto pr:m)
		{
			if(pr.second==1)
				cout<<pr.first<<"\n";
		}
	}
	return 0;
}