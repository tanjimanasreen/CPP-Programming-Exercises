#include<iostream>
using namespace std;

int main()
{
    int a[10];
    int p=0;

    cout<<"Please enter your numbers: "<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<10;i++)
    {
        if(a[i]<a[0])
        {
            a[0]=a[i];

            p=i;
        }
    }

    cout<<"Smallest Element: "<<a[0]<<" and it is on "<<l<<"th index"<<endl;
}
