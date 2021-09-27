#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node *prev;
};

node *head;
node *tail;

node *getnode(int x)
{
    node *newnode=new node();
    newnode->data=x;
    newnode->next=NULL;
    newnode->prev=NULL;

    return newnode;
}

void inserthead(int x)
{
    node *newnode=getnode(x);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        newnode->prev=NULL;
        newnode->next=NULL;
    }
    else{
        head->prev=newnode;
        newnode->next=head;
        head=newnode;
        newnode->prev=NULL;

    }
}
void inserttail(int x)
{
    node *temp;
    node *newnode=getnode(x);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        newnode->next=NULL;
        newnode->prev=NULL;
    }else{
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
        newnode->next=NULL;
        tail=newnode;

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
    newnode->prev=temp;
    newnode->next=temp1;
    temp1->prev=newnode;

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
        head->next=temp1;
        head=temp1;
        temp1->prev=NULL;
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
        temp2->prev=temp;
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
        tail=temp1;
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

void back_traverse()
{
    node *temp;
    if(head==NULL)
    {
        cout<<"Empty list"<<endl;
    }else
    {
        temp=tail;
        while(temp!=NULL)
        {
            cout<<"Reverse Node data->"<<temp->data<<endl;
            temp=temp->prev;
        }
    }
}

int main()
{
    cout<<"~~AFTER INSERTING AT HEAD~~"<<endl;
    inserthead(3);
    inserthead(2);
    inserthead(1);
    traverse();
    cout<<"~~AFTER INSERTING AT TAIL~~"<<endl;
    inserttail(4);
    inserttail(5);
    inserttail(6);
    traverse();
    cout<<"~~AFTER INSERTING AT ANY POSITION~~"<<endl;
    anyposition(4,11);
    traverse();
    cout<<"~~AFTER DELETING FROM ANY POSITION~~"<<endl;
    deletenode(5);
    traverse();
    cout<<"~~AFTER DELETING FROM  HEAD~~"<<endl;
    deletehead();
    traverse();
    cout<<"~~AFTER DELETING FROM TAIL~~"<<endl;
    deletetail();
    traverse();
    cout<<"~~LIST PRINTING OUT FRONTWARDS AFTER INSERTION & DELETION~~"<<endl;
    traverse();
    cout<<"~~LIST PRINTING OUT BACKWARDS ATER INSERTION & DELETION~~"<<endl;
    back_traverse();
    cout<<"~~RESULT OF SEARCHING DATA~~"<<endl;
    searchnode(3);

    return 0;
}
