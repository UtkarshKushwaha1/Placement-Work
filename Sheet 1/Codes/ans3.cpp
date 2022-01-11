#include<iostream>
using namespace std;

int main()
{
    for(int i=0;i<5;i++)
    {
        for(int k=i;k>0;k--)
            cout<<" ";

        for(int j=5-i;j>0;j--)
            cout<<"*";
        cout<<endl;
    }
}