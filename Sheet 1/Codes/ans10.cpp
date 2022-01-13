#include<iostream>
using namespace std;

int main()
{   int n=3;
    for(int i=1;i<=3;i++)
    {
        for(int j=0;j<i-1;j++)
            cout<<" ";
        
        if(i==3)
            cout<<i;
        
        else{
            cout<<i;

            for(int j=0;j<=n;j++)
                cout<<" ";

            cout<<i;
            n-=2;
        }

        cout<<endl;
    }
    n=4;
    int p=2;
    for(int i=2;i>0;i--)
    {
        for(int j=0;j<i-1;j++)
            cout<<" ";
        
        cout<<n;
        for(int k=0;k<p;k++)
            cout<<" ";
        cout<<n<<endl;
        n++;
        p*=2;
    }
}