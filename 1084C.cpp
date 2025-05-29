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

int binpow( int num , int pow){
    int val=1;
    int a=1;

    while(pow){
        a*=a;
        a%=M;

        if(pow&1){
            val+=a;
            val%=M;
        }
        pow>>=1;

    }
    return val;
}
void themagician(){
//Always think to solve problem by Mathematically (also prove it mathematically) first , then other approach
    string s;
    cin>>s;

    int n=s.size();

    vector<int> v;
    int c=0;

    for(int i=0;i<n;i++){
        if(s[i]=='a') {
            c++;
        }

        if(s[i]=='b'){
            if(c)
            v.push_back(c);
            c=0;
        }
        
    }
    if(c){
        v.push_back(c);
    }

    int si=v.size();
    if(si==0){
        cout<<0;
        return;
    }
    int ans=1;

  

    for(int i=0;i<si; i++){
        ans*=(v[i]+1);
        ans%=M;
    }
    ans-=1;
    ans%=M;
    cout<<ans;
  
}



signed main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
  FastIO();
  

  //debug(tc)
    themagician();
  
  
return 0;
}

