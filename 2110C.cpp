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

    int ma=0,mi=0;
    bool flag=false;

    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;

        if(flag) continue;

        if(v[i]==1){
            ma++;
            mi++;
        }
        else if (v[i]==-1){
            ma++;
        }
        debug(mi,ma)
        int temp=ma;

        if( r>=mi && l<=ma )
        {
            ma=min(ma,r);
            mi=max(mi,l);
        }
        else{
            //debug(v)
            cout<<-1<<nl;
            flag=true;
        }
        // if(v[i]==-1){
        //     if(temp==ma){
        //         v[i]=1;
        //     }
        //     else{
        //         v[i]=0;
        //     }
            

        // }
        //debug("int",mi,ma)


    }
    if(flag) return;
    for (int i = 0; i < n; i++)
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

