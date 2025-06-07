#include <bits/stdc++.h>
using namespace std;

long long calc(long long x, int y) {
    long long res = abs(x - y);
    
    for (int i = 0; i <= 30; i++) {
        long long p = 1LL << i;
        res = min(res, 1 + abs(p - y));
    }
    
    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        
        vector<long long> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        vector<vector<long long>> dp(n, vector<long long>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                dp[i][j] = calc(v[i], j + 1);
            }
        }
        
        vector<bool> vis(n, 0);
        long long ans = 0;
        
        for (int j = 1; j <= n; j++) {
            int idx = -1;
            long long mn = 1e18;
            
            for (int i = 0; i < n; i++) {
                if (!vis[i] && dp[i][j - 1] < mn) {
                    mn = dp[i][j - 1];
                    idx = i;
                }
            }
            
            vis[idx] = 1;
            ans += mn;
        }
        
        cout << (ans <= k ? "YES" : "NO") << "\n";
    }
    
    return 0;
}


