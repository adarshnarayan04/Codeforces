#include<bits/stdc++.h>
using namespace std;
int dp[100000+10][210];
bool func(int sum_left,vector<int>&a,int index)
{
	if(sum_left==0) return true;
    if(index<0) return false;
    if(dp[sum_left][index]!=-1) return dp[sum_left][index];
	bool ans=0;
	// not consider ith index
	ans=func(sum_left,a,index-1);
	
	//consider ith index
	if(sum_left-a[index]>=0)
	{
		ans|=func(sum_left-a[index],a,index-1);// so that if one is true then answer wil be true ,therefore union
	}
	return dp[sum_left][index]=ans;
}
    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum&1) return false;
        memset(dp,-1,sizeof(dp));
        return func(sum/2,nums,nums.size()-1);//sum/2 as equal halves
        
    }
int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);



	
	return 0;
}