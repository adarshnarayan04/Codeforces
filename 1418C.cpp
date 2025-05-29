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
//Always think to solve problem by Mathematically (also prove it mathematically) first , then other approach
    int n;cin>>n;
    vector<int> v(n);
    for(auto &x:v) cin>>x;

    // vector<vector<int>> dp(n,vector<int>(2,-1));

    // auto check=[](int a, int b){
    //     if(a==1 && b==1){
    //         return 1;
    //     }
    //     return 0;
    // };

    // auto f=[&](auto f,int ind,int val)->int{
    //     debug(ind,val)
    //     if(ind>=n){
    //         return 0;
    //     }
    //     if(dp[ind][val]!=-1) return dp[ind][val];
        

    //     int ans=INT_MAX;

       
    //     ans=f(f,ind+1,!val)+check(val,v[ind]);
        
    //     if(ind+1<n){
    //         ans=min(ans,f(f,ind+2,!val)+check(val,v[ind+1])+check(val,v[ind]));
    //     }
    //     return dp[ind][val]=ans;

    // };

    // cout<<f(f,0,1)<<nl;

    //tabulation

    auto check=[](int a, int b){
            if(a==1 && b==1){
                return 1;
            }
            return 0;
    };
    vector<vector<int>> dp(n+3,vector<int>(2,0));

    for(int ind=n-1;ind>=0;ind--){
        for(int val=0;val<2;val++){

            int ans=INT_MAX;

            ans=dp[ind+1][!val]+check(val,v[ind]);

            ans=min(ans,dp[ind+2][!val]+check(val,v[ind])+check(val,v[ind+1]));

            dp[ind][val]=ans;


        }
    }

    cout<<dp[0][1]<<nl;

}



signed main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
  FastIO();
  
  w(t){
  //debug(tc)
    themagician();
  }
  
return 0;
}

