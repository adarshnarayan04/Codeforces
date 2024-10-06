#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debugging.h"
#else
# define debug(x...)
#endif


signed main() {
int n;
cin>>n;
vector<int> v(n);
vector<int> onstate;
for(int i=0;i<n;i++)
{
    cin>>v[i];
    if(v[i]==1)
    onstate.push_back(i);
}
debug(onstate);
int m;
cin>>m;
vector<long long> dist(m);
for(auto &x:dist)
{
    cin>>x;
}
vector<long long> cost(n,INT_MAX);
debug(dist);
for (int i = 0; i < onstate.size(); i++)
{
    int ind=onstate[i]+1;
    int ind1=onstate[i]-1;
    while(ind<n)
    {
        debug(ind);
        if(v[ind]==0)
        {
            cost[ind]=min(cost[ind],dist[ind]-dist[ind-1]);
            debug(cost[ind]);
            debug(dist[ind]);
            debug(dist[ind-1]);
            debug(dist[ind]-dist[ind-1]);
        }
        else{
            break;
        }
        ind++;

    }
    while(ind1>=0)
    {
        if(v[ind1]==0)
        {
            cost[ind1]=min(cost[ind1],dist[ind1+1]-dist[ind1]);
        }
        else{
            break;
        }
        ind1--;
    }
}
debug(cost);
long long  ans=0;
for(int i=0;i<n;i++)
{
    if(v[i]==0)
    {
        ans+=cost[i];
    }
}
cout<<ans<<endl;

  
return 0;
}

