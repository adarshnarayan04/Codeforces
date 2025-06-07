#include <bits/stdc++.h>
using namespace std;

struct Portal {
    int start_time, end_time, portal_start, portal_end, time_cost, usage_limit;
};

struct State {
    int time, cost;
    vector<int> usage;
    
    bool operator>(const State& other) const {
        return cost > other.cost;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<Portal> portals(N);
    for(int i = 0; i < N; i++) {
        cin >> portals[i].start_time >> portals[i].end_time 
            >> portals[i].portal_start >> portals[i].portal_end 
            >> portals[i].time_cost >> portals[i].usage_limit;
    }
    
    int S, T;
    cin >> S >> T;
    
    // Use Dijkstra with state = (current_time, usage_vector)
    priority_queue<State, vector<State>, greater<State>> pq;
    map<pair<int, vector<int>>, int> visited;
    
    State start;
    start.time = S;
    start.cost = 0;
    start.usage.resize(N, 0);
    
    pq.push(start);
    
    while(!pq.empty()) {
        State curr = pq.top();
        pq.pop();
        
        if(curr.time == T) {
            cout << curr.cost << "\n";
            return 0;
        }
        
        pair<int, vector<int>> state_key = {curr.time, curr.usage};
        if(visited.count(state_key) && visited[state_key] <= curr.cost) {
            continue;
        }
        visited[state_key] = curr.cost;
        
        // Try each portal
        for(int i = 0; i < N; i++) {
            // Check if portal is operational and not exceeded usage
            if(curr.time >= portals[i].start_time && 
               curr.time <= portals[i].end_time &&
               curr.time == portals[i].portal_start &&
               curr.usage[i] < portals[i].usage_limit) {
                
                State next;
                next.time = portals[i].portal_end;
                next.cost = curr.cost + portals[i].time_cost;
                next.usage = curr.usage;
                next.usage[i]++;
                
                pq.push(next);
            }
        }
    }
    
    cout << -1 << "\n";
    return 0;
}
