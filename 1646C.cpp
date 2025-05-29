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
vector<int> f(16,1);
void themagician(){
//Always think to solve problem by Mathematically (also prove it mathematically) first , then other approach
    int n;
    cin>>n;
    auto solve=[&](auto solve,int num,int ind)->int{
        debug(num)
        if(ind==2) return __builtin_popcountll(num);
        if(num==0) return 0;
        if((num & (num-1))==0){
            return 1;
        }
        
        int ans=__builtin_popcountll(num);

        if(f[ind]>num){
            return solve(solve,num,ind-1);
        }
        else{
            int take=solve(solve,num-f[ind],ind-1)+1;
            int nottake=solve(solve,num,ind-1);
            return min(take,nottake);
            
        }
        // int ind = upper_bound(f.begin(), f.end(), num) - f.begin();
        // ind--;
        // // for (int i = ind; i >= 1; i--) {
        // //     int left = num - f[i];
        // //     int cnt = solve(solve, left);
        // //     ans = min(ans, cnt + 1);
        // // }
        // int left=num-f[ind];
        // int cnt=solve(solve, left);
        // ans = min(ans, cnt + 1);
        // return ans;


    };
    
    cout<<solve(solve,n,15)<<nl;

}



signed main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
  FastIO();
  for(int i=1;i<16;i++){
    f[i]=f[i-1]*i;
  }
  
  w(t){
  //debug(tc)
    themagician();
  }
  
return 0;
}

