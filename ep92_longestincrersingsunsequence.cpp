#include<bits/stdc++.h>
using namespace std;
const int N=25e2+10;

vector<int>a(N);

//brute force

// int lis(int i)
// {
// 	int ans=1;//as i is in that subsequence
// 	for (int j = 0; j < i; ++j)
// 	{
// 		if(a[j]<a[i])
// 		{
// 			ans=max(ans,lis(j)+1);//+1 as 6 will be included
// 		}
// 	}
// 	return ans;
// }

//dp

int dp[N];
int lis(int i)
{
	if(dp[i]!=-1) return dp[i];
	
	int ans=1;//as i is in that subsequence
	// no need of base case(in base case loop will not run and ans will be returned)
	for (int j = 0; j < i; ++j)
	{
		if(a[j]<a[i])
		{
			ans=max(ans,lis(j)+1);//+1 as 6 will be included
		}
	}
	return dp[i]=ans;
}
//O(N^2) as N calls and tc of each call is N
int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
memset(dp,-1,sizeof(dp));

	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int mx=0;
	for (int i = 0; i < n; ++i)
	{
		mx=max(mx,lis(i));
	}
	cout<<mx;
	
	return 0;
}