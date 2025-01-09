#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;
    int source, target;
    cin >> source >> target;
    
    vector<bool> cursed(N, false);
    for(int i = 0; i < N; i++){
        int c;
        cin >> c;
        cursed[i] = (c == 1);
    }
    
    
    if(cursed[source] || cursed[target]){
        cout << -1 << "\n";
        return 0;
    }

    vector<vector<int>> adj(N);
    for(int i = 0; i < M; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    
    vector<int> dist(N, -1);
    queue<int>q;
    dist[source] = 0;
    q.push(source);
    
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        if(curr == target){
            cout << dist[curr] << "\n";
            return 0;
        }
        for(int nxt : adj[curr]){
            if(!cursed[nxt] && dist[nxt] == -1){
                dist[nxt] = dist[curr] + 1;
                q.push(nxt);
            }
        }
    }
    
    cout << -1 << "\n";
    return 0;
}