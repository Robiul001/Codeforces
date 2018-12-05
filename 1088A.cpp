#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,a,b;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=x;j++)
        {
            a=(i*j);
            b=(i/j);
            if((i%j)==0 && a>x && b<x )
            {
                cout<<i<<" "<<j<<endl;
                return 0;
            }
        }
    }
    cout<<-1<<endl;
    return 0;
}
