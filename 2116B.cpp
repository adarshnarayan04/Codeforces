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
                         
const unsigned int M = 998244353;
const int N=1e5+10;
const int INF=1e18 +10;
double acc = 1e-6;
const long double pi = 3.14159265358979323846;

/*----------------------code start here -----------------------------*/
int binpow(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1)
        {
            res = res * a;
            res%=M;

        }
            
        a = a * a;
        a%=M;
        b >>= 1;
    }
    res%=M;
    return res;
}
void themagician(){
//Always think to solve problem by Mathematically (also prove it mathematically) first , then other approach
    int n;
    cin>>n;

    vector<int> p(n),q(n),r(n);

    for(auto &x:p) cin>>x;
    for(auto &x:q) cin>>x;
    debug(p)
    debug(q)
    int maxi1=-1,maxi2=-1;
    int maxind1=-1,maxind2=-1;

    for(int i=0;i<n;i++){
        int x,y;
        if(p[i]>maxi1){
            maxi1=p[i];
            maxind1=i;
        }
        if(q[i]>maxi2){
            maxi2=q[i];
            maxind2=i;
        }
        // debug(maxi1,maxi2)
        // debug(maxind1,maxind2)

        if(maxi1>maxi2){
            x=binpow(2LL,p[maxind1]);
            y=binpow(2LL,q[i-maxind1]);
            r[i]=x+y;
            r[i]%=M;
        }
        else if ( maxi2>maxi1)
        {
            x=binpow(2LL,p[i-maxind2]);
            y=binpow(2LL,q[maxind2]);
            r[i]=x+y;
            r[i]%=M;

        }
        else {
            int ans;
            if(p[i-maxind2]>q[i-maxind1])
            {
                x=binpow(2LL,p[i-maxind2]);
                y=binpow(2LL,q[maxind2]);
                ans=x+y;

            }
            else{
                x=binpow(2LL,p[maxind1]);
                y=binpow(2LL,q[i-maxind1]);
                ans=x+y;

            }

            r[i]=ans;
            r[i]%=M;


        }

        r[i]%=M;
        cout<<r[i]<<" ";


    }
    nline;
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

