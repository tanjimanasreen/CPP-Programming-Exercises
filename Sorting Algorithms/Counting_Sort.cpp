#include<iostream>
using namespace std;

void countingSort(int a[],int b[],int k,int n)
{
    int c[k];
    for(int i=1;i<=k;i++)
    {
        c[i]=0;
    }


    for(int i=0;i<n;i++)
    {
        c[a[i]]++;
    }

    for(int i=1;i<=k;i++)
    {
        if(c[i]!=0)
        {
            int count=c[i];
            while(count--)
            {
                cout<<i<<" ";
            }


        }

    }

}

int main()
{
    int a[]={4,1,3,4,3,4,5,7,7,6};
    int n=sizeof(a)/sizeof(a[0]);
    int b[n+1];
    int k=a[0];

    for(int i=0;i<n;i++)
    {
        if(k<=a[i])
        {
            k=a[i];
        }
    }

    //cout<<k;
    countingSort(a,b,k,n);

    return 0;
}
