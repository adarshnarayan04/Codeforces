#include<bits/stdc++.h>
using namespace std;
int dp[1000+10][1000+10];
int lcs(int i,int j,string &s1,string &s2)
{
	if(i<0||j<0) return 0;//means nothing in common
	
	if(dp[i][j]!=-1)return dp[i][j];
	//remove 1 char from s1
	int ans=lcs(i-1,j,s1,s2);
	//remove 1 char from s2
	ans=max(ans,lcs(i,j-1,s1,s2));
	//remove 1 char from s1 and 1 from s2
	ans=max(ans,lcs(i-1,j-1,s1,s2)+(s1[i]==s2[j]));// if true it give 1 else 0
	return dp[i][j]=ans;
}

int longestCommonSubsequence(string text1, string text2) {
	memset(dp,-1,sizeof(dp));
        
 }
int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	
	return 0;
}