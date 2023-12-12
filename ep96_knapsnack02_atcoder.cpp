#include<bits/stdc++.h>
using namespace std;
const int N=110;
int wt[N],val[N];
long long dp[105][100005];
long long func(int ind,int val_left)
{
	if(val_left==0) return 0;//we no weight to achieve value 0,therefore return 0  
	if(ind<0) return 1e15;//means no minimum weight possible
	// so that ans=min(ans,1e15+wt[ind]); therefore ans=ans also previos ans will be 1e15(as it will also have neagative index);
	//as both have fun(ind-1,   )
	// as ans=min(1e15,1e15+wt[ind])==>ans=1e15
    // like in ep91 frog problem(1)--> at negative index we return INT_MAX(here ans in long long so canot return INT_MAX)
    // so min weight will become 1e15>w(1e9) so negative answer never come at answer	
    
	if(dp[ind][val_left]!=-1) return dp[ind][val_left];
	
	//do not chose the item
	long long ans=func(ind-1,val_left);
	
	//chose the item
	if(val_left-val[ind]>=0)
	ans=min(ans,func(ind-1,val_left-val[ind])+wt[ind]);//as that item is selected ,therefore its weight is added
	//we want min weight to achieve that value
	
	return dp[ind][val_left]=ans;
	
	
	
}
int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

memset(dp,-1,sizeof(dp));
	int n,w;
	cin>>n>>w;
	for (int i = 0; i < n; ++i)
	{
		cin>>wt[i]>>val[i];
	}
	int max_value=1e5;
	for (int i = max_value; i>=0; i--)//applying for all value
	{
		
		if(func(n-1,i)<=w)
		{
			
			cout<<i;//as we get that max value(max ,as we start from max_value not from 0) whose min weight is less than or equal W
			break;
		}
	}

	return 0;
}