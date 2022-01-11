#include<iostream>
using namespace std;

int main()
{   int n=1,temp=1;;
    for(int i=0;i<5;i++)
    {
        for(int j=5-i-1;j>0;j--)
            cout<<" ";
        for(int k=n;k>0;k--)
            cout<<k;
            
        cout<<endl;
        temp+=2;
        n=temp;
    }
}