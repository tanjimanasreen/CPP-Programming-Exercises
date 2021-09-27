#include<iostream>
using namespace std;

int main()
{
    int s;
    cout<<"Enter the size of your array: "<<endl;
    cin>>s;

    int a[s];
    cout<<"Enter elements of your array: "<<endl;
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }

    cout<<"Your array before deletion: "<<endl;
    for(int i=0;i<s;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;
    int d;
    cout<<"At which position you want to delete: "<<endl;
    cin>>d;

    for(int i=d-1;i<s;i++)
    {
        a[i]=a[i+1];
    }

    cout<<"Your array after deletion: "<<endl;
    for(int i=0;i<s-1;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
