#include<bits/stdc++.h>

using namespace std;

int main()
{
    double income,tax;
    string gender;

    cin>>income;
    cin>>gender;

    if(income<350000.0&&gender=="Female")
    {
        tax=(income*10)/100.0;
        printf("Tax: %.1lf\n",tax);
    }else if(income<350000.0&&gender=="Male")
    {
        tax=(income*12)/100.0;
        printf("Tax: %.1lf\n",tax);
    }else if(income<700000.0&&income>=350000.0)
    {
        tax=(income*15)/100.0;
        printf("Tax: %.1lf\n",tax);
    }else if(income<10000000.0&&income>=700000.0)
    {
        tax=(income*20)/100.0;
        printf("Tax: %.1lf\n",tax);
    }else
    {
        tax=(income*30)/100.0;
        printf("Tax: %.1lf\n",tax);
    }

    return 0;
}
