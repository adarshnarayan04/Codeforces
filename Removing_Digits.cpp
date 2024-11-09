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
    if(n<9) {
        if(n==0) cout<<0;
        else cout<<1;
        return;
    }

    vector<int> dp(n+1,INT_MAX);
    dp[0]=0;
    for(int i=1;i<=9;i++) dp[i]=1;

    for(int i=10;i<=n;i++)
    {
        
        string s=to_string(i);
        for(int j=0;j<s.size();j++)
        {
            int num=i;
            num-=(s[j]-'0');
            debug(num,i)
            debug(dp[num])
            dp[i]=min(dp[num]+1,dp[i]);
        }
        debug(dp[i],i)

    }
    cout<<dp[n];
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
