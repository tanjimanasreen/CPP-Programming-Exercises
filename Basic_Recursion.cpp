#include<bits/stdc++.h>
using namespace std;

int a[]={1,2,3};
int n=2;
int faka=3;
vector<int>vec;
void rec(int pos,int sum)
{
    if(pos>=faka)
    {
        for(int i=0;i<vec.size();i++)
        {
            cout<<vec[i]<<" ";
        }
        cout<<": "<<sum;
        cout<<"\n";
        return;
    }

    for(int i=0;i<n;i++)
    {
        vec.push_back(i);
        if(i==0)
        {
          rec(pos+1,sum+0);
        }else
        {
            rec(pos+1,sum+a[pos]);
        }

        vec.pop_back();
    }

}

int main()
{
    rec(0,0);
    return 0;
}
