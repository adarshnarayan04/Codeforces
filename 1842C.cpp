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
  vector<int> v(n+1);
  for (int i = 1; i <=n; i++)
  {
    cin>>v[i];
  }
  
  vector<int> dp(n+1,INT_MAX);//dp[i] --> min of balls we not remove (thinking inverse of question)
  //asked max no of balls removed
  dp[0]=0;
  dp[1]=1;//as single element --> as have to remove
  unordered_map<int,int> m;//cointains min of all dp states of same number
  m[v[1]]=0;//dp[0] ---> so have to do shifting

  //in take case --> we remove upto the previous number (ex i  so and dp[i-1] as after that element has been removed)
  //that why in map we take dp[i-1]

  for (int i = 2; i <= n; i++)
  {
    if(m.find(v[i])!=m.end()){
      dp[i]=min(dp[i-1]+1,m[v[i]]);//not take and take     
      m[v[i]]=min(m[v[i]],dp[i-1]);
      //as when v[i] again come --> in take case --> we take min of all cases when we has come
    }
    else{//not take
      dp[i]=dp[i-1]+1;
      m[v[i]]=dp[i-1];
    }
  }
  debug(dp)
  op(n-dp[n])
  

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
