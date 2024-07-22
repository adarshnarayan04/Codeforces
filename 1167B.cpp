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
//#define FastIO() ios_base::sync_with_stdio(false);cin.tie(NULL);
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
    ll x;
    vl v={0,4,8,15,16,23,42};
    ll sum=accumulate(all(v),0);
    map<ll, pair<ll, ll>>m;
    loop1(v.size())
    {
        fl(j,i+1,v.size())
        {
            m[v[i]*v[j]]={i,j};
        }
    }
    debug(m)
    vl ans(6+1);
    cout<<"? 1 2"<<endl;
    //fflush(stdout);
    cin>>x;
    ans[1]=v[m[x].fi];
    ans[2]=v[m[x].se];
    cout<<"? 3 4"<<endl;
    //fflush(stdout);
    cin>>x;
    ans[3]=v[m[x].fi];
    ans[4]=v[m[x].se];
    cout<<"? 5 5"<<endl;
    //fflush(stdout);
    cin>>x;
    x=sqrt(x);
    ans[5]=x;
    debug(ans)

    ll sum1=accumulate(all(ans),0);
    ans[6]=sum-sum1;

    cout<<"? 2 3"<<endl;
    //fflush(stdout);
    cin>>x;
    if(x!=ans[2]*ans[3])
    {
        ll a=v[m[x].fi];
        ll b=v[m[x].se];
        if(ans[2]!=a&&ans[2]!=b)
        {
            swap(ans[1],ans[2]);

        }
        if(ans[3]!=a&&ans[3]!=b)
        {
            swap(ans[3],ans[4]);

        }

    }
    cout<<"! ";
    loop1(7)
    {
        cout<<ans[i]<<" ";
    }
    //fflush(stdout);

}



int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
 
  
  
  //debug(tc)
    themagician();
  
  
return 0;
}
