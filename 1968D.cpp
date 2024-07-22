#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debuggingh.h"
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
    ll n,k,x,y;
    cin>>n>>k>>x>>y;
    vl p,a;
    p.pb(0);//1 based
    a.pb(0);

    ll maxi=0,ma=0;
    loop1(n+1)
    {
       in(w) 
       p.pb(w);

    }
    vin(a,n);
    ma=*max_element(all(a));
    debug(ma)
    set<ll> s;
    loop1(n+1)
    {
        if(a[i]==ma)
        {
            s.insert(i);
        }
    }
    debug(s)

    // debug(p)
    // debug(a)
    // debug(m)debug(maxi)

    ll ans1=0,ans2=0,c1=0,c2=0;
    ll o=min(n,k);//if while(k--) therer may be case of loop in p let max be outside of loop ,so it will never reach max
    //like we run it max(n,k) so if n times max not found (means max is outside of the loop)
    ll i=0;

    while(o--)
    {
        
        if(s.find(x)!=s.end()||p[x]==x)
        {
            ans1=max(ans1,c1+(k-i)*a[x]);//as o-- done
            break;

        }
        else{
            ans1=max(ans1,c1+(k-i)*a[x]);
            c1+=a[x];
            x=p[x];
            i++;
        }
    }
    o=min(n,k);
    i=0;

    
    while(o--)
    {
        if(s.find(y)!=s.end()||p[y]==y)
        {
            ans2=max(ans2,c2+(k-i)*a[y]);//as o-- done
            break;

        }
        else{
            ans2=max(ans2,c2+(k-i)*a[y]);
            c2+=a[y];
            y=p[y];
            i++;
        }
    }
    
    //debug(ans1,ans2)
    if(ans1==ans2)
    {
        op("Draw")
    }
    else if(ans1>ans2)
    {
        op("Bodya")
    }
    else
    {
        op("Sasha")
    }

}



int main() {
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
