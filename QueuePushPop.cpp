#include<iostream>
using namespace std;

int front=-1;
int rear=-1;
int q[5];

void Empty()
{
    if(front==-1&&rear==-1)
    {
        cout<<"Queue is Empty..Insert Item"<<endl;
    }

    front=0;
    rear=0;
}

void Insert(int a)
{
    q[rear]=a;
    rear++;
}

void Deletion(int p)
{
    q[p]=0;
}

int main()
{
    Empty();
    Insert(6);
    Insert(7);
    Insert(8);

    cout<<"Queue after insertion"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<q[i]<<" ";
    }
    cout<<endl;

    Deletion(0);

    cout<<"Queue after deletion"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<q[i]<<" ";
    }


    return 0;
}
