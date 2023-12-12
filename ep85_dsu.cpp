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

int n,k;
cin>>n>>k;
for (int i = 1; i <=n; ++i)
{
	make(i);
}
while(k--)
{
	int u,v;
	cin>>u>>v;
	Union(u,v);
	
}
int connected_ct=0;
for (int i = 1; i <=k; ++i)
{
	if(find(i)==i) connected_ct++;
}

	return 0;
}