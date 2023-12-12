#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int h[N];
//dp
int k;
int dp[N];
 int func(int i)
 {
 	if(i==0) return 0;
 	int cost=INT_MAX;
 	if(dp[i]!=-1) return dp[i];
 	for (int j = 1; j <=k; ++j)
 	{
 		if(i-j>=0)//so that -ive function call not happen(as stone number are from 0 to n-1)
 		cost=min(cost,func(i-j)+abs(h[i]-h[i-j]));
 	}
 	
 return dp[i]=cost;
 	
 }
int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
memset(dp,-1,sizeof(dp));
int n;
cin>>n>>k;
for (int i = 0; i < n; ++i)
{
	cin>>h[i];
}
cout<<func(n-1);
//O(n*k)
// as n function call and time complexity of each call is O(k)


	
	return 0;
}