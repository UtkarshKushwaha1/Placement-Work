#include<iostream>
using namespace std;

int main()
{   
    for(int i=0;i<5;i++)
    {
        for(int j=5-i-1;j>0;j--)
            cout<<" ";

        for(int j=0;j<2;j++)
            {
                
                cout<<i+1;
                if(i+1==1)
                    j++;
                for(int k=0;k<i;k++)
                cout<<" ";
            }
        

        cout<<endl;
    }

    for(int i=4;i>0;i--)
    {
        for(int j=4;j>=i;j--)
            cout<<" ";

        for(int j=0;j<2;j++)
            {
                
                cout<<i;
                if(i==1)
                    j++;
                
                for(int k=i-1;k>0;k--)
                cout<<" ";
            }

        cout<<endl;
    }
}