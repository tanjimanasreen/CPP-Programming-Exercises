#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int range,num,x;
    cout<<"Enter Range of Random number"<<"\n";
    cin>>range;
    cout<<"Enter how many numbers want to take"<<"\n";
    cin>>num;
    int a[num];


    cout<<"Random Number: "<<"\n";
    for(int i=0;i<num;i++)
    {
       x=rand()%range+1;
       a[i]=x;
       cout<<a[i]<<" ";

    }

    cout<<"\n";

    int Max=a[0];

    for(int i=0;i<num;i++)
    {
        if(a[i]>Max)
        {
            Max=a[i];
        }
    }

    cout<<"Max: "<<Max<<"\n";

    return 0;

}
