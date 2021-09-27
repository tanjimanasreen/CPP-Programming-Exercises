#include <bits/stdc++.h>
using namespace std;

int main() {

	int n,ran,s;
	cout<<"Please Enter the range"<<"\n";
	cin>>s;
	cout<<"Please Enter how many numbers you want to take"<<"\n";
	cin>>n;
	int a[s];
	int b[s];

	memset(a,0,sizeof a);
	memset(b,0,sizeof b);

	while(n--)
	{
		ran=rand()%s+1;
		a[ran]++;
		b[ran]++;
	}

	sort(b,b+s);

    cout<<"Random Numbers : Frequency"<<"\n";
	for(int i=s-1;i>=0;i--)
	{
		if(b[i]!=0)
		{
			for(int j=1;j<=s;j++)
			{
				if(b[i]==a[j])
				{
					cout<<j<<" : "<<a[j]<<"\n";
					a[j]=0;
					break;
				}
			}
		}
	}
	return 0;
}
