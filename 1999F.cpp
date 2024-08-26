#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debuggingh.h"
#else
# define debug(x...)
#endif

#define int long long
#define ll long long

#define w(t)   int testcase; cin>>testcase; for (int tc = 1; tc <= testcase; ++tc)
#define vin(v,n) for(int i = 0; i < n; ++i){int x;cin>>x;v.push_back(x);}
//vin(vector name,number of times you want to take  input)
#define vm(n) for(int i = 0; i < n; ++i){int x;cin>>x;v.push_back(x);m.push_back(x);}
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
const int N=2e5+10;
const int INF=1e18 +10;
double acc = 1e-6;
const long double pi = 3.14159265358979323846;

/*----------------------code start here -----------------------------*/
int binpow(int x, int y)
{
    int z = 1;
    while (y)
    {
        if (y % 2 == 1)
        {
            z =z*x;
            z%=M;
        }
        x *=x;
        x%=M;
        y /= 2;
    }
    return z;
}
 
int inv(int x)
{
    return binpow(x, M - 2);
}
vector<int> fac(N,1),invfac(N,1);

void themagician(){
    in(n)in(k)
    
    vector<ll> v(2);
    
    for (int i = 0; i < n; ++i)
    {
    	in(x)
    	v[x]++;
    }
    auto  ncr=[&](int n,int r)
    {
    	if(r>n) return 0LL;
    	
    	int num=fac[n];
    	int den=invfac[n-r]*invfac[r];
    	den%=M;
    	int ans=fac[n]*den;
    	ans%=M;
 
    	
    	return ans;
    };
    int ans=0;
    debug(v)
    int zero=k/2;
    
    for(int i=0;i<=min(zero,v[0]);i++)
    {
        int way=ncr(v[1],k-i)*ncr(v[0],i);
        ans+=way;
        ans%=M;
    }
    op(ans)
    
//     1
// 6 5

// 1 1 1 1 0 1
    // if(v[1]>=k)
    // {
    // 	ans+=ncr(v[1],k);
    // }
    
    // ans%=M;
    //  debug(ans)
    // int one=k/2+1;
    // int zero=k/2;
    // debug(one,zero)
    // debug(ncr(v[1],one))
    // int way=0;
    // if(k!=1)
    // way=ncr(v[1],one)*ncr(v[0],zero);
    // way%=M;
    // ans+=way;
    // op(ans)
    
    
}



signed main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
  FastIO();
  for(int i=1;i<N;i++)
  {
  	fac[i]=fac[i-1]*i;
  	fac[i]%=M;
  }
  for(int i=0;i<N;i++)
  {
    invfac[i]=inv(fac[i]);
  }

  w(t){
  //debug(tc)
    themagician();
  }
  
return 0;
}

