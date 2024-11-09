#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debugging.h"
#else
# define debug(x...)
#endif

#define int long long
#define ll long long
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
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
    vector<int> v(n);
    unordered_map<int,int,custom_hash> m;
    int sum=0;
    //vector<pair<int,int>> interval;
    m[0]=-1;//sum =0 at index -1
    //as we do +1 m[req]+1 --> so no problem
 
    int start=INT_MIN;//as we already get the all interval in sorted way of end (as do in n-meeting)--> as we check the end at each step and find the start for it
    //
    int cnt=0;
 
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        sum+=v[i];
 
        int req=sum-0;
 
       
        if(m.find(req)!=m.end()){
          if(start<m[req]+1)
          {
            //interval.push_back({m[req]+1,i});
            start=i;
            cnt++;
          }
          
        }
        
        m[sum]=i;
    }
    op(cnt)

    // int n;
    // cin>>n;
    // vector<int> v(n);
    // unordered_map<int,int,custom_hash> m;
    // int sum=0;
    // vector<pair<int,int>> interval;
    // m[0]=-1;//sum =0 at index -1
    // //as we do +1 m[req]+1 --> so no problem

    // for (int i = 0; i < n; i++)
    // {
    //     cin>>v[i];
    //     sum+=v[i];

    //     int req=sum-0;

       
    //     if(m.find(req)!=m.end()){
    //       interval.push_back({m[req]+1,i});
    //     }
        
    //     m[sum]=i;
    // }
    // //n--metting
    // sort(interval.begin(),interval.end(),[](auto &a,auto &b){
    //   return a.second<b.second;
    // });

    // int start=INT_MIN;
    // int cnt=0;

    // for(auto &i:interval){
    //   if(i.first>start){
    //     cnt++;
    //     start=i.second;
    //   }
    // }
    // op(cnt)

    // debug(interval)
    

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
