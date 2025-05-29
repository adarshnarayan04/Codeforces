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
    in(n)
    vector<int> v(n);
    for(auto &x: v) cin>>x;
    sort(v.begin(),v.end());
    int l=0,r=n-1;
    int x=0;
    int cost=0;
    debug(v)
    while(l<r){
      x+=v[l];
      if(x==v[r]){
        cost++;
        cost+=v[l];
        v[r]=0;
        r--;
        x=0;
        v[l]=0;
      }
      else if(x>v[r]){
        int ex=x-v[r];
        v[r]=0;
        r--;
        x=0;
        cost++;
        cost+=(v[l]-ex);
        v[l]=ex;
      }
      else if(x<v[r]) {
        cost+=v[l];
        v[l]=0;
      }
      if(v[l]==0) l++;
    }
    debug(v)
    debug(x,cost)
    debug(l,r)
    if(l==r && v[l]!=0){
      int dif=v[l]-x;
      // if(dif==0) cost++;
      // else if(v[l]==1) cost++;
      // else{
      debug(dif)
        int op=dif/2;
        cost+=(op+1);//1 to apply x;
        if(v[l]>1 && dif&1)  cost++;
      //}
    }

    
    cout<<cost<<nl;
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

