#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,s,diff,diff2;
    cin>>a>>b>>s;
    diff=abs(a)+abs(b);
    diff2=s-diff;
    if(diff>s)
    {
        cout<<"No";
    }
    else
    {
        if(diff2%2==0)
            cout<<"Yes";
        else
            cout<<"No";
    }
    return 0;
}
