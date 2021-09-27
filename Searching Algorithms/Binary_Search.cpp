#include <iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;

bool binarySearch(int a[],int target,int size)
{
	int high,low,mid;
	low=1,high=size;

	while(low<=high)
	{
		mid=abs(high+low/2);

		if(a[mid]==target)
		{
			return true;

		}else if(a[mid]>target)
		{
			high=mid-1;
		}else
		{
			low=mid+1;
		}

	}

	return false;
}

int main() {
    int range,n,target,i=0;
    cout<<"Enter Range and Number of Elements:"<<"\n";
    cin>>range;
    cin>>n;

    int array[n];

    for(int i=0;i<n;i++)
    {
        int x=rand()%range+1;
        array[i]=x;
    }

    sort(array,array+n);

    cout<<"Sorted list"<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<array[i];
        if(i<n-1)
        {
            cout<<",";
        }
    }

    cout<<"\n";

    cout<<"Enter desired value"<<"\n";
    cin>>target;

	if(binarySearch(array,target,n))
	{
		cout<<"Desired value found"<<"\n";
	}else
	{
		cout<<"Desired value not found"<<"\n";
	}

	return 0;
}

