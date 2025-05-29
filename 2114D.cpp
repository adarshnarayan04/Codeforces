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

    vector<pair<int,int>> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    if(n==1){
        cout<<1<<nl;
        return;
    }


    sort(v.begin(),v.end(),[&](auto &a , auto &b){
        if(a.first==b.first){
            return a.second>b.second;
        }
        else{
            return a.first<b.first;
        }
    });


    int ans=INF;
    int area;

    int dif= max_element(v.begin()+1,v.end(),[](auto& lhs,auto& rhs) { return lhs.second < rhs.second; })->second - min_element(v.begin()+1,v.end(),[](auto& lhs,auto& rhs) { return lhs.second < rhs.second; })->second;

    area= (abs(v[n-1].first-v[1].first)+1)* (dif+1);
    if(area==n-1){
        area+=min(abs(v[n-1].first-v[1].first)+1,(dif+1));
    }
    ans=min(ans,area);
    debug(v)
    debug(ans)


    sort(v.begin(),v.end(),[&](auto &a , auto &b){
        if(a.first==b.first){
            return a.second<b.second;
        }
        else{
            return a.first<b.first;
        }
    });

    dif= max_element(v.begin(),v.end()-1,[](auto& lhs,auto& rhs) { return lhs.second < rhs.second; })->second - min_element(v.begin(),v.end()-1,[](auto& lhs,auto& rhs) { return lhs.second < rhs.second; })->second;

    area= (abs(v[n-2].first-v[0].first)+1)* (dif+1);
    if(area==n-1){
        area+=min((abs(v[n-2].first-v[0].first)+1),(dif+1));
    }
    ans=min(ans,area);
    debug(v)
    debug(ans)


    sort(v.begin(),v.end(), [&](auto &a , auto &b){
        if(a.second==b.second){
            return a.first>b.first;
        }
        else{
            return a.second<b.second;
        }
    });
    debug(v)
    debug(ans)

    dif= max_element(v.begin()+1,v.end(),[](auto& lhs,auto& rhs) { return lhs.first < rhs.first; })->first - min_element(v.begin()+1,v.end(),[](auto& lhs,auto& rhs) { return lhs.first < rhs.first; })->first;
    area= (dif+1)* (abs(v[n-1].second-v[1].second)+1);
    if(area==n-1){
        area+=min((dif+1), abs(v[n-1].second-v[1].second)+1) ;
    }
    ans=min(ans,area);


    sort(v.begin(),v.end(), [&](auto &a , auto &b){
        if(a.second==b.second){
            return a.first<b.first;
        }
        else{
            return a.second<b.second;
        }
    });
    dif= max_element(v.begin(),v.end()-1,[](auto& lhs,auto& rhs) { return lhs.first < rhs.first; })->first - min_element(v.begin(),v.end()-1,[](auto& lhs,auto& rhs) { return lhs.first < rhs.first; })->first;
    area= (dif+1)* (abs(v[n-2].second-v[0].second)+1);
    if(area==n-1){
        area+=min( (dif+1), (abs(v[n-2].second-v[0].second)+1));
    }
    ans=min(ans,area);
    debug(v)
    debug(ans)

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

