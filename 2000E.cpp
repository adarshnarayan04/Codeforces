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
    in(n)in(m)in(k)
    in(w)
    vector<int> v;
    vin(v,w);
    int corner=4;
    //vector<vector<int>> mat(n+1,vector<int> (m+1));
    vector<int> ans;

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            int a=i;
            int b=j;


            int amin=max(1ll,a-k+1);
            int amax=min(n,a+k-1);

            //gave range it which a will lie in k sqaure
            int asize=amax-amin+1;

            int bmin=max(1ll,b-k+1);
            int bmax=min(m,b+k-1);
            int bsize=bmax-bmin+1;

            int ca=asize-k+1;//number of times it will lie in k range
            int cb=bsize-k+1;
            

            int c=ca*cb;
            debug(i,j,ca,cb)
            ans.push_back(c);
        }
        
    }
    sort(ans.begin(),ans.end(),greater<int>());
    sort(v.begin(),v.end(),greater<int>());
    debug(ans)
    debug(v)

    int maxi=0;

    for (int i = 0; i < w; i++)
    {
        debug(maxi)
        maxi+=(ans[i]*v[i]);
    }
    op(maxi)
    //debug(ans)

    
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

