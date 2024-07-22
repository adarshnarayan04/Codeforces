#include<bits/stdc++.h>
//cannot detect negative cyclce like bellman ford (as here q will never become empty due to negative loop)-->give tle


//but in bellman ford we do N-1 iterations(fixed) ,so chance of infinite loop

//can be used for negaitive weight as reprocessing is allowed(as used level condition)

//appprox same concept as bellman ford
vector<int> shortestdistancequeue(int n, int m, int src, vector<vector<int>> &edges) {
       vector<pair<int,int>>g[n];
        for(auto &x:edges)
        {
            g[x[0]-1].push_back({x[1]-1,x[2]});
        }
    queue<int>q;
    q.push(src-1);
   // cout<<src<<endl;;
    vector<int>dist(n,1e8);
    dist[src-1]=0;
   // cout<<dist[0]<<endl;
    while(!q.empty())
    {
        int cur_v=q.front();
        q.pop();
        for(auto &child:g[cur_v])
        {
            int child_v=child.first;
            int wt=child.second;
            if(dist[cur_v]+wt<dist[child_v])
            {
                // if(wt<0)//not working for some case
                // {
                //     if(dist[child_v]!=1e8&&dist[cur_v]<=dist[child_v])//means neagative cycle
                //         //dist[child_v]==1e8 means child visited first time using negative weight(means cycle not exsis)--->life cycle check using dfs
                        
                        
                //         //means child is abovr parent (as more distance or level from source) (so checked by removing wt from intail cond)
                //         // dist[child_v]!=1e8 means child is already visited and child is below parent(by distance)
                        
                //         //and dist of child is getting upadated  as this work dist[cur_v]+wt<dist[child_v] --->wt of cycle is negative
                //         //if distance has not getted upadated means not form a negative cycle
                //     {
                //         return {-1};
                //     }
                }
                q.push(child_v);
                dist[child_v]=dist[cur_v]+wt;
            }
        }
    }
    vector<int> ans;
    ans.push_back(0);
    for(int i=0;i<n+1;i++)
    {
        ans.push_back(dist[i]);
    }
    return ans;
   
}