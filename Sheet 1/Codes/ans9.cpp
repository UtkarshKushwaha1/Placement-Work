#include<iostream>
using namespace std;

int main()
{   char c='E';int n=5;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<i;j++)
            {
                cout<<" ";
            }
        if(c=='A')
        cout<<" A";
        else{
            cout<<c;
            for(int j=0;j<n*2;j++)
                cout<<" ";
            
            cout<<c;
        }
        c--;
        n--;

        cout<<endl;
    }
}