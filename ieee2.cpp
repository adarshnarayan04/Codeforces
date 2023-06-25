#include<bits/stdc++.h>
using namespace std;
const int N=100;
int sum[N];

int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	int n;
	cin>>n;
	int a[n+1];
	int c=0;
	for (int i = 1; i <= n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 1; i <= n; ++i)
	{
		sum[i]=sum[i-1]+a[i];
	}
	// for (int i = 1; i <=n; ++i)
	// {
	// 	cout<<sum[i];
	// }
	for (int i = 2; i <=n; ++i)
	{
		if(sum[i-1]==a[i])
		{
			c++;
			break;
		}
	}
	if(c==0)
		cout<<"NO";
	else
		cout<<"YES";
	
	return 0;
}