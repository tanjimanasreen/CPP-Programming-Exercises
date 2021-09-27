#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct Node
{
	int p,cost;
	Node(int x,int y)
	{
		p=x;
		cost=y;
	}
};

bool operator<(Node A,Node B)
{
	return A.cost>B.cost;
}

struct Edge
{
	int v,w;
};

vector<Edge>AL[100];
priority_queue<Node>pq;

int dist[100];

void Dijkstra(int n,int s)
{
	int INF=10000000;
	for(int i=1;i<=n;i++)
	{
		dist[i]=INF;
	}

	dist[s]=0;

	pq.push(Node(s,0));

	while(!pq.empty())
	{
		Node u=pq.top();
		pq.pop();

		if(u.cost!=dist[u.p])
		{
			continue;
		}

		for(Edge e : AL[u.p])
		{
			if(dist[e.v]>u.cost+e.w)
			{
				dist[e.v]=u.cost+e.w;
				pq.push(Node(e.v,dist[e.v]));
			}
		}
	}

	cout<<"Distance from the Source node "<<s<<" to other nodes"<<"\n";
	cout<<"Node    Cost"<<"\n";

	for(int i=1;i<=n;i++)
	{
		cout<<i<<"       "<<dist[i]<<"\n";
	}

}

int main()
{
	int n,ed,s;
	cout<<"Enter the number of Nodes and Edges"<<"\n";
	cin>>n>>ed;

	cout<<"Enter the Starting Node"<<"\n";
	cin>>s;

	cout<<"Enter Edges and their Weights"<<"\n";

	for(int i=0;i<ed;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		Edge x;
		x.v=b;
		x.w=c;
		AL[a].push_back(x);
	}

	Dijkstra(n,s);

	return 0;
}
