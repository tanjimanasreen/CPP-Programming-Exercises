#include<iostream>
using namespace std;

int main()
{
    int a[10];

    cout<<"Enter Your Numbers: "<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }


    int l;

    for(int i=0;i<10;i++)
        {
            if(a[i]>a[0])
            {
                a[0]=a[i];

                l=i;
            }
        }
        cout<<"Your Biggest number is:"<<a[0]<<" "<<"And its index is :"<<l<<endl;

    return 0;
}
