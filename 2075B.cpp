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
    int n, k;
    cin>>n>>k;
    
    vector<int> v(n);
    for(auto &x:v) cin>>x;

    if(k==1){
        if(n==2){
            cout<<v[0]+v[1]<<nl;
            return;
        }
        int maxi=0;
        for(int i=1;i<n-1;i++)
        {
            maxi=max(maxi,v[i]);
        }
    
        int ans=max(v[0]+v[n-1],max(v[0],v[n-1])+maxi);
        cout<<ans<<endl;
    }
    else{
        sort(v.begin(),v.end(),greater<int>());
        int ans=0;
        for(int i=0;i<=k;i++){
            ans+=v[i];
        }
        cout<<ans<<endl;
    }
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

