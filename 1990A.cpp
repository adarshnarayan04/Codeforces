#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debuggingh.h"
#else
# define debug(x...)
#endif

#define int long long

#define w(t)   int testcase; cin>>testcase; for (int tc = 1; tc <= testcase; ++tc)
#define vin(v,n) for(int i = 0; i < n; ++i){int x;cin>>x;v.push_back(x);}
//vin(vector name,number of times you want to take  input)
#define vm(n) for(int i = 0; i < n; ++i){int x;cin>>x;v.push_back(x);m.push_back(x);}
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
    in(n)
   vector<int> v;
   vin(v,n);
   
   vector<int>cnt(n+1);
   
   for(auto &x:v)
   {
   	cnt[x]++;
   }
   
   for(auto &x:cnt)
   {
   	if(x&1)//as will pass all even occurence 5 5 (also state will remain same in even),problem when it odd  5 6 (6 appear only once)-->alice will win
   	{
   		YES;
   		return;
   	}
   }
   NO;
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

