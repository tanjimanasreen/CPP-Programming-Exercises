#include<iostream>
using namespace std;

int factorial(int n);

int factorial(int n)
{
    if(n>0){
        return n*factorial(n-1);
        }
    else{
        return 1;
        }
}

int main()
{
   int a;
   cout<<"enter your number"<<endl;
   cin>>a;

   int b=factorial(a);

   cout<<"Your Factorial Answer: "<<b<<endl;

   return 0;
}
