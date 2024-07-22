#include<bits/stdc++.h>
#define ll long long
using namespace std;
void Sieve(ll n,vector<ll>&primes){
    vector<bool>prime(n+1, true);
    for(ll p = 2; p*p <= n; p++){
        if(!prime[p]) continue;
        for(ll i = p*p; i <= n; i += p){
            prime[i] = false;
        }
    }
    for(ll i = 2; i <= n; i++){
        if(prime[i]){
            primes.push_back(i);
        }
    }
}
bool isPrime(ll n, vector<ll>& primes){
    auto it = find(primes.begin(), primes.end(), n);
    return it != primes.end();
}
void dfs(ll s, ll p, ll mod, vector<vector<ll>> &adj, vector<vector<ll>> &dp, vector<ll> &primes){
    for(ll i = 0; i < 25; i++){
        dp[s][i] = 1;
    }
    for(auto u: adj[s]){
        if(u != p){
            dfs(u, s, mod, adj, dp, primes);
            for(ll i = 0; i < 25; i++){
                ll pos = 0;
                for(ll j = 0; j < 25; j++){
                    if(!isPrime(primes[i] + primes[j], primes)){
                        pos = (pos + dp[u][j]) % mod;
                    }
                }
                dp[s][i] = (dp[s][i] * pos) % mod;
            }
        }
    }
}
ll solve(ll n, vector<vector<ll>> &e){
    ll mod = 1000000007;
    vector<ll> primes;
    Sieve(200, primes);
    vector<vector<ll>> dp(n+1, vector<ll>(25, 0));
    vector<vector<ll>> adj(n);
    for(ll i = 0; i < n-1; i++){
        adj[e[i][0]].push_back(e[i][1]);
        adj[e[i][1]].push_back(e[i][0]);
    }
    dfs(0, -1, mod, adj, dp, primes);
    ll ans = 0;
    for(ll i = 0; i < 25; i++){
        ans = (ans + dp[0][i]) % mod;
    }
    return ans;
}
signed main()
{
    ll n; cin>>n;
    vector<vector<ll>>e(n,vector<ll>(2));
    for(ll i=0;i<n-1;i++) cin>>e[i][0]>>e[i][1];
    cout<<solve(n,e)<<endl;
}