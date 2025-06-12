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
    int n,k;
    cin>>n>>k;

    vector<vector<int>> g(n+1);

    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    //approach: intially thinking all the city are industry , so we count how much happiness we get 
    //if we convert that city to toursim
    //we do -dep[i], as if a city is tourism --> then always is parent should be tourism city ( by greedy ) as parent is always preferred ( can see editorial)
    // so if we calculate for parent , then the child which is actually toursim , will get added as contribuation ( as + siz[i])
    //to remove that , the child city will be added to all its parent city ( so we -dep[i])
    vector<bool> vis(n+1);
    vector<int> siz(n+1),dep(n+1);
    int d=1;

    auto dfs=[&](auto dfs, int node,int par=-1)->int{
        vis[node]=1;
        siz[node]=1;
        dep[node]=d;

        for(auto c:g[node]){
            if(c==par || vis[c] ) continue;
            d++;
            siz[node]+=dfs(dfs,c,node);
            d--;
        }
        return siz[node];
    };
    

    dfs(dfs,1);
    vector<int> ans(n);
    // debug(siz)
    // debug(dep)

    for(int i=1;i<=n;i++){
        ans[i-1]=siz[i]-dep[i];
    }

    sort(ans.begin(),ans.end(),greater<int>());

    int val=accumulate(ans.begin(),ans.begin()+n-k,0LL);

    cout<<val<<nl;


    
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

