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
const int N=1e5+10;
const int INF=1e18 +10;
double acc = 1e-6;
const long double pi = 3.14159265358979323846;

/*----------------------code start here -----------------------------*/

void themagician(){
    auto check=[&](int a,int b)
    {
    	cout<<'?'<<" "<<a<<" "<<b<<endl;
    	int pro;
    	cin>>pro;

    	return pro;
    };
    
    int lo=2,hi=999,x,y;
    int answer=999;
    while(hi>=lo)
    {
    	int dif=(hi-lo)/3;
    	x=lo+dif;
    	y=hi-dif;
    	int ans=check(x,y);
    	if(ans==(x*(y+1))){//to check mid where it lie
        
    		lo=x+1;
    		hi=y-1;
    		answer=y;      
    	}
    	else if(ans==((x+1)*(y+1)))
    	{
    		hi=x-1;
    		answer=x;
    	}
    	else
    	{
    		lo=y+1;
    	}

    	
    }
    cout<<'!'<<" "<<answer<<endl;
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

