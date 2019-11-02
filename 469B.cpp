#include<bits/stdc++.h>
using namespace std;

int a[55],b[55],c[55],d[55],e[1005];

int main()
{
    int p,q,l,r,ans=0;
    cin>>p>>q>>l>>r;
    for(int i=0;i<p;i++)
        cin>>a[i]>>b[i];
    for(int i=0;i<q;i++)
        cin>>c[i]>>d[i];
    for(int i=l;i<=r;i++)
    {
        for(int j=0;j<p;j++)
        {
            for(int k=0;k<q;k++)
            {
                if(i>=a[j]-d[k] && i<=b[j]-c[k])
                    e[i]++;
            }
        }
    }
    for(int i=l;i<=r;i++)
        if(e[i]!=0)
            ans++;
    cout<<ans<<endl;
    return 0;
}
