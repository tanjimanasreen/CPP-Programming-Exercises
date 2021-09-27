#include<iostream>
#include<cstdlib>
using namespace std;


void selectionSort(int a[],int num)
{
	int min;
	for(int i=0;i<num;i++)
	{
		min=i;
		for(int j=i+1;j<num;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}

		if(i!=min)
		{
			swap(a[i],a[min]);
		}
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

    selectionSort(a,num);

    cout<<"Sorted List"<<"\n";

    for(int i=0;i<num;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<"\n";


    return 0;

}
