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

//for unordered map(to not blowup) use unordered_map<ll,ll,custom_hash>
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

typedef pair<ll, ll> pll;
typedef pair<char, ll> pcl;
typedef pair<string, string> pss;
typedef vector<pll> vpll;
typedef vector<pcl> vpcl;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef map<ll, ll> mll;
typedef unordered_map<string, int> msl;
typedef map<char, ll> mcl;
#define loop(n) for (int i = 0; i < n; i++)// use loop(n-1) if not want loop to act on last number
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
#define debug2(x, y)cerr<<#x<<"="<<x<<", "<<#y<<"="<<y<<endl;
#define debug3(x, y, z)cerr<<#x<<"=" <<x<<", "<<#y<<"="<<y<<", \
"<<#z<<"="<<z<<endl;
#define debug4(a, b, c, d)cerr<<#a<<"="<<a<<", "<<#b<<"="<<b<<", \
"<<#c<<"="<<c<<", "<<#d<<"="<<d<<" "<<endl;
#define debug5(a, b, c, d, e)cerr<<#a<<"="<<a<<", "<<#b<<"="<<b<<", \
"<<#c<<"="<<c<<", "<<#d<<"="<<d<<", "<<#e<< "="<<e<<endl;
#define debug6(a, b, c, d, e, f)cerr<<#a<<"="<<a<<", "<<#b<<"="<<b<<", "<<#c<<"="<< c<<", \
"<<#d<<"="<<d<<", "<<#e<< "="<<e<<", "<<#f<<"="<<f<<endl;
#else
#define debug(x)
#define debug2(x, y)
#define debug3(x, y, z)
#define debug4(a, b, c, d)
#define debug5(a, b, c, d, e)
#define debug6(a, b, c, d, e, f)
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
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowof2(int n){return (n && !(n&(n-1)));}
bool isPerfectSq(ll n){ll root=sqrtl(n);return root*root==n;}

                         
const unsigned int M = 1e9+7;
const int N=1e5+10;
const ll INF=1e18 +10;
// const ll INF 0x3f3f3f3f3f3f3f3fLL;
double acc = 1e-6;
const ld pi = 3.14159265358979323846;

/*----------------------code start here -----------------------------*/
//https://www.youtube.com/watch?v=kaVRTpvJOwA for soln

//other way so soln by jiangly same appraoch(just he use map<ll,ll> he store back in map)
void themagician(){
in(n)
vl v;
vin(v,n);
map<ll, vector<ll>>m;
loop(n)
{
    m[v[i]].pb(i);
}
ll ans=0;
for(auto &x:m)
{
    vl q=x.se;
    ll pos=q[0]+1;//1 based indexing(so that help in counting)
    loop1(q.size())//as pos is already taken we want next number so strt from 1
    {
        //we are counting in how any subsequences this pair(pos and q[i]) can be present
        //as if they are present ia any subsequence then increaser the count 
        //so ans calculte the number of sequence in which this pair can be present
        
        //we move back form previous and take element that can be present in subsequence and move forward from q[i] to take element that can be present in subsequence
        //so no elemnt in back(is 1->pos=pos) and in front is (q[i] to n =n-q[i])

        //so number of sequenc it can be present is (pos)*(n-q[i])


        ans+=((pos)*(n-q[i]));//pos represent nunmber previous of it and n-q[i] after it
        pos+=q[i]+1;//so that it calclautes for previous cases also  (1+2)*(n-3)  calcaultes for 1 ans 2 index(1 based ) at single time
        // ex 1211 m[1]  0 2 3
        //so we first check 0 2 all sussequneces
        // then 2 3 all sequences but 0 3 is left

        //therefore we use pos+= not pos=

        // pos+= act as prefix sum(wehn we calculate of (2,3) pair we also calculate for (0,3) pair) -->o based
        // initally pos=0+1(1 based ) we calcuare (0,2) 
        //now for (2,3) pos+=(2+1) (1 based to indxing) now pos=4=(3+1)
        // 4*(n-3)
        //(3+1)*(n-3)
        // 1*(n-3)+3*(n-3) 
        //so now it calcauted for (0,3) pair also 

        //thus prefix sum reduce the time complexity

        }
}
op(ans)
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
