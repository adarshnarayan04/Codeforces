#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debugging.h"
#else
# define debug(x...)
#endif

#define ll long long
#define ld long double
#define ull unsigned long long
#define popcount(x)     __builtin_popcountll(x)

#define w(t)            ll testcase; cin>>testcase; for (ll tc = 1; tc <= testcase; ++tc)
#define vin(v,n) for(int i = 0; i < n; ++i){ll x;cin>>x;v.pb(x);}
//vin(vector name,number of times you want to take  input)
#define vm(n) for(int i = 0; i < n; ++i){ll x;cin>>x;v.pb(x);m.pb(x);}
#define in(var) ll var;cin>>var;
#define op(var) cout<<var<<"\n";
#define pb push_back
#define sz(x) (int) (x).size()
#define fi first
#define se second
#define mp make_pair
#define fl(i,a,n) for(ll i=a;i<n;i++)
#define fv(a,x) for (auto& a : x)
#define all(x) (x).begin(), (x).end()
#define FastIO() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define eps 1e-8;

typedef pair<ll, ll> pll;
typedef vector<pll> vpll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef map<ll, ll> mll;

#define loop(n) for (ll i = 0; i < n; i++)// use loop(n-1) if not want loop to act on last number
#define loopj(n) for (ll j = 0; j < (n); j++)
#define loop1(n) for (ll i = 1; i < n; i++)
#define loop1n(n) for (ll i = 1; i <= n; i++)//or use loop1(n-1)
#define loopn1(n) for (ll i = n-1; i>=0; i--)
#define loops(i, n) for (ll i = 1; i < n; i++)

#define nline cout <<"\n"
#define nl "\n"

template <typename T>
ostream &operator<<(ostream &os, vector<T> arr)
{
    for (int i = 0; i < (int)arr.size(); i++)
    {
        os << arr[i] << " ";
    }
    return os << nl;
}

//end

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
bool cmp(int c, int d) { return c > d; }
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowof2(int n){return (n && !(n&(n-1)));}
bool isPerfectSq(ll n){ll root=sqrtl(n);return root*root==n;}

                         
const unsigned int M = 1e9+7;
const int N=1e5+10;
const ll INF=1e18 +10;
double acc = 1e-6;
const ld pi = 3.14159265358979323846;

/*----------------------code start here -----------------------------*/

void themagician(){
    in(n)in(k1)in(k2)
     vl a,b;
     vin(a,n);
     vin(b,n);

     priority_queue<ll> pq;
     loop(n)
     {
        pq.push(abs(a[i]-b[i]));
     }
     debug(pq.size())

     ll tot=k1+k2;

     while(tot>0)
     {
        ll x=pq.top();
        if(x==0)//we can do +1 THEN -1 (SO effect now insteead of doing -1 as due to it error increases)
        {
            tot=tot%2;
        }

        if(tot<=0) break;
          x--;
          pq.pop();
          pq.push(x);
          tot--;
        
        debug(x)

     }
     ll ans=0;
     while(pq.size()>0)
     {
       //debug(pq.top(),pq.size())
        ll x=pq.top();
        ans+=(x*x);
        pq.pop();
     }
     op(ans)

     //2 nd appraoch binary serch--> founded the value at which most elemnt(which is larger) are equal

    //  in(n)in(k1)in(k2)
    // vl a,b;
    // vin(a,n);
    // vin(b,n);
    
    // vl dif;
    
    // loop(n)
    // {
    //     dif.pb(abs(a[i]-b[i]));
    // }
    // sort(all(dif));
    
    // ll lo=0,hi=dif[n-1],mid;

    // ll tot=k1+k2;

    //  auto check=[&](ll mid)
    //  {
    //     ll c=tot;
    //     loop(n)
    //     {
            
    //         if(dif[i]>mid)
    //         {
    //             c-=(dif[i]-mid);

    //         }
    //     }
    //     return c>=0;


    //  };

    //  while(hi-lo>1)
    //  {
    //     mid=(hi+lo)/2;

    //     if(check(mid))
    //     {
    //         hi=mid;

    //     }
    //     else{
    //         lo=mid+1;
    //     }
    //  }
    //  ll ans=0;
    //  if(check(lo))
    //  {
    //     ans=lo;
    //  }
    //  else{
    //     ans=hi;
    //  }

    //made the larger element(>ans) equal to ans using (k1+k2)
    //smaller elemet contribute less to error
     
    // ll left=tot;

    //  loop(n)
    //  {
    //     if(dif[i]>ans)
    //     {
    //         left-=(dif[i]-ans);
    //         dif[i]=ans;
    //     }
    //  }
     
    //  if(ans==0)
    //  {
    //     if(left&1){
    //         op(1);
    //         return;
    //     }
    //     else
    //     {
    //         op(0);
    //         return;
    //     }
    //  }
    //  else
    //  {
    //     sort(all(dif),greater<ll>());
        
    //     ll c=0;
        
    //     loop(dif.size())//removing only one as if we are able to remove -1 form all then binary search would have done it
    //     {
    //         if(left>0)
    //         {
    //             ll y=dif[i]-1;
    //             c+=(y*y);
    //             left--;
    //         }
    //         else{
    //             c+=(dif[i]*dif[i]);
    //         }
    //     }
    //     op(c);
    //  }

    
    
}



int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
  FastIO();
  
  
  //debug(tc)
    themagician();
  
  
return 0;
}
