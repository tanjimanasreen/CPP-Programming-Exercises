#include<iostream>
using namespace std;

int main()
{
    int a[10];
    int *p;
    p=a;

    cout<<"Enter array values: "<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }

    cout<<"Your array: "<<endl;
    for(int j=0;j<10;j++)
    {
        cout<<*(p+j)<<" ";

    }

    return 0;
}
