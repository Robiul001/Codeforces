#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l,r,d,q,t,temp;
    cin>>q;
    while(q--)
    {
        cin>>l>>r>>d;
        if(d<l)
        {
            cout<<d<<endl;
        }
        else
        {
            t=r%d;
            temp=r-t;
            cout<<temp+d<<endl;
        }
    }
    return 0;
}
