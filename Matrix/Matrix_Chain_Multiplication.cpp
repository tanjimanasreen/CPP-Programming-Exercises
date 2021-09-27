#include<iostream>
using namespace std;

int m[7][7];
int s[7][7];


void mcm(int d[],int n)
{
    int i,j,k,len,q;


   for(i=1;i<=n;i++)
   {
       m[i][i]=0;
   }


   for(len=2;len<=n;len++)
   {
       for(i=1;i<=n-len+1;i++)
       {
           j=i+len-1;
           m[i][j]=1000000;

           for(k=i;k<=j-1;k++)
           {
               q=m[i][k]+m[k+1][j]+(d[i-1]*d[k]*d[j]);

               if(q<m[i][j])
               {
                   m[i][j]=q;
                   s[i][j]=k;
               }
           }

       }
   }

   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)
       {
           cout<<m[i][j]<<" ";
       }
       cout<<"\n";
   }


   cout<<"\n";

   for(int i=0;i<=n;i++)
   {
       for(int j=0;j<=n;j++)
       {
           cout<<s[i][j]<<" ";
       }

       cout<<"\n";
   }
}
int main()
{
    int d[]={30,35,15,5,10,20,25};
    int n=sizeof(d)/sizeof(d[0])-1;

    /*for(int i=0;i<=n;i++)
    {
        cout<<d[i]<<" ";
    */

    mcm(d,n);
    return 0;
}


