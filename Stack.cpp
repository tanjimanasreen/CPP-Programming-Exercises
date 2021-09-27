#include<iostream>
using namespace std;

int main()
{
    int length;
    cout<<"Enter the length of the stack"<<endl;
    cin>>length;
    int s[length];
    int top;
    char c;
    int item;
    cout<<"Do you want to insert elements in your stack?..If yes,type y..else type n"<<endl;
    cin>>c;
    if(c=='y')
    {
        cout<<"Enter how many elements you want in stack"<<endl;
        cin>>top;
        cout<<"Enter elements"<<endl;
        for(int i=0;i<top;i++)
        {
            cin>>s[i];
        }
        cout<<"Stack before any push or pop"<<endl;
        for(int i=0;i<top;i++)
        {
            cout<<s[i]<<" ";
        }
        cout<<endl<<endl;

        cout<<"Now Push an item into stack"<<endl<<endl;

        if(top==length)
        {
            cout<<"Overflow!!!..Can't push any item"<<endl<<endl;
        }else{

            cin>>item;
            s[top]=item;

            cout<<"Stack after pushing an item"<<endl;
            for(int i=0;i<=top;i++)
            {
                cout<<s[i]<<" ";
            }

            top=top+1;
        }

        cout<<endl<<endl;

        cout<<"Now pop an item from the stack"<<endl;
        top=top-1;
        cout<<"Stack after popping an item"<<endl;
        for(int i=0;i<top;i++)
        {
            cout<<s[i]<<" ";
        }

    }else if(c=='n')
        {
            cout<<"Underflow!! Need to insert item first to pop from stack"<<endl<<endl;
            cout<<"Push an item first into the stack"<<endl;
            cin>>s[0];
            cout<<"Your Pushed item: "<<s[0]<<endl;

        }else{

            cout<<"Invalid Input!!!"<<endl;
        }

    return 0;
}
