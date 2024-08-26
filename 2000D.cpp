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
    in(n);
    vector<int> v;
    vin(v,n);
    string s;
    cin>>s;
    vector<int> prefix(n);
    for (int i = 0; i < n; i++)
    {
        if(i==0)
        {
            prefix[i]=v[i];
        }
        else{
            prefix[i]=prefix[i-1]+v[i];
        }
    }
    int ans=0;
    int lo=0,hi=n-1;
    while(hi>lo)
    {
        if(s[lo]!='L')
        {
            lo++;
        }
        if(s[hi]!='R')
        {
            hi--;
        }
        if(s[lo]=='L'&&s[hi]=='R')
        {
            if(lo!=0)
            {
                ans+=(prefix[hi]-prefix[lo-1]);

            }
            else{
                ans+=prefix[hi];
            }
            lo++;
            hi--;
        }
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

