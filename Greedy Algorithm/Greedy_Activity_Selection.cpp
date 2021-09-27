#include<iostream>
using namespace std;

void activitySelection(int s[],int f[],int n)
{
    int i=0,c=0,count=0;
    int lA[n];
    lA[c]=1;

    for(int j=1;j<n;j++)
    {
        if(s[j]>=f[i])
        {
            if(s[j]==f[i])
            {
                count=1;
            }
            c++;
            lA[c]=j+1;
            i=j;
        }
    }

    if(count!=0)
    {
        cout<<"Selected Activities are not unique"<<"\n";
    }else
    {
        cout<<"Unique selected activities"<<"\n";
    }
    for(int k=0;k<=c;k++)
    {
        cout<<lA[k]<<" ";
    }

}

int main()
{
    int s[]= {1,3,0,5,3,5,6,8,8,2,12};
    int f[]= {4,5,6,7,8,9,10,11,12,13,14};

    int n=sizeof(s)/sizeof(s[0]);

    activitySelection(s,f,n);
    return 0;
}
