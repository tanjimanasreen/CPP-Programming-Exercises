#include<iostream>
using namespace std;

int ti=0;
int d[10];
int f[10];
int p[128];
string color[10];
int g[128][128];

void DFS_visit(int u,int n)
{
    color[u]="grey";
    ti++;

    d[u]=ti;

    for(int i=0;i<n;i++)
    {
        if(g[u][i]==1)
        {
              if(color[i]=="white")
                {
                    p[i]=u;
                    DFS_visit(i,n);
                }
        }

    }

    color[u]="Black";
    ti++;
    f[u]=ti;
}

void DFS(int n)
{
   for(int i=0;i<n;i++)
   {
       color[i]="white";
   }
   //time=0;


   for(int i=0;i<n;i++)
   {
       if(color[i]=="white")
       {
           DFS_visit(i,n);
       }
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

        g[i-1][j-1]=1;
        g[j-1][i-1]=1;
    }

    DFS(n);

    for(int i=0;i<n;i++)
    {
        cout<<color[i]<<"\n";
    }

    for(int i=0;i<n;i++)
    {
        cout<<"Node no: "<<i+1<<" ";
        cout<<"Dis Time: "<<d[i]<<" "<<"Fin Time: "<<f[i]<<"\n";
    }

}
