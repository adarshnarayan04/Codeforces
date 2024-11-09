#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debugging.h"
#else
# define debug(x...)
#endif

#define int long long
#define ll long long

#define w(t)   int testcase; cin>>testcase; for (int tc = 1; tc <= testcase; ++tc)
#define vin(v,n) for(int i = 0; i < n; ++i){int x;cin>>x;v.push_back(x);}
//vin(vector name,number of times you want to take  input)
#define in(var) int var;cin>>var;
#define op(var) cout<<var<<"\n";
#define FastIO() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define eps 1e-8;

#define nline cout <<"\n"
#define nl "\n"


int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
                         
const unsigned int M = 1e9+7;
const int N=1e5+10;
const int INF=1e18 +10;
double acc = 1e-6;
const long double pi = 3.14159265358979323846;

/*----------------------code start here -----------------------------*/

void themagician(){
    int n;
    cin>>n;
    vector<vector<int>> adj(n+1);

    for (int i = 2; i <=n; i++)
    {
        int x;cin>>x;
        adj[i].push_back(x);
        adj[x].push_back(i);
        
    }
    // vector<int> dp(n+1);
    // //actually if asked of one node --> no need of dp (as in dfs there is no overlap)
    // //but we have it for all nodes ----> so stored all the ans 
    // //so that next query can be answered quickly

    // //else we have to call dfs for all nodes

    // auto dfs=[&](auto dfs,int node,int par) -> void{
    //     int sub=0;
    //     for(auto child:adj[node])
    //     {
    //         if(child!=par)
    //         {
    //             dfs(dfs,child,node);//calc for child
    //             sub+=(dp[child]+1);
    //         }
    //     }
    //     dp[node]=sub;//memorization
    // };
    // dfs(dfs,1,-1);
    // for (int i = 1; i <=n; i++)
    // {
    //     cout<<dp[i]<<" ";
    //     //if not stored in dp have to call dfs(i)
    // }
    
    //writing in more  understandable form --> but above appraoch good as dfs(does not have overlap)
    //we get overlap due to asking multiple query
    vector<int> dp(n+1,-1);
        auto dfs=[&](auto dfs,int node,int par) -> int{
        if(dp[node]!=-1) return dp[node];
        int sub=0;
        for(auto child:adj[node])
        {
            if(child!=par)
            {
                if(dp[child]==-1)
                   dfs(dfs,child,node);//calc for child
                sub+=(dp[child]+1);
            }
        }
        return dp[node]=sub;//memorization
    };
    for (int i = 1; i <=n; i++)
    {
        cout<<dfs(dfs,i,-1)<<" ";
        //if not stored in dp have to call dfs(i)
    }
}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
  FastIO();
  
  
  //debug(tc)
    themagician();
  
  
return 0;
}
