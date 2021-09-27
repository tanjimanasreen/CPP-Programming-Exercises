#include<iostream>
using namespace std;

int main()
{
    int a[5];
    cout<<"Size of whole array: ";
    cout<<sizeof(a)<<endl;
    cout<<"Size of one index: ";
    cout<<sizeof(a[1])<<endl;

    int x;
    cout<<"number of elements: ";
    x=sizeof(a)/sizeof(a[1]);
    cout<<x<<endl;

    return 0;
}
