#include<iostream>
using namespace std;

int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=5-i-1;j>0;j--)
            cout<<" ";

        for(int k=0;k<=i;k++)
            cout<<"* ";

        cout<<endl;
    }

    for(int i=0;i<5;i++)
    {
        for(int k=0;k<=i;k++)
            cout<<" ";

        for(int j=5-i-1;j>0;j--)
            cout<<"* ";

        cout<<endl;
    }
    



}