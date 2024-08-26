#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debuggingh.h"
#else
# define debug(x...)
#endif

#define int long long
#define ll long long

#define w(t)   int testcase; cin>>testcase; for (int tc = 1; tc <= testcase; ++tc)
#define vin(v,n) for(int i = 0; i < n; ++i){int x;cin>>x;v.push_back(x);}
//vin(vector name,number of times you want to take  input)
#define vm(n) for(int i = 0; i < n; ++i){int x;cin>>x;v.push_back(x);m.push_back(x);}
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
    in(x)in(y)
    
    vector<ll> v(n+1,-1);
    
    //first approach-->make y-> x 1 and all negative
    // problem --> soemtime it become more negative due to sum so after adding 1 of y->x it remain negative
    // so in this case answer will be -1 but our answer is more negative--> so wring answer
    
    //so we tried to decrease the negative of -1 by adding +1 IN BETWEEN them so that it does not effect our answer
    
    for (int i = y; i <=x; ++i)// so that sum does not go negative
    {
    	v[i]=1;
    }
    for (int i = y-2; i >=1; i-=2)// so that sum does not go negative //y-1 should be negative so start from y-2
    {
    	v[i]=1;
    }
    for (int i = x+2; i <=n; i+=2)
    {
    	v[i]=1;
    }
    for (int i = 1; i < n+1; ++i)
    {
    	cout<<v[i]<<" ";
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

