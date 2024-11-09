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

    vector<int> v(n);
    for(auto &x:v) cin>>x;

    auto f=[&](int k)
    {
        bool used=false;
        vector<bool> vis(n);
        for(int i=1;i<n;i++)
        {
            if(v[i]-v[i-1]>k)
            {
                if(used) return false;
                else used=true;
                vis[i-1]=1;
            }
            else{
                vis[i]=1;
                vis[i-1]=1;
                i++;
            }
        }
        if(!vis[n-1])
        {
            return !used;
        }
        
        return true;

    };
    int lo=1,hi=1e18;
    int mid;
    int ans=-1;
    while(hi>=lo)
    {
        mid=(hi+lo)>>1;
        if(f(mid))
        {
            ans=mid;
            hi=mid-1;

        }
        else lo=mid+1;
    }
    op(ans)

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
