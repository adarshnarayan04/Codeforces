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
    in(n)in(k)
    vector<pair<int,int>> v(n);
    for(auto &i:v)
    {
        cin>>i.first;

    }
    for (auto &i : v)
    {
        cin>>i.second;
    }
    sort(v.begin(),v.end());  
    debug(v) 
    int lo=0,hi=2e9+10,ans=0;//case1 k used in ans to make it max
    int mid;
    while(hi>=lo){
        mid=lo+(hi-lo)/2;
        int req=(n-1)/2+1+1;//number it should be greater than or equal to become median(+1 for itself (as equal)and +1 for max no removed)
        int rem=k;
        for (int i = n - 1; i >= 0; i--)
        {
            if(v[i].first>=mid) req--;
            else if(v[i].second==1)
            {
                if(mid-v[i].first<=rem)
                {
                    rem-=mid-v[i].first;//amking it equal to median
                    req--;
                }

            }
        }
            if(req<=0)
            {
                ans=mid;
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }

    }
        int ans1=ans+v[n-1].first;//case 1 mediam maximixed
        int ind=-1;
        for (int i = n - 1; i >= 0; i--)
        {
            if(v[i].second==1)
            {
                ind=i;
                break;
            }
        }
        if(ind==-1)
        {
            op(ans1);
            return;
        }
        int ans2;//case two: max number removed and k used in maximum number//here only two possible median if removed for one falf and other half
        if(ind<=n/2-1)//12345 (2 removed)--> 1345 median is same=3 on n/2 as normal median
        {
            ans2=v[n/2].first+v[ind].first+k;
        }
        else{//12345 (4 removed)--> 1235 new median=2 one index less
            ans2=v[n/2-1].first+v[ind].first+k;
        }
        op(max(ans1,ans2))
        
        

        
    

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

