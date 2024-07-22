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
        in(n)
        vl v;
        vin(v,n);
      set<ll> s;
      loop(n)
      {
        s.insert(v[i]);
      }
      v.clear();
      for(auto &x:s)
      {
        v.pb(x);
      }
      debug(v)
      mll m;
      ll start=-1,len=1;
      loop1(v.size()-1)
      {
        
        if(v[i]==v[i-1]+1)
        {
          if(start==-1)
          {
            start=i-1;
          }
          len++;
        }
        else{
          if(start!=-1)
          {
            m[start]=len;
          }
          start=-1;
          len=1;

        }
        debug(len,i)

      }
      if(start!=-1)
      {
        m[start]=len;
      }
      debug(m)

      if(n==1)
      {
        op("Alice");
        return;
      }
      bool alice=1;//means alice has chance

      ll minus=0;

      ll i=0;

      while(i<v.size()-1)
      {

        if(m[i]!=0)
        {
          if((v[i]-minus)==1)
          {
            if(m[i]&1)
            {
              alice^=1;
            }

          }
          i+=m[i];
          minus=v[i-1];

        }
        else{
          if(v[i]==1) alice^=1;;
          minus=v[i];
          i++;

        }
      }
      if(alice)
      {
        op("Alice")
      }
      else{
        op("Bob")
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
