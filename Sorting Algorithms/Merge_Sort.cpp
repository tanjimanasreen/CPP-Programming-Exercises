#include <iostream>
#include<cstdlib>
using namespace std;


void merget(int a[],int low,int mid,int high)
{
	int n=low;
	int narr[high];
	int i=low,j=mid+1;


	while(i<=mid&&j<=high)
	{

		if(a[i]<=a[j])
		{
			narr[n]=a[i];
			i++;

		}else
		{
			narr[n]=a[j];
			j++;

		}

		n++;
	}


	if(i>mid&&j<=high)
	{
		for(int k=j;k<=high;k++)
		{
			narr[n]=a[k];
			n++;
		}
	}else if(i<=mid&&j>high)
	{
		for(int k=i;k<=mid;k++)
		{
			narr[n]=a[k];
			n++;
		}
	}

	for(int k=low;k<=high;k++)
	{
		a[k]=narr[k];
	}
}
void mergesort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);

		merget(a,low,mid,high);
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

    mergesort(a,0,num-1);

    cout<<"Sorted List"<<"\n";

    for(int i=0;i<num;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<"\n";


    return 0;
}
