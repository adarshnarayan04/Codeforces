#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debugging.h"
#else
# define debug(x...)
#endif

#define int long long
#define ll long long

#define w(t)   int testcase; cin>>testcase; for (int tc = 1; tc <= testcase; ++tc)
#define vin(v,n) for(int i = 0; i < n; ++i){int x;cin>>x;v.push_back(x);}
//vin(vector name,number of times you want to take  input)
#define in(var) int var;cin>>var;
#define op(var) cout<<var<<"\n";
#define FastIO() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define eps 1e-8;

#define nline cout <<"\n"
#define nl "\n"


int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
                         
const unsigned int M = 1e9+7;
const int N=1e5+10;
const int INF=1e18 +10;
double acc = 1e-6;
const long double pi = 3.14159265358979323846;

/*----------------------code start here -----------------------------*/

void themagician(){
    in(n)
    vector<int> v;
    vin(v,n);
    in(m)
    for (int i = 0; i < m; i++)
    {
        string s;
        cin>>s;
        map<int,char> a;
        map<char,int> b;
        if(n!=s.size())
        {
            NO;
            continue;
        }
        bool flag=0;
        for (int j = 0; j < s.size(); j++)
        {
            if(a.find(v[j])==a.end())
            {
                if(b.find(s[j])!=b.end())
                {debug("Yes")
                    NO;
                    flag=1;
                    break;
                }
                a[v[j]]=s[j];
                b[s[j]]=v[j];

            }
            else{
                if(a[v[j]]==s[j]&&b[s[j]]==v[j])
                {
                    
                }
                else{
                    debug(j,v[j],s[j])
                    debug(a[v[j]])
                    debug(b[s[j]])
                    NO;
                    flag=1;
                    break;
                }
            }
            
        }
        if(!flag)
            {
                YES;
            }
        

    }
    

    
}



signed main() {
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

