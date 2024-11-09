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
    vector<int> v(n+1);//1 based
    for(int i=1;i<=n;i++) cin>>v[i];

    int l=2,r=n-1;//as we wnat to check next element (a r=n-1 not n) because of r=n-1 --> l=2 ( but we leave l=0 check --> we check back for l)
    while (l<=r)
    {
        if(v[l]==v[r]){
            l++;
            r--;
            continue;
        }
        else if(v[l]==v[l-1]||v[r]==v[r+1]){
            swap(v[l],v[r]);  
        }
        l++;
        r--;
    }
    int ans=0;
    for(int i=0;i<n;i++) ans+=(v[i]==v[i+1]);
    op(ans)
    
}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
  FastIO();
  
  
  //debug(tc)
  w(t){
    themagician();

  }
    
  
  
return 0;
}
