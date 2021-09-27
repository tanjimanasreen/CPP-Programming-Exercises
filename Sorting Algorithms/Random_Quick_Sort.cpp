
#include<iostream>
#include<cstdlib>
using namespace std;

int pivot(int a[],int p,int r)
{
    int x=a[r];
    int i=p-1;

    for(int j=p;j<r;j++)
    {
        if(a[j]<=x)
        {
            i++;
            swap(a[i],a[j]);
        }
    }

    swap(a[i+1],a[r]);

    return i+1;
}

int random(int p,int r)
{
   int ran;

    ran=p+rand()%(r-p+1);
    return ran;

}
int random_part(int a[],int p,int r)
{
    int i=random(p,r);
    swap(a[i],a[r]);

    return pivot(a,p,r);
}

void quick(int a[],int p,int r)
{
    int q;
    if(p<r)
    {

    q=random_part(a,p,r);

    quick(a,p,q-1);
    quick(a,q+1,r);
    }

}
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

    quick(a,0,num-1);

    cout<<"Sorted List"<<"\n";

    for(int i=0;i<num;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<"\n";

 return 0;
}
