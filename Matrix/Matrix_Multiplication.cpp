#include<iostream>
using namespace std;

int main()
{
    int row,column,row1,column1;
    cout<<"Enter row and column of Matrix A:"<<"\n";
    cin>>row;
    cin>>column;

    int a[row][column];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Matrix A:"<<"\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<a[i][j]<<" ";

        }
        cout<<"\n";

    }


    cout<<"Enter row and column of Matrix B:"<<"\n";
    cin>>row1;
    cin>>column1;

    int b[row1][column1];

    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<column1;j++)
        {
            cin>>b[i][j];
        }

    }

    cout<<"Matrix B:"<<"\n";
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<column1;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }

    int c[row][column1];
    int sum=0;

    if(column!=row1)
    {
        cout<<"Not Possible"<<"\n";
    }else
    {
       for(int i=0;i<row;i++)
        {
            for(int j=0;j<column1;j++)
            {
                for(int k=0;k<column;k++)
                {
                    sum=sum+(a[i][k]*b[k][j]);
                }
                c[i][j]=sum;
                sum=0;
            }
        }

         cout<<"Matrix C=A*B:"<<"\n";

            for(int i=0;i<row;i++)
            {
                for(int j=0;j<column1;j++)
                {
                    cout<<c[i][j]<<" ";
                }
                cout<<"\n";
            }
    }



    return 0;

}
