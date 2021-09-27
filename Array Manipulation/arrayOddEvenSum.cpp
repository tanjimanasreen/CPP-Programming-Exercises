#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"How many numbers you want to insert?"<<endl;
    cin>>n;
    int a[n];
    int sumOdd=0;
    int sumEven=0;
    int countEven=0;
    int countOdd=0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int j=0;j<n;j++)
    {
        if(a[j]%2==0)
        {
            sumEven+=a[j];
            countEven++;
        }else{

            sumOdd+=a[j];
            countOdd++;
        }
    }

    cout<<"The Array has "<<countEven<<" even numbers and the sum is: "<<sumEven<<endl;
    cout<<"The Array has "<<countOdd<<" odd numbers and the sum is: "<<sumOdd<<endl;

    return 0;
}
