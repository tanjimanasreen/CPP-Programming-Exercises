#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of your array: "<<endl;
    cin>>n;
    int a[n];
    int k;
    int e;
    cout<<"How many elements do you want? "<<endl;
    cin>>e;
    if(e>n)
    {
        cout<<"Invalid Number of Elements"<<endl;

    }else{
        cout<<"Insert array elements: "<<endl;
        for(int i=0;i<e;i++)
        {
            cin>>a[i];
        }

    if(e>=n)
    {
        cout<<"Overflow of elements!! Can not push"<<endl;

    }else{

        cout<<"At which position you want to insert: "<<endl;
        cin>>k;

        for(int i=e-1;i>=k-1;i--)
        {
            a[i+1]=a[i];

        }

            int ie;
            cout<<"Type the element which you want to  insert: "<<endl;
            cin>>ie;
            a[k-1]=ie;
            e=e+1;

        for(int i=0;i<e;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    }
    return 0;
}
