#include<bits/stdc++.h>
using namespace std;
int dp[100000+10][110];
bool func(int sum_left,vector<int>&a,int index)
{
	if(sum_left==0) return true;
    if(index<0) return false;// means sum not possible
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

int Solution(vector<int> &A, int B) {
	memset(dp,-1,sizeof(dp));
	
}
int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);



	
	return 0;
}