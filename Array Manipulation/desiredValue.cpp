#include<iostream>
using namespace std;

int main()
{
    int a[10];
    int t;
    int p;
    int c;
    cout<<"Please enter your desired number: "<<endl;
    cin>>t;

    cout<<"Enter values for array: "<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<10;i++)
    {
        if(a[i]==t)
           {
            p=i+1;
            cout<<"Your desired value "<<a[i]<<" is at "<<p<<"th position"<<endl;
            c=1;
        }
    }

    if(c!=1)
    {
        cout<<"Your desired value not found"<<endl;
    }

    return 0;
}
