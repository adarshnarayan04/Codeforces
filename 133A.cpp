#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	string x;
	cin>>x;
	int y=0;
	string a="H",b="Q",c="9",d="+",e;
	for (int i = 0; i < x.size(); ++i)
	{
		e=x[i];
		if (e==a||e==b||e==c)
		{
			cout<<"YES";
			y=1;
			break;
		}
	}
	if(y==0)
		cout<<"NO";
	
	return 0;
}