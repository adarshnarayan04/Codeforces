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
    //vector<int> dp(n+1,-1);

    // auto f=[&](auto f,int n)-> int{
    //     if(n==0) return 1;
    //     if(n<0) return 0;

    //     if(dp[n]!=-1) return dp[n];
    //     int ans=0;
    //     for (int i = 1; i <= 6; i++)
    //     {
    //         ans+=f(f,n-i);
    //         ans%=M;
    //     }
    //     //can use the index concpet --> take, not take (as done in coin change --> it is same question)
    //     //during take do not increase the index as we can take agaain
    //     //but it take more space as we have to store the index also in dp
    //     return dp[n]=ans;

    // };

    vector<int> dp(n+1,0);
    dp[0]=1;

    for(int left=1;left<=n;left++)
    {
        if(dp[left]!=0) continue;
        for(int dice=1;dice<=6;dice++)
        {
            if(left-dice>=0)
            {
                dp[left]+=dp[left-dice];
                dp[left]%=M;
            }
        }

    }

    cout<<dp[n]<<nl;
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
