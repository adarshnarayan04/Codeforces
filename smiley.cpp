
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
#define nl cout <<"\n"
#define nline "\n"

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
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {cerr<<"{";_print(i.fi); cerr << " ";_print(i.se);cerr<<"}";cerr<<" ";} cerr << "]";}


int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
bool cmp(int c, int d) { return c > d; }

                         
const unsigned int M = 1e9+7;
const int N=1e5 +10;
const int INF=1e9 +10;
// const ll INF 0x3f3f3f3f3f3f3f3fLL;
double acc = 1e-6;

void themagician(){
ll n,sum=0,ss=0,c=0;
cin>>n;
string s;
cin>>s;
for (int i = 0; i < n; )
{c=0;

	if (s[i]==':')
	{
		for (int j = i+1; j < n; ++j)
		{
			if (s[j]=='(')
			{
				break;
			}

			
			if (s[j]==')')
			{
				c=1;
				continue;
			}
		
			if (c==1&&s[j]==':')
			{
				ss++;
				i=j-1;
				break;
			}
			if (c==0&&s[j]==':')
			{
			
				i=j-1;
				break;
			}
			
			
		}
		
	}
	i++;
	
}
cout<<ss;
nl;

}



int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
  optimize();
  
  w(t){
    themagician();
  }
  
return 0;
}

