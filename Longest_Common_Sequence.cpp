#include<iostream>
using namespace std;
string x,y;

int LCS(int len1,int len2)
{
	int c[len1+1][len2+1];

	for(int i=0;i<=len1;i++)
	{
		for(int j=0;j<=len2;j++)
		{
			if(i==0||j==0)
			{
				c[i][j]=0;
			}else if(x[i-1]==y[j-1])
			{
				c[i][j]=c[i-1][j-1]+1;
			}else
			{
				c[i][j]=max(c[i-1][j],c[i][j-1]);
			}
		}
	}

	return c[len1][len2];
}
int main()
{
	cout<<"Enter two strings"<<"\n";
	cin>>x;
	cin>>y;

	int len1=x.size()-1;
	int len2=x.size()-1;

	cout<<LCS(len1,len2)<<"\n";
	return 0;
}
