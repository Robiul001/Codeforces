#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        x=x-y;
        if(x==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}

