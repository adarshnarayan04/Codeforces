#include<bits/stdc++.h>
using namespace std;

//dp

// int func(int amount,vector<int>&coins)
// {
// 	if(dp[amount]!=-1) return dp[amount];
// 	if (amount==0) {
	
// 		return 1;
// 	}
// 	int ans=0;
// 	for(int &coin:coins)
// 	{
// 		if(amount-coin>=0)
// 		ans+=func(amount-coin,coins);

	
// 	}
// 	return dp[amount]=ans;
// }
// will give duplicate cases ex 2,2,1 and 1,2,2 are counted as different(as they are same)
// int dp[5000+10][5000+10];
// int func(int amount,vector<int>&coins,int i)
// {
// 	//cout<<coins[i]<<" "<<amount<<" ";
// 	if(dp[amount][i]!=-1) return dp[amount][i];
// 	if (amount==0) {
	
// 		return 1;
// 	}
// 	int ans=0;
// 	for(i;i<coins.size();i++)
// 	{
// 		if(amount-coins[i]>=0)
// 		{
			
// 			ans+=func(amount-coins[i],coins,i);
// 			//cout<<endl;
// 		}
		

// 	}
// 	return dp[amount][i]=ans;
// }
// will give tle
int dp[5000+10][300+10];
int func(int amount,vector<int>&coins,int index)
{
	if (amount==0) {
	
		return 1;
	}
	if(index<0) return 0;
	
	if(dp[amount][index]!=-1) return dp[amount][index];
    
	int ways=0;
	for (int coin_amount = 0; coin_amount <=amount; coin_amount+=coins[index])// starting from zero as if no coin of that amount is removed
	{
		ways+=func(amount-coin_amount,coins,index-1);
	}

	return dp[amount][index]=ways;
}


 int change(vector<int>& coins, int amount) {
 	memset(dp,-1,sizeof(dp));
 

 	int ans=func(amount,coins,coins.size()-1);//in dp we start from end (therefore index=coins.size())
 	return ans;
 	
        
  }
int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

vector<int> v={1,2,5};
cout<<change(v,5);
	
	
	return 0;
}