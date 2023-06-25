#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	
	string a;
	cin>>a;
	if (a[0]>96)
	{
		a[0]-=32;
	}
	cout<<a;
	return 0;
}