#include<iostream>
using namespace std;

void heapify(int element[],int number,int index)
{
    int parent=index;
    int left=2*index+1;
    int right=2*index+2;
    int temp;
    if(left<number&&element[left]<element[parent])
    {
        parent=left;
    }
    if(right<number&&element[right]<element[parent])
    {
        parent=right;
    }
    if(parent!=index)
    {
        temp=element[index];
        element[index]=element[parent];
        element[parent]=temp;

        heapify(element,number,parent);
    }
}

void heapsort(int element[],int number)
{
    int temp;
    for(int i=number/2-1;i>=0;i--)
    {
        heapify(element,number,i);
    }
    for(int i=number-1;i>=0;i--)
    {
        temp=element[0];
        element[0]=element[i];
        element[i]=temp;

        heapify(element,i,0);
    }
}

void show(int element[],int number)
{
    for(int i=0;i<number;i++)
    {
        cout<<element[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int element[10];
    int number=10;
    for(int i=0;i<number;i++)
    {
        cin>>element[i];
    }

    heapsort(element,number);
    cout<<"After Sort"<<endl;
    show(element,number);
    return 0;
}
