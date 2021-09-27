#include<iostream>
using namespace std;

struct tree
{
    int data;
    tree *left;
    tree *right;
};
tree *root;

tree *create(int x) {
    tree *newnode = new tree();
    newnode->data = x;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

tree *inserttree( tree *root,int x)
{
    tree *newnode=create(x);
    if(root==NULL)
    {
        root=newnode;
    }else if(x<root->data)
    {
        root->left=inserttree(root->left,x);
    }else
    {
        root->right=inserttree(root->right,x);
    }

    return root;
}

void dfs(tree *root)
{
    if(root!=NULL)
    {
        dfs(root->left);
        cout<<root->data<<" ";
        dfs(root->right);
    }
}
int main()
{
    root=inserttree(root,50);
    root=inserttree(root,60);
    root=inserttree(root,45);
    root=inserttree(root,70);
    root=inserttree(root,30);
    root=inserttree(root,20);
    root=inserttree(root,10);
    root=inserttree(root,90);
    root=inserttree(root,65);
    root=inserttree(root,35);
    root=inserttree(root,55);
    cout<<"Depth First Search"<<endl;
    dfs(root);

return 0;
}
