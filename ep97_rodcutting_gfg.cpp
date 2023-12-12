#include<bits/stdc++.h>
using namespace std;
int dp[1000+10];
 int func(int len_left,vector<int>price)
 {
 	if(len_left==0) return 0;
 	if(dp[len_left]!=-1) return dp[len_left];
 	
 	int ans=0;
 	for (int len_to_cut = 1; len_to_cut <=price.size(); ++len_to_cut)//as index 0 of price means 1 lenght to cut
 	{
 		if (len_left-len_to_cut>=0)
 		{
 			ans=max(ans,func(len_left-len_to_cut,price)+price[len_to_cut-1]);// therefore index will be lenght -1
 		}
 	}
 	return dp[len_left]=ans;
 }
int cutRod(int price[], int n) {
	std::vector<int> v(price,price+n);
	memset(dp,-1,sizeof(dp));
	
	
         return func(n,v);
    }
int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	
	
	return 0;
}