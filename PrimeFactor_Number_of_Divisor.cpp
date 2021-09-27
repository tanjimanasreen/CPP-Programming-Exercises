
#include <bits/stdc++.h>
using namespace std;

void seive(int n,bool prime[],int primelist[])
{
	memset(prime,true,n);
	prime[0]=prime[1]=false;

	for(int i=4;i<=n;i=i+2)
	{
		prime[i]=false;
	}

	int N=sqrt(n);
	for(int i=3;i<=N;i=i+2)
	{
		if(prime[i])
		{
			for(int j=i*i;j<=n;j=j+i*2)
			{
				prime[j]=false;
			}
		}
	}

	primelist[0]=2;
	int size=1;
	for(int i=3;i<=n;i=i+2)
	{
		if(prime[i])
		{
			primelist[size]=i;
			size++;
		}
	}

	for(int i=0;i<size;i++)
	{
		cout<<primelist[i]<<" ";
	}

	cout<<"\n";
}


void primeFactorization(int list[],int num,int primelist[])
{
    int count=0,number=num;

    int N=sqrt(num);

    for(int i=0;primelist[i]<=N;i++)
    {
    	if(num%primelist[i]==0)
    	{
    		while(num%primelist[i]==0)
    		{
    			num=num/primelist[i];
    			list[count]=primelist[i];
    			count++;
    		}
    	}
    }

    if(num>1)
    {
    	list[count]=num;
    	count++;
    }

    cout<<"Prime Factorization of "<<number<<"\n";

    for(int i=0;i<count;i++)
    {
    	cout<<list[i]<<" ";
    }
}

void numberOfDivisor(int lis[],int sizePF)
{
	int numDiv[1000];
	int count=0;

	for(int i=0;i<sizePF;i++)
	{
		numDiv[list[i]]++;
		count++;
	}
}

int main() {

	int n=rand()%100+1;
	cout<<"Random limit: "<<n<<"\n";
	bool prime[n];
	int primelist[n];
	int list[1000];

	seive(n,prime,primelist);

	int num=rand()%100+1;

	primeFactorization(list,num,primelist);

	int sizePF=sizeof(list)/sizeof(list[0]);


	return 0;
}
