#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Edge
{
	int u,v,w;
};

bool operator<(Edge A,Edge B)
{
	return A.w<B.w;
}

vector<Edge>E;

int p[1000000];

int find(int x)
{
	if(p[x]==x)
	{
		return x;
	}

	return p[x]=find(p[x]);
}

int krushkal(int n)
{
	sort(E.begin(),E.end());

	int s=E.size();
	int ans=0;

	for(int i=1;i<=n;i++)
	{
		p[i]=i;
	}
	cout<<"size"<<s<<"\n";

	for(int i=0;i<s;i++)
	{
	    int a=find(E[i].u);
	    int b=find(E[i].v);
		if(a!=b)
		{
            p[a]=b;
            ans=ans+E[i].w;

        }

	}

	return ans;
}
int main() {

    int n,e;
    cout<<"Enter number of Nodes and Edges"<<"\n";
    cin>>n>>e;

    for (int i=1;i<=e;i++)
    {
        cout<<"Enter Connected Nodes and their weight"<<"\n";
        int u, v, w;
        cin >>u>>v>>w;
        Edge obj;
        obj.u = u;
        obj.v = v;
        obj.w = w;
        E.push_back(obj);
    }

    cout<<"COST : "<<krushkal(n)<<"\n";


return 0;
}
