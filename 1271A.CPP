#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,mn,ans;
    cin>>a>>b>>c>>d>>e>>f;
    if(e<=f)
    {
        mn = min(b,min(c,d));
        d-=mn;
        ans = (f*mn);
        mn = min(a,d);
        ans+= (e*mn);
    }
    else
    {
        mn = min(a,d);
        d-=mn;
        ans = (e*mn);
        mn = min(b,min(c,d));
        ans += (f*mn);
    }
    cout<<ans<<endl;
    return 0;
}
