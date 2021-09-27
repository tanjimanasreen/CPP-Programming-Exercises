#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a[]={1,2,3,5};
   int sum=0;
   int n;
   cin>>n;
   int range=(1<<n);
   for(int x=0;x<range;x++)
   {
     for(int i=0;i<n;i++)
     {
       int bit=(x)&(1<<i);

       if(bit>0)
       {
           sum=sum+a[i];
           cout<<1;
       }else
       {
           cout<<0;
       }

      }
      cout<<": "<<sum;
      cout<<"\n";
      sum=0;
   }


}
