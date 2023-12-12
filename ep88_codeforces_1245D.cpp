#include<bits/stdc++.h>
using namespace std;
const int N=2e3+10;// no of cities is 2000

int parent[N];
int sizee[N];
void make(int v)
{
	parent[v]=v;//as indepent node(or tree with only one node--> which will be root)
	sizee[v]=1;
}
int find(int v)
{
	if(v==parent[v]) return v;// parent of root is root
	// return find(parent[v]);
	return parent[v]=find(parent[v]);// path compression( assigning elemnts which come in path its parent to root)
}
void Union(int a,int b)//union is reserved word
{
	a=find(a);//point to root of a
	b=find(b);
	// if a==b means already they are in same tree (no need of union)
	if(a!=b)
	{
		if(sizee[a]<sizee[b])// a is small size now a will be added to b(union by size)
		{
			swap(a,b);// now a become larger
		}
		parent[b]=a;// b is added to a
		sizee[a]+=sizee[b];
	}
	
}
int main()
{ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

int n;
cin>>n;
vector<pair<int,int>>cities(n+1);// as indexing from 1


for (int i = 1; i <= n; ++i)
{
	cin>>cities[i].first>>cities[i].second;
}
vector<int>c(n+1),k(n+1);
for (int i = 1; i <=n; ++i)
{
	cin>>c[i];
}
for (int i = 1; i <=n; ++i)
{
	cin>>k[i];
}
vector<pair<long long, pair<int,int>>> edges;// there will n square edges
//as we get all edges_means edges between any two nodes

for (int i = 1; i <=n; ++i)
{
	edges.push_back({c[i],{0,i}});//adding power staion edges(Ci connected 0)
}
for(int i=1;i<=n;i++)//genertaing all edges;
{
	for (int j = i+1; j <=n; ++j)
	{
		int dist=abs(cities[i].first-cities[j].first)+ abs(cities[i].second-cities[j].second);
		long long cost=(k[i]+k[j])*1LL*dist;
		edges.push_back({cost,{i,j}});
	}
}// if added (u,v) no need to add (v,u) as both are same edge(will increase vector size)
sort(edges.begin(),edges.end());
for (int i = 0; i <=n; ++i)//start from 0 as 0 is also node here
{
	make(i);// making at vertices in dsu
}
long long total_cost=0;
vector<int>power_stations;
vector<pair<int,int>>connections;
for(auto &edge:edges)
{
	long long wt=edge.first;
	int u=edge.second.first;
	int v=edge.second.second;
	if(find(u)==find(v)) continue;//means form a cycle (as part of a same tree-->if we connect any two nodes of tree will form a cycle)
	Union(u,v);//as now they are connected(as we also connect them in  mst(kruskal tree))
	total_cost+=wt;
	if(u==0||v==0)//means cinnected to 0 so will be power station
	{
		power_stations.push_back(max(u,v));//max(u,v) to get that non zero value
	}
	else
	{
		connections.push_back({u,v});
	}
	
	
}
cout<<total_cost<<endl;
cout<<power_stations.size()<<endl;
for(int &station:power_stations)
{
	cout<<station<<" ";
}
cout<<endl;
cout<<connections.size()<<endl;
for(auto &connection:connections)
{
	cout<<connection.first<<" "<<connection.second<<endl;
}

	return 0;
}