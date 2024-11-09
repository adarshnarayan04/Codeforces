#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debugging.h"
#else
# define debug(x...)
#endif


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
const int N=1e6+10;
const int INF=1e18 +10;
double acc = 1e-6;
const long double pi = 3.14159265358979323846;

/*----------------------code start here -----------------------------*/
//removed int as long long as taking more memory--> so 1e8*8b=800mb    1mb=1e6
//and 1e8*4b(int)=400mb

void themagician(){

    int n,x;
    cin>>n>>x;
    vector<int> coins(n);
    for(int i=0;i<n;i++) cin>>coins[i];

    vector<int> prev(x+1,0);


    //coins[i]>=1 so no need of shifting to add base case ind<0 and amount=0 return 1--> as done in coin change 2--> leetcode
    for(int i=0;i<=x;i++)
    {
        if(i%coins[0]==0){
            prev[i]=1;
        }
    }
    

    // for(int target=0;target<=x;target++){
    //     vector<int> cur(x+1,0);
    //     for(int j=1;j<n;j++){//as we have already done for j=0 above(base case)
    //         cur[target]=prev[target];//not taken any coin(so we need j-1 index --> if j=0 it become j=-1 so we declare j=0 as base class now no problem)
    //         if(target-coins[j]>=0){
    //             cur[target]+=cur[target-coins[j]];//same index as we can take same coin again
    //             cur[target]%=M;
    //         }
    //     }
    //     prev=cur;
    // }
    //target should be inside --> as after completing the index we move to next state
    //each state pev(target)--> so each target value should be filled inside
    //so target loop should be inside

    
    for(int j=1;j<n;j++)
    {
        vector<int> cur(x+1,0);
        for(int target=0;target<=x;target++){
            cur[target]=prev[target];//not taken any coin(so we need j-1 index --> if j=0 it become j=-1 so we declare j=0 as base class now no problem)
            if(target-coins[j]>=0){
                cur[target]+=cur[target-coins[j]];//same index as we can take same coin again
                cur[target]%=M;
            }
        }
        prev=cur;

    }
    cout<<prev[x];
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
