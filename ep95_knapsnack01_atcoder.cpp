#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int wt[N],val[N];
long long dp[100][100005];
long long func(int ind,int wt_left)
{
	if(wt_left==0) return 0;
	if(ind<0) return 0;// means bag is not full but item is over(we return 0 as no value will be added also we want max so zero canot affect)
	
	//always write below base conditions
	if(dp[ind][wt_left]!=-1) return dp[ind][wt_left];
	// do not choose the item
	long long ans=func(ind-1,wt_left);
	// choosen the item at that index
	if(wt_left-wt[ind]>=0)
	ans=max(ans,func(ind-1,wt_left-wt[ind])+val[ind]);
	
	return dp[ind][wt_left]=ans;
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
	cout<<func(n-1,w);// will return the maximum value to chieve weight w using items upto index n-1
	// as in func we got down n-1-->n-2-->1-->0
	//so func n-1 will give upto n-1 as it goes down from that (that we do in dp--->startt drom end and go back)
	return 0;
}