#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	int t;
	cin>>t;
	int a[t];
	for (int i = 0; i < t; ++i)
	{
		cin>>a[i];
	}
	sort(a,a+t);
	cout<<a[t-1]-a[0];
	
	return 0;
}