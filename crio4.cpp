#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    vector<pair<int,int>> dirs;
    
    bool isValid(int x, int y, int n, int m) {
        return x >= 0 && x < n && y >= 0 && y < m;
    }
    
public:
    Solution() {
        dirs = {{0,1}, {1,0}, {-1,0}, {0,-1}};
    }
    
    int virusOutbreak(int n, int m, vector<vector<char>>& grid, int E, int S, int D) {
        vector<vector<int>> infectionTime(n, vector<int>(m, INT_MAX));
        vector<vector<int>> vaccineTime(n, vector<int>(m, INT_MAX));
        
        queue<pair<int,int>> virusQ;
        queue<pair<int,int>> vaccineQ;
        
        // Initialize queues with starting positions
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == '-') {
                    virusQ.push({i,j});
                    infectionTime[i][j] = 0;
                }
                else if(grid[i][j] == '+') {
                    vaccineQ.push({i,j});
                    vaccineTime[i][j] = 0;
                }
            }
        }
        
        // Process virus spread
        while(!virusQ.empty()) {
            pair<int,int> curr = virusQ.front();
            int x = curr.first;
            int y = curr.second;
            virusQ.pop();
            
            for(int i = 0; i < dirs.size(); i++) {
                int dx = dirs[i].first;
                int dy = dirs[i].second;
                int nx = x + dx;
                int ny = y + dy;
                
                if(isValid(nx, ny, n, m) && infectionTime[nx][ny] == INT_MAX) {
                    infectionTime[nx][ny] = infectionTime[x][y] + S;
                    virusQ.push({nx,ny});
                }
            }
        }
        
        // Process vaccine spread
        while(!vaccineQ.empty()) {
            pair<int,int> curr = vaccineQ.front();
            int x = curr.first;
            int y = curr.second;
            vaccineQ.pop();
            
            for(int i = 0; i < dirs.size(); i++) {
                int dx = dirs[i].first;
                int dy = dirs[i].second;
                int nx = x + dx;
                int ny = y + dy;
                
                if(isValid(nx, ny, n, m) && vaccineTime[nx][ny] == INT_MAX) {
                    vaccineTime[nx][ny] = vaccineTime[x][y] + 1;
                    vaccineQ.push({nx,ny});
                }
            }
        }
        
        // Count infected cities after D days
        int infected = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                // City is infected within D days AND
                // (vaccine hasn't reached OR hasn't taken effect yet)
                if(infectionTime[i][j] <= D && 
                   (vaccineTime[i][j] == INT_MAX || vaccineTime[i][j] + E > D)) {
                    infected++;
                }
            }
        }
        
        return infected;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n, m;
        cin >> n >> m;
        
        vector<vector<char>> grid(n, vector<char>(m));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        
        int E, S, D;
        cin >> E >> S >> D;
        
        Solution sol;
        cout << sol.virusOutbreak(n, m, grid, E, S, D) << "\n";
    }
    
    return 0;
}