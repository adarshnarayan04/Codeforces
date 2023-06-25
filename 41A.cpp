#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	string x,y,z;
	cin>>x>>z;
	for (int i = x.size()-1; i>=0; --i)
	{
		y.push_back(x[i]);
	
	}
	if (y==z)
	{
		cout<<"YES";
	}
	else
		cout<<"NO";
	return 0;
}