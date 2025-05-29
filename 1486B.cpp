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
//Always think to solve problem by Mathematically (also prove it mathematically) first , then other approach
    int n;
    cin>>n;

    vector<int> x,y;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        x.push_back(a);
        y.push_back(b);
    }
    if(n&1){
        cout<<1<<nl;
        return;
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());

    int mid1=n/2;
    int mid2=n/2-1;
    int xans=0,yans=0;

    if(x[mid1]!=x[mid2]){
        xans+=(x[mid1]-x[mid2]+1);

    }
    else{
        xans=1;
    }

    if(y[mid1]!=y[mid2]){
        yans+=(y[mid1]-y[mid2]+1);

    }
    else{
        yans=1;
    }
    cout<<xans*yans<<nl;

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

