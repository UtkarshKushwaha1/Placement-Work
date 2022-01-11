#include<iostream>
using namespace std;

int main()
{   int n=5;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<n--;
        }
        cout<<endl;

        if(i==4)
            cout<<543210<<endl;

        n=5;
    }

    for(int j=0;j<5;j++)
    {
        for(int i=0;i<5-j;i++)
        {
            cout<<n--;
        }

        cout<<endl;
        n=5;
    }
}