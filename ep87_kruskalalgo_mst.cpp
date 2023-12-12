#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

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

int n,m;
cin>>n>>m;
vector<pair<int, pair<int,int>>> edges;
for (int i = 0; i < m; ++i)
{
	int wt,x,y;
	cin>>x>>y>>wt;
	edges.push_back({wt,{x,y}});//as we want minimum weight edges so keep wt at first so that if we sort we will get minimum
}

sort(edges.begin(),edges.end());

for (int i = 1; i <=n; ++i)
{
	make(i);// making at vertices in dsu
}
int total_cost=0;
for(auto &edge:edges)
{
	int wt=edge.first;
	int u=edge.second.first;
	int v=edge.second.second;
	if(find(u)==find(v)) continue;//means form a cycle (as part of a same tree-->if we connect any two nodes of tree will form a cycle)
	Union(u,v);//as now they are connected(as we also connect them in  mst(kruskal tree))
	total_cost+=wt;
	cout<<u<<" "<<v<<endl;//will give edges of mst(u,v--> mean u,v is connected by an edge(as we do normally))
	// we can construct an tree using this u,v as do normally
	//as g[u].pb(v) g[v].pb(u) also add weight if you want
}
cout<<total_cost;

	return 0;
}