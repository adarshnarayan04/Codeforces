
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define popcount(x)     __builtin_popcountll(x)

#define w(t)            ll testcase; cin>>testcase; for (ll tc = 1; tc <= testcase; ++tc)
#define v(x) for(int i = 0; i < n; ++i){int x;cin>>x;v.pb(x);}
#define vm(x) for(int i = 0; i < n; ++i){int x;cin>>x;v.pb(x);m.pb(x);}
#define op(var) cout<<var<<"\n";
#define pb push_back
#define sz(x) (int) (x).size()
#define fi first
#define se second
#define mp make_pair
#define fl(i,a,n) for(ll i=a;i<n;i++)
#define all(x) (x).begin(), (x).end()
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define eps 1e-8;

typedef pair<ll, ll> pll;
typedef pair<char, ll> pcl;
typedef pair<string, string> pss;
typedef vector<ll> vi;
typedef vector<vi> vvl;
typedef vector<pll> vpll;
typedef vector<pcl> vpcl;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef map<ll, ll> mll;
typedef unordered_map<string, int> msl;
typedef map<char, ll> mcl;
#define loop(n) for (int(i) = 0; i < (n); i++)
#define loop1(n) for (int(i) = 1; i <= n; i++)
#define loops(i, n) for (int(i) = 1; i <= n; i++)

#define magica(v, n) {for(int I = 0; I < n < ; I++) cout << (v)[I] << " ";}
#define magicv(v)     for (auto &x : v) {cout << x << " ";}
#define magicvp(v)     for (auto &x : v) {cout << x.fi << " "<<x.se<<endl;}
#define nline cout <<"\n"
#define nl "\n"

// debug code 


#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(long double t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

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


int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
bool cmp(int c, int d) { return c > d; }

                         
const unsigned int M = 1e9+7;
const int N=1e5 +10;
const int INF=1e9 +10;
// const ll INF 0x3f3f3f3f3f3f3f3fLL;
double acc = 1e-6;

void themagician(){
ll n,m,c=0,y;
cin>>n>>m;
string s[n];
vector<pair<ll, ll>> ma;
loop(n)
{
	cin>>s[i];
}
for (int i = 0; i <=n-9; ++i)
{

	for (int j = 0; j <=m-9; ++j)
	{c=0;

        debug(i)debug(j)
        debug(s[i][j])
		if (s[i][j]!='#'||s[i][j+1]!='#'||s[i][j+2]!='#')
		{c++;

	      debug("YES1")
			continue;
		}
		
		if (s[i+1][j]!='#'||s[i+1][j+1]!='#'||s[i+1][j+2]!='#')
		{c++;debug("YES2")
			continue;
		}
		if (s[i+1][j]!='#'||s[i+1][j+1]!='#'||s[i+1][j+2]!='#')
		{c++;debug("YES3")
			continue;
		}
		if (s[i+8][j+6]!='#'||s[i+8][j+7]!='#'||s[i+8][j+8]!='#')
		{c++;debug("YES4")
			continue;
		}
		if (s[i+7][j+6]!='#'||s[i+7][j+7]!='#'||s[i+7][j+8]!='#')
		{c++;debug("YES5")
			continue;
		}
		if (s[i+6][j+6]!='#'||s[i+6][j+7]!='#'||s[i+6][j+8]!='#')
		{c++;debug("YES6")
			continue;
		}
		if (s[i][j+3]!='.'||s[i+1][j+3]!='.'||s[i+2][j+3]!='.')
		{c++;debug("YES7")
			continue;
		}
		if (s[i+3][j]!='.'||s[i+3][j+1]!='.'||s[i+3][j+2]!='.')
		{c++;debug("YES8")
			continue;
		}
		if (s[i+3][j+3]!='.')
		{c++;debug("YES9")
			continue;
		}
		if (s[i+5][j+6]!='.'||s[i+5][j+7]!='.'||s[i+5][j+8]!='.')
		{c++;debug("YES10")
			continue;
		}
		if (s[i+6][j+5]!='.'||s[i+7][j+5]!='.'||s[i+8][j+5]!='.')
		{c++;debug("YES11")
			continue;
		}
		if (s[i+5][j+5]!='.')
		{c++;debug("YES12")
			continue;
		}
		
		debug(c)
	    ma.pb({i+1,j+1});
			
	}
	
}
sort(all(ma));
magicvp(ma)
debug(ma);
debug(n)
debug(m)

}



int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
  optimize();
  

    themagician();

  
return 0;
}

