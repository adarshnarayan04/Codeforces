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
    int tar;cin>>tar;
    vector<int> c(n);
    for(auto &x:c) cin>>x;
    // vector<int> dp(tar+1,-1);

    // auto f=[&](auto f,int left) -> int{
    //     if(left==0) return 0;
    //     if(left<0) return INF;
    //     if(dp[left]!=-1) return dp[left];
    //     int ans=INF;
    //     for(auto x:c){
    //         ans=min(ans,f(f,left-x)+1);
    //     }
    //     return dp[left]=ans;

    // };

    // cout<<(f(f,tar)==INF?-1:f(f,tar))<<nl;
    vector<int> dp(tar+1,INF);

    dp[0]=0;

    for(int left=1;left<=tar;left++){
        for(auto x:c){
            if(left-x>=0){
                dp[left]=min(dp[left],dp[left-x]+1);
            }
        }
    }

    cout<<(dp[tar]==INF?-1:dp[tar])<<nl;
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
