#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int space=i;space<n;space++)
        {
            cout<<"  ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<j;
            if(i!=0)   /// because when i=0 then don't print space
                cout<<" ";
        }
        for(int j=i-1;j>=0;j--)
        {
            cout<<j;
            if(j>0)
                cout<<" ";
        }
        cout<<endl;
    }


    for(int i=n-1;i>=0;i--)
    {
        for(int space=n-1;space>=i;space--)
        {
            cout<<"  ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<j;
            if(i!=0)
                cout<<" ";
        }
        for(int j=i-1;j>=0;j--)
        {
            cout<<j;
            if(j>0)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
