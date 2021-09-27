#include<iostream>
using namespace std;

int minimum(int x, int y)
{
    if(x>y)
    {
        return y;
    }else
    return x;
}
int main()
{
    int w[4][4];
    cout<<"Enter The Matrix"<<endl;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>w[i][j];
        }
    }

    cout<<"Inputed Matrix"<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<w[i][j]<<" ";
        }
        cout<<endl;
    }

    int q[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {

            if(w[i][j]==0)
            {
                q[i][j]=1000;
            }else
            {
                q[i][j]=w[i][j];
            }
        }
    }

    for(int k=0;k<4;k++)
    {
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                q[i][j]=minimum(q[i][j],(q[i][k]+q[k][j]));
            }
        }
    }
    cout<<"Shortage Path Matrix"<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
              cout<<q[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;

}
