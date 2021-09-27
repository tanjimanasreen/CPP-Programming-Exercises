#include<iostream>
using namespace std;

struct bst
{
    int data;
    bst *left;
    bst *right;
};
bst *root;
int count=0;
bst *create(int x) {
    bst *newnode = new bst();
    newnode->data = x;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

bst *insertbst( bst *root,int x)
{
    bst *newnode=create(x);
    if(root==NULL)
    {
        root=newnode;
    }else if(x<root->data)
    {
        root->left=insertbst(root->left,x);
    }else
    {
        root->right=insertbst(root->right,x);
    }

    return root;
}

bst *searchbst(bst *root,int x)
{
    bst *temp=root;
    while(temp!=NULL)
    {
    if(temp->data==x)
    {
        cout<<"Found "<<temp->data<<endl;
        count++;
    }
    else if(x<temp->data)
    {
        temp->left=searchbst(temp->left,x);
    }
    else if(x>temp->data)
    {
        temp->right=searchbst(temp->right,x);
    }break;
    }
    return temp;
}

void inorder(bst *root)
{
   if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

void preorder(bst *root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(bst *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

int main()
{
    root=insertbst(root,50);
    root=insertbst(root,60);
    root=insertbst(root,45);
    root=insertbst(root,70);
    root=insertbst(root,30);
    root=insertbst(root,20);
    root=insertbst(root,10);
    root=insertbst(root,90);
    root=insertbst(root,65);
    root=insertbst(root,35);
    root=insertbst(root,55);

    cout<<"Inorder Traversal:"<<endl;
    inorder(root);
    cout<<endl;
    cout<<endl;
    cout<<"Preorder Traversal:"<<endl;
    preorder(root);
    cout<<endl;
    cout<<endl;
    cout<<"Postorder Traversal:"<<endl;
    postorder(root);
    cout<<endl;
    cout<<endl;
    cout<<"Search Data:"<<endl;
    searchbst(root,10);
    if(count==0)
    {
      cout<<"No Data Found"<<endl;
    }

    return 0;
}
