#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define popcount(x)     __builtin_popcountll(x)

#define w(t)            ll testcase; cin>>testcase; for (ll tc = 1; tc <= testcase; ++tc)
#define vin(v,n) for(int i = 0; i < n; ++i){int x;cin>>x;v.pb(x);}
//vin(vector name,number of times you want to take  input)
#define vm(n) for(int i = 0; i < n; ++i){int x;cin>>x;v.pb(x);m.pb(x);}
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
#define loop(n) for (int(i) = 0; i < (n); i++)// use loop(n-1) if not want loop to act on last number
#define loopj(n) for (int(j) = 0; j < (n); j++)
#define loop1(n) for (int(i) = 1; i < n; i++)
#define loop1n(n) for (int(i) = 1; i <= n; i++)//or use loop1(n-1)
#define loopn1(n) for (int(i) = n-1; i>=0; i--)
#define loops(i, n) for (int(i) = 1; i < n; i++)

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

//to print stl template
//cout<<variable_name to print that variable(set,vector,map)

template <typename T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;
template <typename T>
using max_heap = priority_queue<T>;
 
template <typename T>
ostream &operator<<(ostream &os, min_heap<T> H)
{
    while (!H.empty())
    {
        os << H.top() << " ";
        H.pop();
    }
    os << endl;
    return os << "";
}
 
template <typename T>
ostream &operator<<(ostream &os, max_heap<T> H)
{
    while (!H.empty())
    {
        os << H.top() << " ";
        H.pop();
    }
    os << endl;
    return os << "";
}
 
template <typename F, typename S>
ostream &operator<<(ostream &os, pair<F, S> P)
{
    return os << P.first << " " << P.second;
}
 
template <typename T>
ostream &operator<<(ostream &os, vector<T> arr)
{
    for (int i = 0; i < (int)arr.size(); i++)
    {
        os << arr[i] << " ";
    }
    return os << "";
}
 
template <typename T>
ostream &operator<<(ostream &os, vector<vector<T>> matrix)
{
    os << endl;
    for (int i = 0; i < (int)matrix.size(); i++)
    {
        for (int j = 0; j < (int)matrix[i].size(); j++)
        {
            os << matrix[i][j] << " ";
        }
        os << endl;
    }
    return os << "";
}
 
template <typename T>
ostream &operator<<(ostream &os, set<T> S)
{
    for (auto s : S)
    {
        os << s << " ";
    }
    return os << "";
}
 
template <typename T>
ostream &operator<<(ostream &os, multiset<T> S)
{
    for (auto s : S)
    {
        os << s << " ";
    }
    return os << "";
}
 
template <typename F, typename S>
ostream &operator<<(ostream &os, map<F, S> M)
{
    os << endl;
    for (auto m : M)
    {
        os << m << endl;
    }
    return os << "";
}
 
template <typename F, typename S>
ostream &operator<<(ostream &os, multimap<F, S> M)
{
    os << endl;
    for (auto m : M)
    {
        os << m << endl;
    }
    return os << "";
}

//end

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
bool cmp(int c, int d) { return c > d; }

                         
const unsigned int M = 1e9+7;
const int N=510;
const int INF=1e9 +10;
// const ll INF 0x3f3f3f3f3f3f3f3fLL;
double acc = 1e-6;

/*----------------------code start here -----------------------------*/
int dist[N][N];//N=510

void themagician(){
	loop(N)
	{
		loopj(N)
		{
			if(i==j) dist[i][j]=0;//as  it is not given in question for k=0 we add it
			else
				dist[i][j]=INF;
		}
		
	}
	int n,m;
	cin>>n>>m;
	loop(m)
	{
		int x,y,wt;
		cin>>x>>y>>wt;
		dist[x][y]=wt;// means distance from x to y
		// it is k=0 as here we go x to y with no vertices
	}
	// k maxiumm value is n(no. of vertices)--> means can go through any vertices
	for (int k = 1; k <=n; ++k)// we are changing level form 1 to n(no. of vertices)
		//means adding verices for shortest path
	{
		for (int i = 1; i <=n; ++i)
		{
			for (int j = 1; j <=n; ++j)
			{
				if(dist[i][k]!=INF&&dist[k][j]!=INF)//we use it for generally neagtive weight graph
					//as if dist[i][j]=INF(intilally) dist[i][k]=-10,dist[k][i]=INF
					// so by min new dist[i][j]=INF-10; which shows path exsist as less than INF
					// but actually path do not exsist
					//but in case of postive weight , no problem as min will be INF
				//as if anyone is INF means path not exist, so need to check
				{
					dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);//computing all distances from i to j using k
				// dist[i][k]+dist[k][j]---> will give dist of i to j by going through k
				// we use min : as if for k level ,passing through k node distance become less than k-1 then we dist become that
				// else we use the k-1 path(mean without passing through k node) as give shortest path after including k
				//let for k=1 dist
					//dist[i][1]ans dist[1][j] will be calculated by k=0
				}
				  
				
			}
		}
	}
	for (int i = 1; i <=n; ++i)
		{
			for (int j = 1; j <=n; ++j)
			{
				if(dist[i][j]==INF)cout<<'I'<<" ";//means no path exsist
				else cout<<dist[i][j]<<" ";
				
			}
			nline;
		}

}



int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
  FastIO();
  
    themagician();
  
  
return 0;
}

