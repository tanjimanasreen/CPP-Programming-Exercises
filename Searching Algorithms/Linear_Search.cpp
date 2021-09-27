#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={1,3,5,2,78};

    int value,count=0;;
    int s=sizeof(a)/sizeof(a[0]);

    cin>>value;

    for(int i=0;i<s;i++)
    {
        if(value==a[i])
        {
           count++;
        }
    }

    if(count>0)
    {
        cout<<"Found"<<"\n";
    }else
    {
        cout<<"Not Found"<<"\n";
    }

    return 0;
}
