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
//Always think to solve problem by Mathematically (also prove it mathematically) first , then other approach
    int n;
    cin>>n;
    string s;
    cin>>s;
    int q;cin>>q;
    int plus=0,minus=0;
    for(int i=0;i<n;i++){
        if(s[i]=='+') plus++;
        else minus++;
    }
    while(q--)
    {
        vector<int> v(2);
        cin>>v[0]>>v[1];
        sort(v.begin(),v.end());
        int dif=v[1]-v[0];
        if(dif==0){
            if(plus==minus) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            continue;
        }
        vector<int> intial(2);
        intial[0]=v[0]*plus;
        intial[1]=v[0]*minus;
        if(intial[0]%dif!=intial[1]%dif){
            NO;
        }
        else{
            int gap=abs(intial[1]-intial[0]);
            if(gap==0){
                YES;
                continue;
            }
            debug(gap)
            int cnt;
            if(intial[1]>intial[0]) cnt=plus;
            else cnt=minus;
            int start=min(intial[0],intial[1]);
            int target=max(intial[0],intial[1]);
            if(start+cnt*dif>=target){
                YES;
            }
            else{
                NO;
            }
        }

    }
    
    
}



signed main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
  FastIO();
  

  //debug(tc)
    themagician();
  
  
return 0;
}

