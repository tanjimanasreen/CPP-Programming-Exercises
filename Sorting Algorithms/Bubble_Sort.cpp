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


    cout<<"Random Number Unsorted: "<<"\n";
    for(int i=0;i<num;i++)
    {
       x=rand()%range+1;
       a[i]=x;
       cout<<a[i]<<" ";

    }

    cout<<"\n";

    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num-1;j++)
        {
           if(a[j]>a[j+1])
           {
               int temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
        }
    }

    cout<<"Random Number Sorted"<<"\n";
    for(int i=0;i<num;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<"\n";

    return 0;
}

