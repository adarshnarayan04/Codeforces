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
    string s;
    cin>>s;

    //solution 1

    // bool flag=0;
    // if(s.size()==1)
    // {
    //   if(s[0]=='U')
    //   {
    //     YES;
    //   }
    //   else{
    //     NO;
    //   }
    //   return;
    // }
    // while(s.size()>2)
    // {
    //   debug(s)
    //   ll ind=0;
    //   ll ma=-1;
      
    //   mll m;
    //   loop(s.size())
    //   {
    //     ll x=s.size();
    //     if(s[i]=='U')
    //     {
    //       ll c=0;
    //       ll nex=(i+1)%x;
    //       ll prev=(x+i-1)%x;
    //       if(s[nex]=='U')
    //       {
    //         c++;
    //       }
    //       if(s[prev]=='U')
    //       {
    //         c++;
    //       }
    //       if(c>ma)
    //       {
    //         ma=c;
    //         ind=i;
    //       }
    //     }

    //   }
      
    //   if(ma==-1)
    //   {
    //     flag=1;
    //     break;
        
    //   }
    //   ll x=s.size();
    //   ll nex=(ind+1)%x;
    //   ll prev=(x+ind-1)%x;

    //   if(s[nex]=='U')
    //   {
    //     s[nex]='D';
    //   }
    //   else{
    //     s[nex]='U';
    //   }
    //   if(s[prev]=='U')
    //   {
    //     s[prev]='D';
    //   }
    //   else{
    //     s[prev]='U';
    //   }
    //   s.erase(s.begin()+ind);

    // }
    // debug(s)
    // if(flag)
    // {
    //   ll ans=n-s.size();
    //   if(ans&1)
    //   {
    //     YES;
    //   }
    //   else
    //   {
    //     NO;
    //   }
    //   return;
    // }
    // ll u=0;

    // loop(s.size())
    // {
    //   if(s[i]=='U')
    //   {
    //     u++;
    //   }
    // }
    // if(u==2)
    // {
    //   ll ans=n;
      
    //   if(ans&1)
    //   {
    //     YES;
    //   }
    //   else
    //   {
    //     NO;
    //   }      

    // }
    // if(u==1)
    // {
    //   ll ans=n-1;
      
    //   if(ans&1)
    //   {
    //     YES;
    //   }
    //   else
    //   {
    //     NO;
    //   }      
    // }
    // if(u==0)
    // {
    //   ll ans=n-2;
      
    //   if(ans&1)
    //   {
    //     YES;
    //   }
    //   else
    //   {
    //     NO;
    //   }      
    // }

//as every time u decrease it decrease by 1 or 3 UUU -> DD by 3 and DUD->UU incraese by 1 DUU->UD decraese by 1 UU->U decrease by 1
// so its parity remain same during game
    ll u=0;
    loop(n)
    {
      if(s[i]=='U')
      {
        u++;
      }
    }
    if(u&1)
    {
      YES;
    }
    else{
      NO;
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
