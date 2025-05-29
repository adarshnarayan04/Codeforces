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
const int N=1e5+10;

double acc = 1e-6;
const long double pi = 3.14159265358979323846;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
//remove #define int long long , use ll one
template<typename T> 
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
/*----------------------code start here -----------------------------*/

void themagician(){
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    vector<int> a;
    for(auto &x:v) {
        cin>>x.first>>x.second;
       
    }
    sort(v.begin(),v.end(),[](auto &a,auto &b){
        return a.second<b.second;
    });
    debug(v)
    ordered_set<int> s;//so that only see arrival time that have depature time less than the current --> so that intersection occur
    ll ans=0;

    for(auto &x:v){
        int arr=x.first;
        int dep=x.second;//no need as all the element will be less than dep
        //can imagine ( as they have dep less than this dep , so arr will be obivoulsy less)
        //order of key --> give the number of element strictly less than arr
        ll dist=s.size()-s.order_of_key(arr);
     

        s.insert(x.first);
        ans+=dist;

    }
    cout<<ans<<nl;

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
