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
    int n,m;
    cin>>n>>m;

    vector<int> v(m);
    for(auto &x:v) {
        cin>>x;
        if(x>=n) x=n-1;// so that can paint all with same color
    }

    sort(v.begin(),v.end());
    vector<int> suf(m);

    for(int i=m-1;i>=0;i--)
    {
        if(i==m-1) suf[i]=v[i];
        else{
            suf[i]=suf[i+1]+v[i];
        }
    }
    int ans=0;
    debug(v)
    debug(suf)

    for(int i=0;i<m-1;i++){
        
        int tar=n-v[i];
        int ind=lower_bound(v.begin()+i+1,v.end(),tar)-v.begin();
        debug(i,ind)
        if(ind==m) continue;
        int cnt=m-ind;
        int val= v[i]*cnt + suf[ind] - n*cnt + cnt;
        ans+=val;

    }
    cout<<ans*2<<nl;//for reverse *2

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

