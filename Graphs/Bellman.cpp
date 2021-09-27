#include<iostream>
#include<vector>
using namespace std;

struct Edge
{
	int u,v,w;
};

vector<Edge>Ev;
int dist[1000];
int pred[1000];

void Bellman(int s,int n,int e)
{
	int INF=10000000,count=0,c=0;

	for(int i=1;i<=n;i++)
	{
		dist[i]=INF;
		pred[i]=0;
	}

	dist[s]=0;

	for(int i=1;i<n;i++)
	{
		for(int j=0;j<e;j++)
		{
				int x=Ev[j].u;
				int y=Ev[j].v;
				int z=Ev[j].w;

				int cost=dist[x]+z;

			if(cost<dist[y])
			{
				dist[y]=cost;
				pred[y]=x;

			}
		}

	}

	for(int i=0;i<e;i++)
	{
		int x=Ev[i].u;
		int y=Ev[i].v;
		int z=Ev[i].w;

		if(dist[y]>dist[x]+z)
		{
			count++;

		}
	}

	if(count!=0)
	{
		cout<<"The Graph contains negative cycle"<<"\n";
	}else
	{
		cout<<"The Graph does not contain negative cycle"<<"\n";

	}

	cout<<"Distance from the source node "<<s<<" to other nodes"<<"\n";
	cout<<"Node       Distance"<<"\n";
	 for(int i=1;i<=n;i++)
	 {
	 	cout<<i<<"          "<<dist[i]<<"\n";
	 }

}

int main()
{
	int n,e,s;
	cout<<"Enter the number of Nodes and Edges"<<"\n";
	cin>>n>>e;

	cout<<"Enter the Starting Node"<<"\n";
	cin>>s;

	cout<<"Enter Edges and their Weights"<<"\n";



	for(int i=0;i<e;i++)
	{
		Edge obj;
		int a,b,c;
		cin>>a>>b>>c;
		obj.u=a;
		obj.v=b;
		obj.w=c;

		Ev.push_back(obj);
	}


	Bellman(s,n,e);

	return 0;
}

//Another
#include<iostream>
#include<vector>
using namespace std;

struct Edge
{
	int u,v,w;
};

vector<Edge>Ev;
int dist[1000];
int pred[1000];

void Bellman(int s,int n)
{
	int INF=10000000,count=0,c=0;

	for(int i=1;i<=n;i++)
	{
		dist[i]=INF;
		pred[i]=0;
	}

	dist[s]=0;

	for(int i=1;i<n;i++)
	{
		for(Edge x : Ev)
		{

			if(dist[x.v]>dist[x.u]+x.w)
			{
				dist[x.v]=dist[x.u]+x.w;
				pred[x.v]=x.u;

			}
		}
	}


	for(Edge x : Ev)
	{
		if(dist[x.v]>dist[x.u]+x.w)
		{
			count++;
		}
	}

	if(count!=0)
	{
		cout<<"The Graph contains negative cycle"<<"\n";
	}else
	{
		cout<<"The Graph does not contain negative cycle"<<"\n";

	}

	cout<<"Distance from the source node "<<s<<" to other nodes"<<"\n";
	cout<<"Node       Distance"<<"\n";
	 for(int i=1;i<=n;i++)
	 {
	 	cout<<i<<"            "<<dist[i]<<"\n";
	 }

}

int main()
{
	int n,e,s;
	cout<<"Enter the number of Nodes and Edges"<<"\n";
	cin>>n>>e;

	cout<<"Enter the Starting Node"<<"\n";
	cin>>s;

	cout<<"Enter Edges and their Weights"<<"\n";

	Edge obj;

	for(int i=1;i<=e;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		obj.u=a;
		obj.v=b;
		obj.w=c;

		Ev.push_back(obj);
	}

	Bellman(s,n);

	return 0;
}

