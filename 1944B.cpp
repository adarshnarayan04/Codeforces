#include <bits/stdc++.h>
using namespace std;

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

// debug code 

#ifndef ONLINE_JUDGE
#define debug(x...) cerr << #x <<" "; _print(x); cerr << nl;
#else
#define debug(x...) 
#endif

template <typename T1> void _print(T1 t1) { cerr << t1; }
template <typename T1, typename... T2> void _print(T1 t1, T2... t2) { cerr << t1 << ","; _print(t2...); }
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.fi); cerr << ","; _print(p.se); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
/*template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {cerr<<"{";_print(i.fi); cerr << " ";_print(i.se);cerr<<"}";cerr<<" ";} cerr << "]";}*/

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
    ll n,k;
    cin>>n>>k;
    k*=2;
    vl v;
    vin(v,2*n);
    vl a(n+1),b(n+1);
    loop(n)
    {
    	a[v[i]]++;
    }
    loop(n)
    {
    	b[v[i+n]]++;
    }
    debug(a)
    debug(b)
    ll numof2=0;
    vl num2,num21;
    loop(n+1)
    {
    	if(a[i]==2)
    	{
    		numof2++;
    		num2.pb(i);
    	}
    	if(b[i]==2)
    	{
    		num21.pb(i);
    	}
    }
    debug(num2)
    debug(num21)
    ll req=k/2;
    vl x,y;
    if(req<=numof2)
    {
    	k-=(req*2);
    	loop(req)
    	{
    		x.pb(num2[i]);
    		x.pb(num2[i]);
    		y.pb(num21[i]);
    		y.pb(num21[i]);
    	}
    }
    else
    {
    	k-=(numof2*2);
    	 loop(numof2)
    	{
    		x.pb(num2[i]);
    		x.pb(num2[i]);
    		y.pb(num21[i]);
    		y.pb(num21[i]);
    	}
    }
    debug(k)
    debug(x)
    loop1(n+1)
    {
    	if(k==0)break;
    	
    		if(a[i]==b[i]&&a[i]==1)
    		{
    			k--;
    			x.pb(i);
    			y.pb(i);
    		}
    	
    	
    }
    cout<<x<<y;
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

