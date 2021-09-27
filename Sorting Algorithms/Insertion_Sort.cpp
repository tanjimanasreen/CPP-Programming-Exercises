#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int range,num,x,key,i;
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

    for(int j=1;j<num;j++)
    {
       key=a[j];
       i=j-1;

       while(i>=0&&a[i]>key)
       {
           /*int temp=a[i+1];
           a[i+1]=a[i];
           a[i]=temp;*/

           //swap(a[i+1],a[i]);
            a[i+1]=a[i];
           i--;

       }
    a[i+1]=key;
    }

    cout<<"Random Number Sorted"<<"\n";
    for(int i=0;i<num;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<"\n";

    return 0;
}

