#include<iostream>
using namespace std;

int main()
{
    int a[10];
    int c=0;
    int n;
    cout<<"How many elements do u want to enter?"<<endl;
    cin>>n;

    if(n>10)
    {
        cout<<"Not enough space"<<endl;
    }else{
        cout<<"Enter Your elements: "<<endl;
        for(int i=0;i<n;i++)
        {
        cin>>a[i];
        c++;
        }
    }

    cout<<"Number of Elements Entered: "<<c<<endl;

    int b[20]={1,2,4,5,6};
    int cnt=0;

    for(int j=0;b[j]!='\0';j++)
    {
        cnt++;
    }

    cout<<"Number of Elements Assigned: "<<cnt<<endl;


    return 0;
}
