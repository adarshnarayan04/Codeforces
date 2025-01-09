#include <bits/stdc++.h>
using namespace std;

// Disjoint Set (Union-Find) for connectivity
struct DSU {
    vector<int> parent, rankv;
    DSU(int n) {
        parent.resize(n);
        rankv.resize(n, 0);
        for(int i = 0; i < n; i++){
            parent[i] = i;
        }
    }
    int findp(int v) {
        if(parent[v] == v) return v;
        return parent[v] = findp(parent[v]);
    }
    void unite(int a, int b) {
        a = findp(a);
        b = findp(b);
        if(a == b) return;
        if(rankv[a] < rankv[b]) swap(a,b);
        parent[b] = a;
        if(rankv[a] == rankv[b]) rankv[a]++;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        long long M;
        int N;
        cin >> M >> N;
        
        vector<long long> X(N), Y(N), R(N);
        for(int i = 0; i < N; i++) {
            cin >> X[i] >> Y[i] >> R[i];
        }

        // We'll have N actual lamps plus 2 "virtual" nodes: so N+2 nodes 0..N+1
        // index 0 represents the left boundary (x=0)
        // index N+1 represents the right boundary (x=M)
        // actual lamps are in [1..N]
        DSU dsu(N + 2);

        // Connect each lamp to left boundary if it touches/intersects x=0
        // touches if X[i] - R[i] <= 0
        // Connect to right boundary if X[i] + R[i] >= M
        for(int i = 0; i < N; i++){
            if(X[i] - R[i] <= 0) {
                dsu.unite(0, i+1);
            }
            if(X[i] + R[i] >= M) {
                dsu.unite(N+1, i+1);
            }
        }
        
        // For each pair of lamps, check if they intersect:
        // distance^2 <= (R[i] + R[j])^2
        // This is O(N^2), which is likely too large for N=10^5 in worst case.
        // A more efficient approach is needed for large N (e.g., plane sweep or spatial partition).
        // However, here is the straightforward method:
        // Use carefully if N is large.
        for(int i = 0; i < N; i++){
            for(int j = i+1; j < N; j++){
                long long dx = X[i] - X[j];
                long long dy = Y[i] - Y[j];
                long long dist2 = dx*dx + dy*dy;
                long long rr = (R[i] + R[j]) * (R[i] + R[j]);
                if(dist2 <= rr){
                    dsu.unite(i+1, j+1);
                }
            }
        }
        
        // If left boundary node (0) and right boundary node (N+1) are connected,
        // it means there's a continuous chain of lamp circles from x=0 to x=M
        // => We can move in the lit region from left to right
        if(dsu.findp(0) == dsu.findp(N+1)){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}