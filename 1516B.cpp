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
    vector<int> v(n);

    for(auto &x:v) cin>>x;

    vector<int> pref(n);
    for(int i=0;i<n;i++){
        if(i==0) pref[i]=v[i];
        else pref[i]=pref[i-1]^v[i];
    }
    //only two case possible 2 or 3 equal element 
    //ex if 5 equal element formed--> can be conveted to 3 ( by taking xor of the 2 equal=0 , 0^equal=equal , so 3 element)-->1 ( but 1 is not allowed)
    //similary 4 equal --> 2 equal --> 0 ( so we check total xor=0 for 2 case)
    if(pref[n-1]==0){//when at last 2 are left
        YES;
        return;
    }
    int tar=pref[n-1];//we have to divide into three segments ( but the xor each segment will be total xor element)
    //as 3 equal element ---> 1 equal element ( which is final xor)
    vector<int> suf(n);
    for(int i=n-1;i>=0;i--){
        if(i==n-1) suf[i]=v[i];
        else suf[i]=suf[i+1]^v[i];
    }

    int ind1=-1,ind2=-1;
    for(int i=0;i<n;i++){
        if(pref[i]==tar && ind1==-1) ind1=i;
        if(suf[i]==tar) ind2=i;
    }

    if(ind1<ind2){
        YES;
    }
    else{
        NO;
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

