#include<iostream>
#include<queue>
using namespace std;

int ti=0;
int d[10];
int f[10];
int p[128];
string color[100];
int g[128][128];
queue<int>q;
queue<int>l;


void bfs(int s,int n)
{
    int level=1;

    q.push(s);
    color[s]="grey";

    cout<<"Nodes on level 0"<<"\n"<<s+1<<"\n";

    while(!q.empty())
    {
        int count=0;
        int u=q.front();
        q.pop();

        for(int i=0;i<n;i++)
        {
            if(g[u][i]==1)
            {
                if(color[i]=="white")
                {
                    q.push(i);
                    color[i]="grey";
                    d[i]=d[u]+1;
                    p[i]=u;
                    l.push(i);

                    count=1;
                }
            }
        }


        if(count!=0)
        {
            cout<<"Nodes on level "<<level<<"\n";
            level++;
        }

        while(!l.empty())
        {
            cout<<l.front()+1<<" ";
            l.pop();
        }

        cout<<"\n";
        color[u]="black";

    }



}
int main()
{
    int i,j,e,n;

    cout<<"Enter number of edges"<<"\n";
    cin>>e;
    cout<<"Enter number of nodes"<<"\n";
    cin>>n;

    for(int k=0;k<e;k++)
    {
        cin>>i>>j;
        color[k]="white";
        g[i-1][j-1]=1;
        g[j-1][i-1]=1;
    }

    bfs(0,n);

    return 0;


}

