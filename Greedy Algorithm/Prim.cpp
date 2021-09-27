#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int>p;
vector<p>V[100];

struct node
{
	int u,cost;
	node(int u1,int cost1)
	{
		u=u1;
		cost=cost1;
	}

};

bool operator<(node A,node B)
{
	return A.cost>B.cost;
}

priority_queue<node>pq;

int cost[10];
int taken[10];

void prim(int n,int s)
{
	int inf=1000000000;

	for(int i=1;i<=n;i++)
	{
		cost[i]=inf;
		taken[i]=0;
	}

	cost[s]=0;
	pq.push(node(s,0));
	int ans=0;

	while(!pq.empty())
	{
		node x=pq.top();
		pq.pop();

		if(taken[x.u])
		{
			continue;
		}

		taken[x.u]=1;

		ans=ans+x.cost;

		for(p v : V[x.u])
		{
			if(taken[v.first])
			continue;
			if(v.second<cost[v.first])
			{
				pq.push(node(v.first,v.second));

				cost[v.first]=v.second;

			}
		}

	}

	cout<<"Total cost: "<<ans<<"\n";
}
int main() {

	int n,s,e;
	cout<<"Nodes and Edges Number"<<"\n";
	cin>>n>>e;
	cout<<"Starting node"<<"\n";
	cin>>s;


	for(int i=0;i<e;i++)
	{
		cout<<"Enter adjacent vertex and its weight"<<"\n";
		int u,v,w;
		cin>>u>>v>>w;
		V[u].push_back(make_pair(v,w));
		V[v].push_back(make_pair(u,w));

	}

	prim(n,s);

	return 0;
}
