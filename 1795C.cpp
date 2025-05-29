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
    vector<int> a(n),b(n);
    for(auto &x:a)cin>>x;
    for(auto &x:b) cin>>x;
    // if(n==1){
    //     cout<<min(a[0],b[0])<<nl;
    //     return;
    // }
    vector<int> pref(n);
    for(int i=0;i<n;i++){
        if(i==0) pref[i]=b[i];
        else{
            pref[i]=pref[i-1]+b[i];
        }
    }
    debug(pref)
    vector<int> dif(n);
    vector<int> ext(n);
    for(int i=0;i<n;i++){
        int prev;
        if(i==0) prev=0;
        else prev=pref[i-1];
        
        int ind=upper_bound(pref.begin(),pref.end(),a[i]+prev)-pref.begin();
        ind--;
        debug(ind)
        if(ind==-1){
            ext[0]+=a[i];
            continue;
        }
        dif[i]+=1;
        if(ind!=n-1) dif[ind+1]-=1;//for i to ind ( all will take their part fully)

        int left=a[i]-(pref[ind]-prev);//as upperbound -1 ( so <=target), so soemthings can left also
        debug(left,ind)
        if(ind!=n-1){
            ext[ind+1]+=left;
        }

    }
    
    for(int i=1;i<n;i++){
        dif[i]+=dif[i-1];
    }
    debug(dif)
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        ans[i]=dif[i]*b[i]+ext[i];
        cout<<ans[i]<<" ";
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

