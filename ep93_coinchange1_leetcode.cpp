#include<bits/stdc++.h>
using namespace std;

// bruteforce

// int func(int amount,vector<int>&coins)
// {
// 	if (amount==0) return 0;
// 	int ans=INT_MAX;
// 	for(int &coin:coins)
// 	{
// 		if(amount-coin>=0)
// 		ans=min(ans,func(amount-coin,coins)+1);//as 1 coin is utilized therfore +1
// 	}
// 	return ans;
// }

//dp
int dp[10000+10];
int func(int amount,vector<int>&coins)
{
	if(dp[amount]!=-1) return dp[amount];
	if (amount==0) return 0;
	int ans=INT_MAX;
	for(int &coin:coins)
	{
		if(amount-coin>=0)
		ans=min(ans+0ll,func(amount-coin,coins)+1ll);//as 1 coin is utilized therfore +1
	//ll as func() may return INT_MAX in case of no answer (so INT_MAX+1 will give overflow)
	}
	return dp[amount]=ans;
}


 int coinChange(vector<int>& coins, int amount) {
 	memset(dp,-1,sizeof(dp));
 	int ans=func(amount,coins);
 	return ans==INT_MAX?-1:ans;
 	
        
  }
int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

vector<int> v={1,2,5};
cout<<coinChange(v,11);
	
	
	return 0;
}