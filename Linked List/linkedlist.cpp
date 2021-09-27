#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

node *head;

node *getnode(int x)
{
    node *newnode=new node();
    newnode->data=x;
    newnode->next=NULL;

    return newnode;
}

void inserthead(int x)
{
    node *newnode=getnode(x);
    newnode->next=head;
    head=newnode;
}

void inserttail(int x)
{
    node *temp;
    node *newnode=getnode(x);
    if(head==NULL)
    {
        head=newnode;
    }else{
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}

void anyposition(int p,int x)
{
    node *temp=head;
    node *temp1=head;
    node *newnode=getnode(x);
    for(int i=1;i<p-1;i++)
    {
        temp=temp->next;
    }
    for(int i=1;i<p;i++)
    {
        temp1=temp1->next;
    }
    temp->next=newnode;
    newnode->next=temp1;

}
void deletehead()
{
    node *temp;
    node *temp1;
    if(head==NULL)
    {
        cout<<"Empty LIst"<<endl;
    }else
    {
        temp=head;
        temp1=head;
        for(int i=1;i<2;i++)
        {
            temp1=temp1->next;
        }
        head=temp1;
        delete temp;
    }
}


void deletenode(int p)
{
    node *temp=head;
    node *temp1=head;
    node *temp2=head;
    if(head==NULL)
    {
        cout<<"Empty List"<<endl;
    }else{
        for(int i=1;i<p-1;i++)
        {
            temp=temp->next;
        }
        for(int i=1;i<p;i++)
        {
            temp1=temp1->next;
        }
         for(int i=1;i<p+1;i++)
        {
            temp2=temp2->next;
        }
        temp->next=temp2;
        delete temp1;

    }
}

void deletetail()
{
    node *temp=head;
    node *temp1;

    if(head==NULL)
    {
        cout<<"Empty List"<<endl;
    }else{

        while(temp->next!=NULL)
        {
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=NULL;
        delete temp;

    }
}

void searchnode(int x)
{
    node *temp=head;
    int countnum=0;

    while(temp!=NULL)
    {
        countnum++;
        if(temp->data==x)
        {
            cout<<"Found "<<x<<" At "<<countnum<<endl;

        }
        temp=temp->next;
    }
}
void traverse()
{
    node *temp;
    if(head==NULL)
    {
        cout<<"Empty List"<<endl;
    }else{
        temp=head;
        while(temp!=NULL)
        {
            cout<<"Node data->"<<temp->data<<endl;;
            temp=temp->next;
        }

    }
}

int main()
{
    inserthead(3);
    inserthead(2);
    inserthead(1);
    inserttail(4);
    inserttail(5);
    inserttail(6);
    anyposition(4,11);
    deletenode(5);
    deletehead();
    deletetail();
    traverse();
    searchnode(11);

    return 0;
}
