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
    // in(n)

    // auto lessthanr=[&](ll r){
        
    //     ll ans=0;

    //     loop(r+1)
    //     {
    //         ll j=sqrt(r*r-i*i);//i*i+j*j=r*r
            
    //         ans+=(j);//ex j=5  1 2 3 4 5 will satisfy 
    //         // j=0 not included as we include i=0 aand multiply by 4 as 4 quad (so j=0 also include)
    //         if(i*i+j*j==r*r)//as we find j by using this equation( equal case can happen (not happen in some case as j is int so reduce tha sqrt)) if j is double it always happen
    //         {
    //             ans--;// at j=5 so remove 5 (but  1 2 3 4 satify)

    //         }
    //     }
    //     return ans*4;//as 4 quadrants

    // };
    // debug(lessthanr(2))
    // cout<<lessthanr(n+1)-lessthanr(n)<<nl;//thus we get also equal to r case also

//2nd method (by me)

    in(n)
    
    ll r=n;
    
    ll ans=0;

    //solving the equation ( for every i we find possible value of j which statify thw equation)
    
    loop(r+1)
    {
        debug(i)
        ll y=sqrt((r)*(r)-i*i);//min value of y
        debug(y)
        if(y==0)//as i=0 included as X4 as 4 quad so j=0 also included
        {
            y++;
        }
        if(i*i+y*y<r*r)//converted to int so loss may occur
        {
            y++;
        }

        ll lo=y,hi=r+1,mid;

        while(hi-lo>1)// t t t t f f f  lastr true find
        {
            mid=(hi+lo)/2;

            if(i*i+mid*mid>=r*r&&i*i+mid*mid<(r+1)*(r+1))
            {
                lo=mid;
            }
            else{
                hi=mid-1;
            }
        }
        if(i*i+hi*hi>=r*r&&i*i+hi*hi<(r+1)*(r+1))
        {
            ans+=(hi-y+1);
        }
        else if(i*i+lo*lo>=r*r&&i*i+lo*lo<(r+1)*(r+1))
        {
            ans+=(lo-y+1);
        }
        
        // fl(j,y,r+2)-->tle
        // {
        //     if(i*i+j*j>=r*r&&i*i+j*j<(r+1)*(r+1))
        //     {
        //         ans++;
        //     }
        // }
        // debug(ans)
    }
    op(ans*4)
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
