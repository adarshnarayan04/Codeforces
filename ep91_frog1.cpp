#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int h[N];
//brute force approach
 // int func(int i)
 // {
 // 	if(i==0) return 0;//as intailly at stone 1(so no cost)
 // 	int cost=INT_MAX;//as we take min of cost therefore intilaize as INT_MAX
 // 	//way 1
 // 	cost=min(cost,func(i-1)+abs(h[i]-h[i-1]));
 // 	//way 2
 // 	if(i>1)//as func(i-1) and func(i-2) boyh exsist so we have handelled 0(i-1) above we handel -1(i-2) here
 // 	cost=min(cost,func(i-2)+abs(h[i]-h[i-2]));
 // return cost;
 	
 // }
//dp
int dp[N];
 int func(int i)
 {
 	if(i==0) return 0;//as intailly at stone 1(so no cost)
 	int cost=INT_MAX;//as we take min of cost therefore intilaize as INT_MAX
 	if(dp[i]!=-1) return dp[i];
 	//way 1
 	cost=min(cost,func(i-1)+abs(h[i]-h[i-1]));
 	//way 2
 	if(i>1)//as func(i-1) and func(i-2) boyh exsist so we have handelled 0(i-1) above we handel -1(i-2) here
 		//stone number is from 0 to n-1 ,so stone number is not negative ,no function call for negative stone number
 	cost=min(cost,func(i-2)+abs(h[i]-h[i-2]));
 return dp[i]=cost;
 	
 }
int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
memset(dp,-1,sizeof(dp));
int n;
cin>>n;
for (int i = 0; i < n; ++i)
{
	cin>>h[i];
}
cout<<func(n-1);


	
	return 0;
}