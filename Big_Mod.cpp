#include <bits/stdc++.h>
using namespace std;

int bigMod(int a,int b,int c)
{
	if(b==0)
	{
		return 1;
	}

	if(b%2==0)
	{
		int d=bigMod(a,b/2,c);
		return (d*d)%c;

	}else if(b%2==1)
	{
		int part1=a%c;
		int part2=bigMod(a,b-1,c);

		return (part1*part2)%c;
	}
}
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%d\n",bigMod(a,b,c));
	return 0;
}
